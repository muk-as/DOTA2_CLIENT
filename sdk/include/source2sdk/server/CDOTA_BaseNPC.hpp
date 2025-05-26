#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CUnitOrders.hpp"
#include "source2sdk/client/DOTA_SHOP_TYPE.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_ModifierManager.hpp"
#include "source2sdk/server/CDOTA_UnitInventory.hpp"
#include "source2sdk/server/CLocalNPCObstructionsCache.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/NextBotCombatCharacter.hpp"
#include "source2sdk/server/ObstructionRelationshipClass_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_NeutralSpawner;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_ScriptedSpawner;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CLocomotionBase;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct INextBotBody;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1898
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkExcludeByName "m_bIsIllusion"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
        // static metadata: MNetworkExcludeByName "m_flAnimTime"
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByName "m_flEncodedController"
        // static metadata: MNetworkExcludeByName "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_flSimulationTime"
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByName "m_nForceBone"
        // static metadata: MNetworkExcludeByName "m_nHitboxSet"
        // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
        // static metadata: MNetworkExcludeByName "m_vecForce"
        // static metadata: MNetworkExcludeByName "m_vecMaxs"
        // static metadata: MNetworkExcludeByName "m_vecMins"
        // static metadata: MNetworkExcludeByName "m_vecSpecifiedSurroundingMaxs"
        // static metadata: MNetworkExcludeByName "m_vecSpecifiedSurroundingMins"
        // static metadata: MNetworkExcludeByName "m_vLookTargetPosition"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkIncludeByName "m_fFlags"
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkIncludeByName "m_lifeState"
        // static metadata: MNetworkIncludeByName "m_bTakesDamage"
        // static metadata: MNetworkIncludeByName "m_nTakeDamageFlags"
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
        // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
        // static metadata: MNetworkUserGroupProxy "CDOTA_BaseNPC"
        // static metadata: MNetworkUserGroupProxy "CDOTA_BaseNPC"
        // static metadata: MNetworkVarNames "uint32 m_iUnitType"
        // static metadata: MNetworkVarNames "bool m_bSelectionRingVisible"
        // static metadata: MNetworkVarNames "int m_iCurrentLevel"
        // static metadata: MNetworkVarNames "float m_flMana"
        // static metadata: MNetworkVarNames "float m_flMaxMana"
        // static metadata: MNetworkVarNames "float m_flManaThinkRegen"
        // static metadata: MNetworkVarNames "float m_flHealthThinkRegen"
        // static metadata: MNetworkVarNames "int m_nHealthBarOffsetOverride"
        // static metadata: MNetworkVarNames "bool m_bIsPhantom"
        // static metadata: MNetworkVarNames "bool m_bIsAncient"
        // static metadata: MNetworkVarNames "bool m_bIsBossCreature"
        // static metadata: MNetworkVarNames "bool m_bIsNeutralUnitType"
        // static metadata: MNetworkVarNames "bool m_bIsSummoned"
        // static metadata: MNetworkVarNames "bool m_bCanBeDominated"
        // static metadata: MNetworkVarNames "bool m_bCanRespawn"
        // static metadata: MNetworkVarNames "bool m_bIsClone"
        // static metadata: MNetworkVarNames "bool m_bHasUpgradeableAbilities"
        // static metadata: MNetworkVarNames "int m_iBKBChargesUsed"
        // static metadata: MNetworkVarNames "int m_iAeonChargesUsed"
        // static metadata: MNetworkVarNames "GameTime_t m_flRefresherUseTime"
        // static metadata: MNetworkVarNames "float m_flRefresherLastCooldown"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastDealtDamageTime"
        // static metadata: MNetworkVarNames "int m_iBotDebugData"
        // static metadata: MNetworkVarNames "bool m_bIsMoving"
        // static metadata: MNetworkVarNames "bool m_bCanUseWards"
        // static metadata: MNetworkVarNames "bool m_bCanUseAllItems"
        // static metadata: MNetworkVarNames "CHandle< CDOTA_NeutralSpawner> m_hNeutralSpawner"
        // static metadata: MNetworkVarNames "float m_flManaRegen"
        // static metadata: MNetworkVarNames "float m_flHealthRegen"
        // static metadata: MNetworkVarNames "int64 m_nTotalDamageTaken"
        // static metadata: MNetworkVarNames "int m_iBaseDamageMin"
        // static metadata: MNetworkVarNames "int m_iBaseDamageMax"
        // static metadata: MNetworkVarNames "int m_iAttackRange"
        // static metadata: MNetworkVarNames "int m_iMoveSpeed"
        // static metadata: MNetworkVarNames "GameTime_t m_flTauntCooldown"
        // static metadata: MNetworkVarNames "GameTime_t m_flTauntCooldown2"
        // static metadata: MNetworkVarNames "float m_fRevealRadius"
        // static metadata: MNetworkVarNames "float m_flBaseAttackTime"
        // static metadata: MNetworkVarNames "int m_iDayTimeVisionRange"
        // static metadata: MNetworkVarNames "int m_iNightTimeVisionRange"
        // static metadata: MNetworkVarNames "float m_flPhysicalArmorValue"
        // static metadata: MNetworkVarNames "float m_flMagicalResistanceValue"
        // static metadata: MNetworkVarNames "int m_iAttackCapabilities"
        // static metadata: MNetworkVarNames "int m_iSpecialAbility"
        // static metadata: MNetworkVarNames "int m_iXPBounty"
        // static metadata: MNetworkVarNames "int m_iXPBountyExtra"
        // static metadata: MNetworkVarNames "int m_iGoldBountyMin"
        // static metadata: MNetworkVarNames "int m_iGoldBountyMax"
        // static metadata: MNetworkVarNames "PlayerID_t m_nPlayerOwnerID"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastDamageTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastAttackTime"
        // static metadata: MNetworkVarNames "uint64 m_nUnitState64"
        // static metadata: MNetworkVarNames "int8 m_nUnitModelVariant"
        // static metadata: MNetworkVarNames "int m_iTaggedAsVisibleByTeam"
        // static metadata: MNetworkVarNames "uint64 m_iIsControllableByPlayer64"
        // static metadata: MNetworkVarNames "EHANDLE m_vecAbilities"
        // static metadata: MNetworkVarNames "CDOTA_ModifierManager m_ModifierManager"
        // static metadata: MNetworkVarNames "int m_iUnitNameIndex"
        // static metadata: MNetworkVarNames "int m_iDamageMin"
        // static metadata: MNetworkVarNames "int m_iDamageMax"
        // static metadata: MNetworkVarNames "int m_iDamageBonus"
        // static metadata: MNetworkVarNames "bool m_bIsWaitingToSpawn"
        // static metadata: MNetworkVarNames "bool m_bIsIllusion"
        // static metadata: MNetworkVarNames "uint8 m_nUnitLabelIndex"
        // static metadata: MNetworkVarNames "CUtlString m_szScaleset"
        // static metadata: MNetworkVarNames "CUtlString m_szUnitLabel"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerNPC"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hGoalEntity"
        // static metadata: MNetworkVarNames "CDOTA_UnitInventory m_Inventory"
        // static metadata: MNetworkVarNames "DOTA_SHOP_TYPE m_iCurShop"
        // static metadata: MNetworkVarNames "string_t m_szCurShopEntName"
        // static metadata: MNetworkVarNames "bool m_bStolenScepter"
        // static metadata: MNetworkVarNames "int m_anglediff"
        // static metadata: MNetworkVarNames "int m_NetworkActivity"
        // static metadata: MNetworkVarNames "int m_NetworkSequenceIndex"
        // static metadata: MNetworkVarNames "bool m_bShouldDoFlyHeightVisual"
        // static metadata: MNetworkVarNames "float m_flStartSequenceCycle"
        // static metadata: MNetworkVarNames "char m_CustomHealthLabel"
        // static metadata: MNetworkVarNames "Color m_CustomHealthLabelColor"
        #pragma pack(push, 1)
        class CDOTA_BaseNPC : public source2sdk::server::NextBotCombatCharacter
        {
        public:
            uint8_t _pad09c8[0x20]; // 0x9c8
            bool m_bPledgedOfrenda; // 0x9e8            
            uint8_t _pad09e9[0x3]; // 0x9e9
            // metadata: MNetworkEnable
            std::uint32_t m_iUnitType; // 0x9ec            
            Color m_colorGemColor; // 0x9f0            
            bool m_bHasColorGem; // 0x9f4            
            // metadata: MNetworkEnable
            bool m_bSelectionRingVisible; // 0x9f5            
            uint8_t _pad09f6[0xa]; // 0x9f6
            CUtlSymbolLarge m_iszBaseClass; // 0xa00            
            std::int32_t m_iStartingMaxHealth; // 0xa08            
            std::int32_t m_iStartingMaxMana; // 0xa0c            
            std::int32_t m_iStartingMana; // 0xa10            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentLevel; // 0xa14            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "65536,000000"
            float m_flMana; // 0xa18            
            float m_flBaseMaxMana; // 0xa1c            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "65536,000000"
            float m_flMaxMana; // 0xa20            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "14"
            // metadata: MNetworkMinValue "-50,000000"
            // metadata: MNetworkMaxValue "500,000000"
            float m_flManaThinkRegen; // 0xa24            
            float m_flBaseMaxHealth; // 0xa28            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            float m_flHealthThinkRegen; // 0xa2c            
            // metadata: MNetworkEnable
            std::int32_t m_nHealthBarOffsetOverride; // 0xa30            
            std::int32_t m_nHealthBarOffset; // 0xa34            
            // metadata: MNetworkEnable
            bool m_bIsPhantom; // 0xa38            
            // metadata: MNetworkEnable
            bool m_bIsAncient; // 0xa39            
            // metadata: MNetworkEnable
            bool m_bIsBossCreature; // 0xa3a            
            // metadata: MNetworkEnable
            bool m_bIsNeutralUnitType; // 0xa3b            
            bool m_bAutoAttacksByDefault; // 0xa3c            
            // metadata: MNetworkEnable
            bool m_bIsSummoned; // 0xa3d            
            // metadata: MNetworkEnable
            bool m_bCanBeDominated; // 0xa3e            
            // metadata: MNetworkEnable
            bool m_bCanRespawn; // 0xa3f            
            // metadata: MNetworkEnable
            bool m_bIsClone; // 0xa40            
            bool m_bConsideredHero; // 0xa41            
            bool m_bUsesConstantGesture; // 0xa42            
            bool m_bIsPlayingSingleForcedActivity; // 0xa43            
            // metadata: MNetworkEnable
            bool m_bHasUpgradeableAbilities; // 0xa44            
            uint8_t _pad0a45[0x3]; // 0xa45
            // metadata: MNetworkEnable
            std::int32_t m_iBKBChargesUsed; // 0xa48            
            // metadata: MNetworkEnable
            std::int32_t m_iAeonChargesUsed; // 0xa4c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRefresherUseTime; // 0xa50            
            // metadata: MNetworkEnable
            float m_flRefresherLastCooldown; // 0xa54            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDealtDamageTime; // 0xa58            
            // metadata: MNetworkEnable
            std::int32_t m_iBotDebugData; // 0xa5c            
            // metadata: MNetworkEnable
            bool m_bIsMoving; // 0xa60            
            uint8_t _pad0a61[0x19f]; // 0xa61
            float m_flChannelMultiplier; // 0xc00            
            // metadata: MNetworkEnable
            bool m_bCanUseWards; // 0xc04            
            // metadata: MNetworkEnable
            bool m_bCanUseAllItems; // 0xc05            
            uint8_t _pad0c06[0x2]; // 0xc06
            source2sdk::client::PlayerID_t m_iLastAbilityPlayer; // 0xc08            
            bool m_bIsPhantomBlocker; // 0xc0c            
            bool m_bBlocksCreepSpawn; // 0xc0d            
            bool m_bCanSellItems; // 0xc0e            
            uint8_t _pad0c0f[0x1]; // 0xc0f
            // metadata: MNetworkEnable
            // m_hNeutralSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_NeutralSpawner> m_hNeutralSpawner;
            char m_hNeutralSpawner[0x4]; // 0xc10            
            bool m_bTrackDamageTaken; // 0xc14            
            uint8_t _pad0c15[0x3]; // 0xc15
            source2sdk::entity2::GameTick_t m_nNextRegenThink; // 0xc18            
            source2sdk::entity2::GameTick_t m_nNextModifierThink; // 0xc1c            
            source2sdk::entity2::GameTick_t m_nNextModelScaleThink; // 0xc20            
            source2sdk::entity2::GameTick_t m_nNextUnitThink; // 0xc24            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            float m_flManaRegen; // 0xc28            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            float m_flHealthRegen; // 0xc2c            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int64_t m_nTotalDamageTaken; // 0xc30            
            float m_flHealthRegenCounter; // 0xc38            
            float m_flManaRegenCounter; // 0xc3c            
            float m_flAccumulatedHeal; // 0xc40            
            std::int32_t m_iBaseAttackSpeed; // 0xc44            
            // metadata: MNetworkEnable
            std::int32_t m_iBaseDamageMin; // 0xc48            
            // metadata: MNetworkEnable
            std::int32_t m_iBaseDamageMax; // 0xc4c            
            // metadata: MNetworkEnable
            std::int32_t m_iAttackRange; // 0xc50            
            std::int32_t m_iAttackRangeBuffer; // 0xc54            
            // metadata: MNetworkEnable
            std::int32_t m_iMoveSpeed; // 0xc58            
            float m_flTurnRate; // 0xc5c            
            std::int32_t m_iHasAggressiveStance; // 0xc60            
            bool m_bInAggressiveStance; // 0xc64            
            bool m_bInInjuredAggressiveStance; // 0xc65            
            uint8_t _pad0c66[0x2]; // 0xc66
            float m_flFollowRange; // 0xc68            
            std::int32_t m_iAcquisitionRange; // 0xc6c            
            float m_flAttackAnimationPoint; // 0xc70            
            float m_flHullRadius; // 0xc74            
            float m_flCollisionPadding; // 0xc78            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTauntCooldown; // 0xc7c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTauntCooldown2; // 0xc80            
            // metadata: MNetworkEnable
            float m_fRevealRadius; // 0xc84            
            float m_flProjectileCollisionSize; // 0xc88            
            source2sdk::server::ObstructionRelationshipClass_t m_ObstructionRelationshipClass; // 0xc8c            
            CUtlSymbolLarge m_iszParticleFolder; // 0xc90            
            CUtlSymbolLarge m_iszGameSoundsFile; // 0xc98            
            CUtlSymbolLarge m_iszVoiceFile; // 0xca0            
            CUtlSymbolLarge m_iszSoundSet; // 0xca8            
            CUtlSymbolLarge m_iszSelectionGroup; // 0xcb0            
            CUtlSymbolLarge m_iszAnimationModifier; // 0xcb8            
            uint8_t _pad0cc0[0x8]; // 0xcc0
            // metadata: MNetworkEnable
            float m_flBaseAttackTime; // 0xcc8            
            // metadata: MNetworkEnable
            std::int32_t m_iDayTimeVisionRange; // 0xccc            
            // metadata: MNetworkEnable
            std::int32_t m_iNightTimeVisionRange; // 0xcd0            
            float m_fBotAttackDesire; // 0xcd4            
            std::int32_t m_iUnitRelationshipClass; // 0xcd8            
            // metadata: MNetworkEnable
            float m_flPhysicalArmorValue; // 0xcdc            
            // metadata: MNetworkEnable
            float m_flMagicalResistanceValue; // 0xce0            
            std::int32_t m_iTeamName; // 0xce4            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iAttackCapabilities; // 0xce8            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iSpecialAbility; // 0xcec            
            std::int32_t m_iMoveCapabilities; // 0xcf0            
            std::int32_t m_iOriginalAttackCapabilities; // 0xcf4            
            // metadata: MNetworkEnable
            std::int32_t m_iXPBounty; // 0xcf8            
            // metadata: MNetworkEnable
            std::int32_t m_iXPBountyExtra; // 0xcfc            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldBountyMin; // 0xd00            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldBountyMax; // 0xd04            
            source2sdk::client::PlayerID_t m_nFarmClaimPlayerID; // 0xd08            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nPlayerOwnerID; // 0xd0c            
            CUtlSymbolLarge m_iszAbilityList[40]; // 0xd10            
            std::int32_t m_iAttackDamageType; // 0xe50            
            bool m_bIsIdle; // 0xe54            
            bool m_bHold; // 0xe55            
            bool m_bWasKilledPassively; // 0xe56            
            uint8_t _pad0e57[0x1]; // 0xe57
            source2sdk::server::CountdownTimer m_AngerTimer; // 0xe58            
            source2sdk::server::CountdownTimer m_AlertTimer; // 0xe70            
            // m_hAngerTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAngerTarget;
            char m_hAngerTarget[0x4]; // 0xe88            
            // m_hAlertTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAlertTarget;
            char m_hAlertTarget[0x4]; // 0xe8c            
            // m_hForceAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hForceAttackTarget;
            char m_hForceAttackTarget[0x4]; // 0xe90            
            bool m_bAllowAllyForceAttack; // 0xe94            
            uint8_t _pad0e95[0x3]; // 0xe95
            Vector m_vTargetLastKnownPosition; // 0xe98            
            uint8_t _pad0ea4[0x1c]; // 0xea4
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0xec0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0xec4            
            source2sdk::entity2::GameTime_t m_flTimeSinceLastAbilityNag; // 0xec8            
            source2sdk::entity2::GameTime_t m_flLastTeleportTime; // 0xecc            
            // metadata: MNetworkEnable
            std::uint64_t m_nUnitState64; // 0xed0            
            source2sdk::entity2::GameTime_t m_vLastVisibilityChange[15]; // 0xed8            
            uint8_t _pad0f14[0x1c]; // 0xf14
            bool m_bFirstSpawn; // 0xf30            
            bool m_bForceTransmit; // 0xf31            
            uint8_t _pad0f32[0x2]; // 0xf32
            // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttackTarget;
            char m_hAttackTarget[0x4]; // 0xf34            
            // m_hAggroTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAggroTarget;
            char m_hAggroTarget[0x4]; // 0xf38            
            // m_hCommandAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCommandAttackTarget;
            char m_hCommandAttackTarget[0x4]; // 0xf3c            
            CUtlSymbolLarge m_iszOriginalModel; // 0xf40            
            // metadata: MNetworkEnable
            std::int8_t m_nUnitModelVariant; // 0xf48            
            std::int8_t m_nUnitModelVariantCount; // 0xf49            
            bool m_bPseudoQueueOrders; // 0xf4a            
            bool m_bCastLocked; // 0xf4b            
            uint8_t _pad0f4c[0x1c]; // 0xf4c
            source2sdk::entity2::GameTime_t m_flAttackRegulator; // 0xf68            
            float m_flTimeDisparityTolerance; // 0xf6c            
            source2sdk::entity2::GameTime_t m_fAttackPhaseEndTime; // 0xf70            
            source2sdk::entity2::GameTime_t m_flPositionUpdateTime; // 0xf74            
            Vector m_vLastPositionSent; // 0xf78            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iTaggedAsVisibleByTeam; // 0xf84            
            // metadata: MNetworkEnable
            std::uint64_t m_iIsControllableByPlayer64; // 0xf88            
            source2sdk::client::PlayerID_t m_nControllingPlayerID; // 0xf90            
            bool m_bRunAIWhenControllableByPlayer; // 0xf94            
            uint8_t _pad0f95[0x3]; // 0xf95
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Abilities"
            // metadata: MNetworkPriority "32"
            // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecAbilities;
            char m_vecAbilities[0x18]; // 0xf98            
            // m_associatedEmptyAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_associatedEmptyAbilities;
            char m_associatedEmptyAbilities[0x18]; // 0xfb0            
            // m_hActiveAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActiveAbility;
            char m_hActiveAbility[0x4]; // 0xfc8            
            Vector m_vCursorLocation; // 0xfcc            
            // m_hCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCursorTarget;
            char m_hCursorTarget[0x4]; // 0xfd8            
            // m_hOriginalCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOriginalCursorTarget;
            char m_hOriginalCursorTarget[0x4]; // 0xfdc            
            bool m_bCursorTargetingNothing; // 0xfe0            
            uint8_t _pad0fe1[0x7]; // 0xfe1
            // metadata: MNetworkEnable
            source2sdk::server::CDOTA_ModifierManager m_ModifierManager; // 0xfe8            
            uint8_t _pad1338[0x8]; // 0x1338
            float m_flInvisibilityLevel; // 0x1340            
            uint8_t _pad1344[0x4]; // 0x1344
            CUtlSymbolLarge m_iszMapUnitName; // 0x1348            
            CUtlSymbolLarge m_iszUnitName; // 0x1350            
            // metadata: MNetworkEnable
            std::int32_t m_iUnitNameIndex; // 0x1358            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageMin; // 0x135c            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageMax; // 0x1360            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageBonus; // 0x1364            
            // metadata: MNetworkEnable
            bool m_bIsWaitingToSpawn; // 0x1368            
            uint8_t _pad1369[0x3]; // 0x1369
            std::int32_t m_iLeashType; // 0x136c            
            std::int32_t m_iAggroType; // 0x1370            
            bool m_bCreepIgnoreAggro; // 0x1374            
            bool m_bCreepFirstWave; // 0x1375            
            // metadata: MNetworkEnable
            bool m_bIsIllusion; // 0x1376            
            // metadata: MNetworkEnable
            std::uint8_t m_nUnitLabelIndex; // 0x1377            
            // metadata: MNetworkEnable
            CUtlString m_szScaleset; // 0x1378            
            // metadata: MNetworkEnable
            CUtlString m_szUnitLabel; // 0x1380            
            CUtlString m_strAnimationModifier; // 0x1388            
            uint8_t _pad1390[0x8]; // 0x1390
            // metadata: MNetworkEnable
            // m_hOwnerNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwnerNPC;
            char m_hOwnerNPC[0x4]; // 0x1398            
            uint8_t _pad139c[0x4]; // 0x139c
            source2sdk::server::CLocomotionBase* m_locomotor; // 0x13a0            
            source2sdk::server::INextBotBody* m_body; // 0x13a8            
            bool m_bNeverMoveToClearSpace; // 0x13b0            
            uint8_t _pad13b1[0x3]; // 0x13b1
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "SpectatorsOnly"
            // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGoalEntity;
            char m_hGoalEntity[0x4]; // 0x13b4            
            bool m_bMustReachEachGoalEntity; // 0x13b8            
            uint8_t _pad13b9[0x3]; // 0x13b9
            Vector m_vInitialGoalPosition; // 0x13bc            
            uint8_t _pad13c8[0x18]; // 0x13c8
            source2sdk::client::CUnitOrders m_CurrentQueuedOrder; // 0x13e0            
            uint8_t _pad1420[0x18]; // 0x1420
            // metadata: MNetworkEnable
            source2sdk::server::CDOTA_UnitInventory m_Inventory; // 0x1438            
            // m_hItemToDrop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hItemToDrop;
            char m_hItemToDrop[0x4]; // 0x1530            
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_SHOP_TYPE m_iCurShop; // 0x1534            
            // m_hLastNearShop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastNearShop;
            char m_hLastNearShop[0x4]; // 0x1538            
            uint8_t _pad153c[0x4]; // 0x153c
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szCurShopEntName; // 0x1540            
            bool m_bHasInventory; // 0x1548            
            uint8_t _pad1549[0x3]; // 0x1549
            float m_flBaselineModelScale; // 0x154c            
            float m_fModelScaleMultiplier; // 0x1550            
            float m_fModelScaleMultiplierChangeStart; // 0x1554            
            source2sdk::entity2::GameTime_t m_fModelScaleMultiplierChangeTime; // 0x1558            
            float m_flPreviousModelScale; // 0x155c            
            float m_fMaxModelScaleMultiplier; // 0x1560            
            bool m_bIsCamped; // 0x1564            
            bool m_bIsReturningHome; // 0x1565            
            bool m_bIgnoreHome; // 0x1566            
            bool m_bWantsToFlee; // 0x1567            
            bool m_bWakesNeutrals; // 0x1568            
            bool m_bNeutralIgnore; // 0x1569            
            bool m_bIdleAcquire; // 0x156a            
            bool m_bCanFollowUnseenUnits; // 0x156b            
            bool m_bExpired; // 0x156c            
            uint8_t _pad156d[0x3]; // 0x156d
            Vector m_vCurrentMovementOrderDestination; // 0x1570            
            Vector m_vPreviousMovementOrderDestination; // 0x157c            
            Vector m_vResumePreviousMovementRequestLocation; // 0x1588            
            bool m_bCurrentOrderIsMovement; // 0x1594            
            bool m_bPreviousOrderIsMovement; // 0x1595            
            bool m_bResumePreviousMovement; // 0x1596            
            bool m_bIsPatrolling; // 0x1597            
            source2sdk::entity2::GameTime_t m_flCreationTime; // 0x1598            
            bool m_bTargetMovedOutOfRange; // 0x159c            
            bool m_bChaseTargetMoves; // 0x159d            
            uint8_t _pad159e[0x2]; // 0x159e
            float m_flChaseDistance; // 0x15a0            
            // m_hChaseEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hChaseEntity;
            char m_hChaseEntity[0x4]; // 0x15a4            
            // m_ActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_ActivityModifiers;
            char m_ActivityModifiers[0x18]; // 0x15a8            
            bool m_bActivityModifiersDirty; // 0x15c0            
            uint8_t _pad15c1[0x7]; // 0x15c1
            // m_ActivityModifiersFromScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_ActivityModifiersFromScript;
            char m_ActivityModifiersFromScript[0x18]; // 0x15c8            
            source2sdk::entity2::GameTime_t m_flBlinkDaggerTime; // 0x15e0            
            float m_flAdditionalBattleMusicWeight; // 0x15e4            
            // metadata: MNetworkEnable
            bool m_bStolenScepter; // 0x15e8            
            bool m_bHasScepterCached; // 0x15e9            
            bool m_bHasShardCached; // 0x15ea            
            uint8_t _pad15eb[0x5]; // 0x15eb
            source2sdk::server::CLocalNPCObstructionsCache m_LocalNPCObstructionsCache; // 0x15f0            
            uint8_t _pad1610[0x20]; // 0x1610
            source2sdk::entity2::GameTime_t m_flCritBashFailUntil; // 0x1630            
            float m_flAttackTimeLostToLastTick; // 0x1634            
            float m_flAttackTimeAtLastTick; // 0x1638            
            float m_flCompanionDistance; // 0x163c            
            bool m_bIsPartyCompanion; // 0x1640            
            bool m_bCanPartyCompanionAttack; // 0x1641            
            uint8_t _pad1642[0x2]; // 0x1642
            // m_CompanionEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_CompanionEntity;
            char m_CompanionEntity[0x4]; // 0x1644            
            bool m_bFacePlayer; // 0x1648            
            uint8_t _pad1649[0x3]; // 0x1649
            source2sdk::entity2::GameTime_t m_flLastIdleChangeTime; // 0x164c            
            bool m_bUseNeutralCreepBehavior; // 0x1650            
            uint8_t _pad1651[0x27]; // 0x1651
            bool m_bHasBuiltWearableSpawnList; // 0x1678            
            uint8_t _pad1679[0x3]; // 0x1679
            source2sdk::entity2::GameTick_t m_nFoWFadeStartTime[15]; // 0x167c            
            std::int32_t m_nFOWVisibilityRadius; // 0x16b8            
            Vector m_vFOWOriginOverride; // 0x16bc            
            std::int32_t m_iTeamViewerID; // 0x16c8            
            uint8_t _pad16cc[0x4]; // 0x16cc
            CUtlString m_strLastKillerAbility; // 0x16d0            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_anglediff; // 0x16d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_NetworkActivity; // 0x16dc            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_NetworkSequenceIndex; // 0x16e0            
            // metadata: MNetworkEnable
            bool m_bShouldDoFlyHeightVisual; // 0x16e4            
            uint8_t _pad16e5[0x3]; // 0x16e5
            // metadata: MNetworkEnable
            float m_flStartSequenceCycle; // 0x16e8            
            bool m_bMidLoading; // 0x16ec            
            uint8_t _pad16ed[0x3]; // 0x16ed
            // m_hTutorialSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_ScriptedSpawner> m_hTutorialSpawner;
            char m_hTutorialSpawner[0x4]; // 0x16f0            
            uint8_t _pad16f4[0x4]; // 0x16f4
            source2sdk::server::CountdownTimer m_AngerCooldownTimer; // 0x16f8            
            std::int32_t m_iProjectileMoveSpeed; // 0x1710            
            uint8_t _pad1714[0x4]; // 0x1714
            CUtlSymbolLarge m_iszAutoAttackRangedParticle; // 0x1718            
            std::int32_t m_nPoseParameterTurn; // 0x1720            
            std::int32_t m_nPoseParameterRun; // 0x1724            
            float m_flLean; // 0x1728            
            float m_flRun; // 0x172c            
            // metadata: MNetworkEnable
            char m_CustomHealthLabel[256]; // 0x1730            
            // metadata: MNetworkEnable
            Color m_CustomHealthLabelColor; // 0x1830            
            source2sdk::client::item_definition_index_t m_nWearableDefIndex; // 0x1834            
            std::int8_t m_nArcanaLevel; // 0x1838            
            std::int8_t m_nDefaultArcanaLevel; // 0x1839            
            Color m_defaultColorGemColor; // 0x183a            
            bool m_bDisableDamageDisplay; // 0x183e            
            uint8_t _pad183f[0x1]; // 0x183f
            Color m_gibTintColor; // 0x1840            
            float m_flPathfindingSearchDepthScale; // 0x1844            
            // m_ActivitiesStarted has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_ActivitiesStarted;
            char m_ActivitiesStarted[0x18]; // 0x1848            
            // m_hIllusionOriginal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hIllusionOriginal;
            char m_hIllusionOriginal[0x4]; // 0x1860            
            // m_hDirectionalRangedFakeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hDirectionalRangedFakeTarget;
            char m_hDirectionalRangedFakeTarget[0x4]; // 0x1864            
            uint8_t _pad1868[0x28]; // 0x1868
            bool m_bShouldComputeRemainingPathLength; // 0x1890            
            uint8_t _pad1891[0x3]; // 0x1891
            float m_flRemainingPathLength; // 0x1894            
            
            // Datamap fields:
            // CUtlSymbolLarge Input_MoveTo; // 0x0
            // CUtlSymbolLarge Input_MoveToAttack; // 0x0
            // CUtlSymbolLarge Input_MoveToPositionAggressive; // 0x0
            // CUtlSymbolLarge Input_SpeechBubble; // 0x0
            // CUtlSymbolLarge Input_PlayVCD; // 0x0
            // CUtlSymbolLarge Input_ForcePlayActivityOnce; // 0x0
            // void Input_DestroyAllSpeechBubbles; // 0x0
            // float Input_SetFOWRevealRadius; // 0x0
            // CUtlSymbolLarge m_target; // 0x2f8
            // int32_t m_iMaxHealth; // 0x2d4
            // int32_t m_iHealth; // 0x2d0
            // uint8_t m_iTeamNum; // 0x33c
            // CHandle< CBaseEntity > econ_owner; // 0x7fffffff
            // int32_t EconItemCount; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC) == 0x1898);
    };
};
