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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkExcludeByName "m_bIsIllusion"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
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
        // static metadata: MNetworkVarNames "int m_iRefresherChargesUsed"
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
            uint8_t _pad_[0x_]; // 0x_
            bool m_bPledgedOfrenda; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint32_t m_iUnitType; // 0x_            
            Color m_colorGemColor; // 0x_            
            bool m_bHasColorGem; // 0x_            
            // metadata: MNetworkEnable
            bool m_bSelectionRingVisible; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszBaseClass; // 0x_            
            std::int32_t m_iStartingMaxHealth; // 0x_            
            std::int32_t m_iStartingMaxMana; // 0x_            
            std::int32_t m_iStartingMana; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentLevel; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "65536,000000"
            float m_flMana; // 0x_            
            float m_flBaseMaxMana; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "65536,000000"
            float m_flMaxMana; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "14"
            // metadata: MNetworkMinValue "-50,000000"
            // metadata: MNetworkMaxValue "500,000000"
            float m_flManaThinkRegen; // 0x_            
            float m_flBaseMaxHealth; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            float m_flHealthThinkRegen; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nHealthBarOffsetOverride; // 0x_            
            std::int32_t m_nHealthBarOffset; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsPhantom; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsAncient; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsBossCreature; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsNeutralUnitType; // 0x_            
            bool m_bAutoAttacksByDefault; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsSummoned; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCanBeDominated; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCanRespawn; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsClone; // 0x_            
            bool m_bConsideredHero; // 0x_            
            bool m_bUsesConstantGesture; // 0x_            
            bool m_bIsPlayingSingleForcedActivity; // 0x_            
            // metadata: MNetworkEnable
            bool m_bHasUpgradeableAbilities; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_iBKBChargesUsed; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iAeonChargesUsed; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iRefresherChargesUsed; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRefresherUseTime; // 0x_            
            // metadata: MNetworkEnable
            float m_flRefresherLastCooldown; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDealtDamageTime; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iBotDebugData; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsMoving; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flChannelMultiplier; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCanUseWards; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCanUseAllItems; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::PlayerID_t m_iLastAbilityPlayer; // 0x_            
            bool m_bIsPhantomBlocker; // 0x_            
            bool m_bBlocksCreepSpawn; // 0x_            
            bool m_bCanSellItems; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_hNeutralSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_NeutralSpawner> m_hNeutralSpawner;
            char m_hNeutralSpawner[0x_]; // 0x_            
            bool m_bTrackDamageTaken; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTick_t m_nNextRegenThink; // 0x_            
            source2sdk::entity2::GameTick_t m_nNextModifierThink; // 0x_            
            source2sdk::entity2::GameTick_t m_nNextModelScaleThink; // 0x_            
            source2sdk::entity2::GameTick_t m_nNextUnitThink; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            float m_flManaRegen; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            float m_flHealthRegen; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int64_t m_nTotalDamageTaken; // 0x_            
            float m_flHealthRegenCounter; // 0x_            
            float m_flManaRegenCounter; // 0x_            
            float m_flAccumulatedHeal; // 0x_            
            std::int32_t m_iBaseAttackSpeed; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iBaseDamageMin; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iBaseDamageMax; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iAttackRange; // 0x_            
            std::int32_t m_iAttackRangeBuffer; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iMoveSpeed; // 0x_            
            float m_flTurnRate; // 0x_            
            std::int32_t m_iHasAggressiveStance; // 0x_            
            bool m_bInAggressiveStance; // 0x_            
            bool m_bInInjuredAggressiveStance; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flFollowRange; // 0x_            
            std::int32_t m_iAcquisitionRange; // 0x_            
            float m_flAttackAnimationPoint; // 0x_            
            float m_flHullRadius; // 0x_            
            float m_flCollisionPadding; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTauntCooldown; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTauntCooldown2; // 0x_            
            // metadata: MNetworkEnable
            float m_fRevealRadius; // 0x_            
            float m_flProjectileCollisionSize; // 0x_            
            source2sdk::server::ObstructionRelationshipClass_t m_ObstructionRelationshipClass; // 0x_            
            CUtlSymbolLarge m_iszParticleFolder; // 0x_            
            CUtlSymbolLarge m_iszGameSoundsFile; // 0x_            
            CUtlSymbolLarge m_iszVoiceFile; // 0x_            
            CUtlSymbolLarge m_iszSoundSet; // 0x_            
            CUtlSymbolLarge m_iszSelectionGroup; // 0x_            
            CUtlSymbolLarge m_iszAnimationModifier; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flBaseAttackTime; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iDayTimeVisionRange; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iNightTimeVisionRange; // 0x_            
            float m_fBotAttackDesire; // 0x_            
            std::int32_t m_iUnitRelationshipClass; // 0x_            
            // metadata: MNetworkEnable
            float m_flPhysicalArmorValue; // 0x_            
            // metadata: MNetworkEnable
            float m_flMagicalResistanceValue; // 0x_            
            std::int32_t m_iTeamName; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iAttackCapabilities; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iSpecialAbility; // 0x_            
            std::int32_t m_iMoveCapabilities; // 0x_            
            std::int32_t m_iOriginalAttackCapabilities; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iXPBounty; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iXPBountyExtra; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldBountyMin; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldBountyMax; // 0x_            
            source2sdk::client::PlayerID_t m_nFarmClaimPlayerID; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nPlayerOwnerID; // 0x_            
            CUtlSymbolLarge m_iszAbilityList[40]; // 0x_            
            std::int32_t m_iAttackDamageType; // 0x_            
            bool m_bIsIdle; // 0x_            
            bool m_bHold; // 0x_            
            bool m_bWasKilledPassively; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_AngerTimer; // 0x_            
            source2sdk::server::CountdownTimer m_AlertTimer; // 0x_            
            // m_hAngerTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAngerTarget;
            char m_hAngerTarget[0x_]; // 0x_            
            // m_hAlertTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAlertTarget;
            char m_hAlertTarget[0x_]; // 0x_            
            // m_hForceAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hForceAttackTarget;
            char m_hForceAttackTarget[0x_]; // 0x_            
            bool m_bAllowAllyForceAttack; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vTargetLastKnownPosition; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flTimeSinceLastAbilityNag; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastTeleportTime; // 0x_            
            // metadata: MNetworkEnable
            std::uint64_t m_nUnitState64; // 0x_            
            source2sdk::entity2::GameTime_t m_vLastVisibilityChange[15]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bFirstSpawn; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttackTarget;
            char m_hAttackTarget[0x_]; // 0x_            
            // m_hAggroTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAggroTarget;
            char m_hAggroTarget[0x_]; // 0x_            
            // m_hCommandAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCommandAttackTarget;
            char m_hCommandAttackTarget[0x_]; // 0x_            
            CUtlSymbolLarge m_iszOriginalModel; // 0x_            
            // metadata: MNetworkEnable
            std::int8_t m_nUnitModelVariant; // 0x_            
            std::int8_t m_nUnitModelVariantCount; // 0x_            
            bool m_bPseudoQueueOrders; // 0x_            
            bool m_bCastLocked; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flAttackRegulator; // 0x_            
            float m_flTimeDisparityTolerance; // 0x_            
            source2sdk::entity2::GameTime_t m_fAttackPhaseEndTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flPositionUpdateTime; // 0x_            
            Vector m_vLastPositionSent; // 0x_            
            std::int32_t m_iTaggedAsVisibleByTeam; // 0x_            
            // metadata: MNetworkEnable
            std::uint64_t m_iIsControllableByPlayer64; // 0x_            
            source2sdk::client::PlayerID_t m_nControllingPlayerID; // 0x_            
            bool m_bRunAIWhenControllableByPlayer; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Abilities"
            // metadata: MNetworkPriority "32"
            // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecAbilities;
            char m_vecAbilities[0x_]; // 0x_            
            // m_associatedEmptyAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_associatedEmptyAbilities;
            char m_associatedEmptyAbilities[0x_]; // 0x_            
            // m_hActiveAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActiveAbility;
            char m_hActiveAbility[0x_]; // 0x_            
            VectorWS m_vCursorLocation; // 0x_            
            // m_hCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCursorTarget;
            char m_hCursorTarget[0x_]; // 0x_            
            // m_hOriginalCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOriginalCursorTarget;
            char m_hOriginalCursorTarget[0x_]; // 0x_            
            bool m_bCursorTargetingNothing; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::server::CDOTA_ModifierManager m_ModifierManager; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flInvisibilityLevel; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszMapUnitName; // 0x_            
            CUtlSymbolLarge m_iszUnitName; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iUnitNameIndex; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageMin; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageMax; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageBonus; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsWaitingToSpawn; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iLeashType; // 0x_            
            std::int32_t m_iAggroType; // 0x_            
            bool m_bCreepIgnoreAggro; // 0x_            
            bool m_bCreepFirstWave; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsIllusion; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_nUnitLabelIndex; // 0x_            
            // metadata: MNetworkEnable
            CUtlString m_szScaleset; // 0x_            
            // metadata: MNetworkEnable
            CUtlString m_szUnitLabel; // 0x_            
            CUtlString m_strAnimationModifier; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_hOwnerNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwnerNPC;
            char m_hOwnerNPC[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CLocomotionBase* m_locomotor; // 0x_            
            source2sdk::server::INextBotBody* m_body; // 0x_            
            bool m_bNeverMoveToClearSpace; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "SpectatorsOnly"
            // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGoalEntity;
            char m_hGoalEntity[0x_]; // 0x_            
            bool m_bMustReachEachGoalEntity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vInitialGoalPosition; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CUnitOrders m_CurrentQueuedOrder; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::server::CDOTA_UnitInventory m_Inventory; // 0x_            
            // m_hItemToDrop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hItemToDrop;
            char m_hItemToDrop[0x_]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_SHOP_TYPE m_iCurShop; // 0x_            
            // m_hLastNearShop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastNearShop;
            char m_hLastNearShop[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szCurShopEntName; // 0x_            
            bool m_bHasInventory; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flBaselineModelScale; // 0x_            
            float m_fModelScaleMultiplier; // 0x_            
            float m_fModelScaleMultiplierChangeStart; // 0x_            
            source2sdk::entity2::GameTime_t m_fModelScaleMultiplierChangeTime; // 0x_            
            float m_flPreviousModelScale; // 0x_            
            float m_fMaxModelScaleMultiplier; // 0x_            
            bool m_bIsCamped; // 0x_            
            bool m_bIsReturningHome; // 0x_            
            bool m_bIgnoreHome; // 0x_            
            bool m_bWantsToFlee; // 0x_            
            bool m_bWakesNeutrals; // 0x_            
            bool m_bNeutralIgnore; // 0x_            
            bool m_bIdleAcquire; // 0x_            
            bool m_bCanFollowUnseenUnits; // 0x_            
            bool m_bExpired; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vCurrentMovementOrderDestination; // 0x_            
            Vector m_vPreviousMovementOrderDestination; // 0x_            
            Vector m_vResumePreviousMovementRequestLocation; // 0x_            
            bool m_bCurrentOrderIsMovement; // 0x_            
            bool m_bPreviousOrderIsMovement; // 0x_            
            bool m_bResumePreviousMovement; // 0x_            
            bool m_bIsPatrolling; // 0x_            
            source2sdk::entity2::GameTime_t m_flCreationTime; // 0x_            
            bool m_bTargetMovedOutOfRange; // 0x_            
            bool m_bChaseTargetMoves; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flChaseDistance; // 0x_            
            // m_hChaseEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hChaseEntity;
            char m_hChaseEntity[0x_]; // 0x_            
            // m_ActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_ActivityModifiers;
            char m_ActivityModifiers[0x_]; // 0x_            
            bool m_bActivityModifiersDirty; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_ActivityModifiersFromScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_ActivityModifiersFromScript;
            char m_ActivityModifiersFromScript[0x_]; // 0x_            
            source2sdk::entity2::GameTime_t m_flBlinkDaggerTime; // 0x_            
            float m_flAdditionalBattleMusicWeight; // 0x_            
            // metadata: MNetworkEnable
            bool m_bStolenScepter; // 0x_            
            bool m_bHasScepterCached; // 0x_            
            bool m_bHasShardCached; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CLocalNPCObstructionsCache m_LocalNPCObstructionsCache; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flCritBashFailUntil; // 0x_            
            float m_flAttackTimeLostToLastTick; // 0x_            
            float m_flAttackTimeAtLastTick; // 0x_            
            float m_flCompanionDistance; // 0x_            
            bool m_bIsPartyCompanion; // 0x_            
            bool m_bCanPartyCompanionAttack; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_CompanionEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_CompanionEntity;
            char m_CompanionEntity[0x_]; // 0x_            
            bool m_bFacePlayer; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flLastIdleChangeTime; // 0x_            
            bool m_bUseNeutralCreepBehavior; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bHasBuiltWearableSpawnList; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTick_t m_nFoWFadeStartTime[15]; // 0x_            
            std::int32_t m_nFOWVisibilityRadius; // 0x_            
            VectorWS m_vFOWOriginOverride; // 0x_            
            std::int32_t m_iTeamViewerID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strLastKillerAbility; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_anglediff; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_NetworkActivity; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_NetworkSequenceIndex; // 0x_            
            // metadata: MNetworkEnable
            bool m_bShouldDoFlyHeightVisual; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flStartSequenceCycle; // 0x_            
            bool m_bMidLoading; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hTutorialSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_ScriptedSpawner> m_hTutorialSpawner;
            char m_hTutorialSpawner[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_AngerCooldownTimer; // 0x_            
            std::int32_t m_iProjectileMoveSpeed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszAutoAttackRangedParticle; // 0x_            
            std::int32_t m_nPoseParameterTurn; // 0x_            
            std::int32_t m_nPoseParameterRun; // 0x_            
            float m_flLean; // 0x_            
            float m_flRun; // 0x_            
            // metadata: MNetworkEnable
            char m_CustomHealthLabel[256]; // 0x_            
            // metadata: MNetworkEnable
            Color m_CustomHealthLabelColor; // 0x_            
            source2sdk::client::item_definition_index_t m_nWearableDefIndex; // 0x_            
            std::int8_t m_nArcanaLevel; // 0x_            
            std::int8_t m_nDefaultArcanaLevel; // 0x_            
            Color m_defaultColorGemColor; // 0x_            
            bool m_bDisableDamageDisplay; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Color m_gibTintColor; // 0x_            
            float m_flPathfindingSearchDepthScale; // 0x_            
            // m_ActivitiesStarted has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_ActivitiesStarted;
            char m_ActivitiesStarted[0x_]; // 0x_            
            // m_hIllusionOriginal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hIllusionOriginal;
            char m_hIllusionOriginal[0x_]; // 0x_            
            // m_hDirectionalRangedFakeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hDirectionalRangedFakeTarget;
            char m_hDirectionalRangedFakeTarget[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bShouldComputeRemainingPathLength; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flRemainingPathLength; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_AbilitiesPendingDelete has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AbilitiesPendingDelete;
            char m_AbilitiesPendingDelete[0x_]; // 0x_            
            
            // Datamap fields:
            // CUtlSymbolLarge Input_MoveTo; // 0x_
            // CUtlSymbolLarge Input_MoveToAttack; // 0x_
            // CUtlSymbolLarge Input_MoveToPositionAggressive; // 0x_
            // CUtlSymbolLarge Input_SpeechBubble; // 0x_
            // CUtlSymbolLarge Input_PlayVCD; // 0x_
            // CUtlSymbolLarge Input_ForcePlayActivityOnce; // 0x_
            // void Input_DestroyAllSpeechBubbles; // 0x_
            // float Input_SetFOWRevealRadius; // 0x_
            // CUtlSymbolLarge m_target; // 0x_
            // int32_t m_iMaxHealth; // 0x_
            // int32_t m_iHealth; // 0x_
            // uint8_t m_iTeamNum; // 0x_
            // CHandle< CBaseEntity > econ_owner; // 0x_
            // int32_t EconItemCount; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC) == 0x_);
    };
};
