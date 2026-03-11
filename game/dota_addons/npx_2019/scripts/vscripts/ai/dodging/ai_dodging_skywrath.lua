
local SKYWRATH_BOT_STATE_IDLE					= 0
local SKYWRATH_BOT_STATE_CAST_CONCUSSIVE_SHOT		= 1
local SKYWRATH_BOT_STATE_PAUSE			= 2
local SKYWRATH_BOT_STATE_TP					= 3
local SKYWRATH_BOT_STATE_INACTIVE				= 4


-----------------------------------------------------------------------------------------------------

if CDodgingSkywrathBot == nil then
	CDodgingSkywrathBot = class({})
end

function CDodgingSkywrathBot:constructor( me )
	self.me = me
	self.taskName = taskName
	self.pauseDuration = pauseDuration

	self.hAbilityConcussiveBolt = self.me:FindAbilityByName( "skywrath_mage_concussive_shot" )

	self.nBotState = SKYWRATH_BOT_STATE_IDLE

	self.me:AddNewModifier(nil, nil, "modifier_fountain_aura_buff", {})

	for _,hTower in ipairs( Entities:FindAllByClassname( "ent_dota_fountain" ) ) do
		if hTower:GetTeam() == me:GetTeam() then
			self.hTpLocation = hTower
			break
		end
	end

	self.hTownPortalItem = nil
	self.LastBoltTime = GameRules:GetGameTime() - 6
	
	-- Works out whether we're in the first or second skywrath section
	local hTask = GameRules.DotaNPX:GetTask( "dodge_all_missiles_1" )
    	if hTask ~= nil and hTask:IsCompleted() == false then
    		self.taskName = "dodge_all_missiles_1"
    		self.pauseDuration = 2.5
    	else
            self.taskName = "dodge_all_missiles_2"
            self.pauseDuration = 2.5
    	end

end


function CDodgingSkywrathBot:BotThink()

	if not IsServer() then
		return
	end

	if not self.me:IsAlive() then
		return
	end

	if GameRules:IsGamePaused() then
		return
	end

	if self.nBotState == SKYWRATH_BOT_STATE_INACTIVE then
		self.me:RemoveSelf()
		return -1
	end

	if self.hTownPortalItem == nil then
		self.hTownPortalItem = self.me:FindItemInInventory( "item_tpscroll" )
		if self.hTownPortalItem then
			self.hTownPortalItem:EndCooldown()
		end
	end
	self.me:SetHealth( self.me:GetMaxHealth() )
	
	local hTask = GameRules.DotaNPX:GetTask( self.taskName )
	if hTask ~= nil and hTask:IsCompleted() == true then
		self.nBotState = SKYWRATH_BOT_STATE_TP
	end

	if self.nBotState == SKYWRATH_BOT_STATE_IDLE then

		local Heroes = FindUnitsInRadius( DOTA_TEAM_BADGUYS, self.me:GetOrigin(), self.me, 2000, DOTA_UNIT_TARGET_TEAM_ENEMY, DOTA_UNIT_TARGET_HERO, DOTA_UNIT_TARGET_FLAG_NOT_ILLUSIONS + DOTA_UNIT_TARGET_FLAG_FOW_VISIBLE, 0, false )
		if #Heroes > 0 then
			self.hAttackTarget = Heroes[1]
			self.nBotState = SKYWRATH_BOT_STATE_CAST_CONCUSSIVE_SHOT
		else
			return 1
		end


	elseif self.nBotState == SKYWRATH_BOT_STATE_CAST_CONCUSSIVE_SHOT then

        self.hAbilityConcussiveBolt:EndCooldown()	

        local vDirection = self.hAttackTarget:GetAbsOrigin() - self.me:GetAbsOrigin()

        self.me:SetForwardVector(vDirection)
        if self.hAbilityConcussiveBolt ~= nil and self.hAbilityConcussiveBolt:GetLevel() > 0 and self.hAbilityConcussiveBolt:IsFullyCastable() and GameRules:GetGameTime() >= self.LastBoltTime + self.pauseDuration then
            -- refresh the player 
            RefreshHero( self.hAttackTarget)
            self.hAttackTarget:RemoveModifierByName("modifier_invulnerable")
            local nFXIndex = ParticleManager:CreateParticle( "particles/items2_fx/refresher.vpcf", PATTACH_CUSTOMORIGIN, self.hAttackTarget )
            ParticleManager:SetParticleControlEnt( nFXIndex, 0, self.hAttackTarget, PATTACH_POINT_FOLLOW, "attach_hitloc", self.hAttackTarget:GetAbsOrigin(), true )
            ParticleManager:ReleaseParticleIndex( nFXIndex )
            
            ExecuteOrderFromTable( {
                UnitIndex = self.me:entindex(),
                OrderType = DOTA_UNIT_ORDER_CAST_NO_TARGET,
                AbilityIndex = self.hAbilityConcussiveBolt:entindex(),
                TargetIndex = self.hAttackTarget:entindex(),
                Queue = true
            } )
            self.LastBoltTime = GameRules:GetGameTime()
            self.nBotState = SKYWRATH_BOT_STATE_PAUSE
            self.hAbilityConcussiveBolt:RefundManaCost()
        end
        
        return 1

	 elseif self.nBotState == SKYWRATH_BOT_STATE_PAUSE then
         
        if GameRules:GetGameTime() >= self.LastBoltTime + self.pauseDuration then
            self.nBotState = SKYWRATH_BOT_STATE_CAST_CONCUSSIVE_SHOT
        end

		return 3
	elseif self.nBotState == SKYWRATH_BOT_STATE_TP then
		if self.hTownPortalItem and self.hTownPortalItem:IsNull() == false then
			ExecuteOrderFromTable( {
				UnitIndex = self.me:entindex(),
				OrderType = DOTA_UNIT_ORDER_CAST_POSITION,
				AbilityIndex = self.hTownPortalItem:entindex(),
				Position = self.hTpLocation:GetAbsOrigin(),
			} )
		
			if not self.hTownPortalItem:IsFullyCastable() and not self.hTownPortalItem:IsChanneling() then
				self.nBotState = SKYWRATH_BOT_STATE_INACTIVE
				return -1
			end
		end
	end
	return 3
end

-----------------------------------------------------------------------------------------------------

function Spawn( entityKeyValues )
    print ( "SKYWRATH: Spawn Key Values:" .. tostring(#entityKeyValues) )
    for k, v in pairs( entityKeyValues ) do
        print ( tostring( k ) .. " => " .. tostring( v ) )
    end
	if IsServer() then
		thisEntity:SetContextThink( "CDodgingSkywrathBotThink", CDodgingSkywrathBotThink, 1 )

		thisEntity.Bot = CDodgingSkywrathBot( thisEntity )
	end
end

function CDodgingSkywrathBotThink()
	if IsServer() == false then
		return -1
	end

    if thisEntity.Bot ~= nil then
	    thisEntity.Bot:BotThink()
	end

	return 1
end


