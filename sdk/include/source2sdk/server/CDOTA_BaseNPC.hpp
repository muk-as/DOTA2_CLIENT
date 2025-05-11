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
        // Size: 0x1860
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
            uint8_t _pad09a0[0x20]; // 0x9a0
            bool m_bPledgedOfrenda; // 0x9c0            
            uint8_t _pad09c1[0x3]; // 0x9c1
            std::uint32_t m_iUnitType; // 0x9c4            
            Color m_colorGemColor; // 0x9c8            
            bool m_bHasColorGem; // 0x9cc            
            // metadata: MNetworkEnable
            bool m_bSelectionRingVisible; // 0x9cd            
            uint8_t _pad09ce[0xa]; // 0x9ce
            CUtlSymbolLarge m_iszBaseClass; // 0x9d8            
            std::int32_t m_iStartingMaxHealth; // 0x9e0            
            std::int32_t m_iStartingMaxMana; // 0x9e4            
            std::int32_t m_iStartingMana; // 0x9e8            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentLevel; // 0x9ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "65536,000000"
            float m_flMana; // 0x9f0            
            float m_flBaseMaxMana; // 0x9f4            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "65536,000000"
            float m_flMaxMana; // 0x9f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "14"
            // metadata: MNetworkMinValue "-50,000000"
            // metadata: MNetworkMaxValue "500,000000"
            float m_flManaThinkRegen; // 0x9fc            
            float m_flBaseMaxHealth; // 0xa00            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            float m_flHealthThinkRegen; // 0xa04            
            // metadata: MNetworkEnable
            std::int32_t m_nHealthBarOffsetOverride; // 0xa08            
            std::int32_t m_nHealthBarOffset; // 0xa0c            
            // metadata: MNetworkEnable
            bool m_bIsPhantom; // 0xa10            
            // metadata: MNetworkEnable
            bool m_bIsAncient; // 0xa11            
            // metadata: MNetworkEnable
            bool m_bIsBossCreature; // 0xa12            
            // metadata: MNetworkEnable
            bool m_bIsNeutralUnitType; // 0xa13            
            bool m_bAutoAttacksByDefault; // 0xa14            
            // metadata: MNetworkEnable
            bool m_bIsSummoned; // 0xa15            
            // metadata: MNetworkEnable
            bool m_bCanBeDominated; // 0xa16            
            // metadata: MNetworkEnable
            bool m_bCanRespawn; // 0xa17            
            // metadata: MNetworkEnable
            bool m_bIsClone; // 0xa18            
            bool m_bConsideredHero; // 0xa19            
            bool m_bUsesConstantGesture; // 0xa1a            
            bool m_bIsPlayingSingleForcedActivity; // 0xa1b            
            // metadata: MNetworkEnable
            bool m_bHasUpgradeableAbilities; // 0xa1c            
            uint8_t _pad0a1d[0x3]; // 0xa1d
            // metadata: MNetworkEnable
            std::int32_t m_iBKBChargesUsed; // 0xa20            
            // metadata: MNetworkEnable
            std::int32_t m_iAeonChargesUsed; // 0xa24            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRefresherUseTime; // 0xa28            
            // metadata: MNetworkEnable
            float m_flRefresherLastCooldown; // 0xa2c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDealtDamageTime; // 0xa30            
            // metadata: MNetworkEnable
            std::int32_t m_iBotDebugData; // 0xa34            
            // metadata: MNetworkEnable
            bool m_bIsMoving; // 0xa38            
            uint8_t _pad0a39[0x19f]; // 0xa39
            float m_flChannelMultiplier; // 0xbd8            
            // metadata: MNetworkEnable
            bool m_bCanUseWards; // 0xbdc            
            // metadata: MNetworkEnable
            bool m_bCanUseAllItems; // 0xbdd            
            uint8_t _pad0bde[0x2]; // 0xbde
            source2sdk::client::PlayerID_t m_iLastAbilityPlayer; // 0xbe0            
            bool m_bIsPhantomBlocker; // 0xbe4            
            bool m_bBlocksCreepSpawn; // 0xbe5            
            bool m_bCanSellItems; // 0xbe6            
            uint8_t _pad0be7[0x1]; // 0xbe7
            // metadata: MNetworkEnable
            // m_hNeutralSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_NeutralSpawner> m_hNeutralSpawner;
            char m_hNeutralSpawner[0x4]; // 0xbe8            
            bool m_bTrackDamageTaken; // 0xbec            
            uint8_t _pad0bed[0x3]; // 0xbed
            source2sdk::entity2::GameTick_t m_nNextRegenThink; // 0xbf0            
            source2sdk::entity2::GameTick_t m_nNextModifierThink; // 0xbf4            
            source2sdk::entity2::GameTick_t m_nNextModelScaleThink; // 0xbf8            
            source2sdk::entity2::GameTick_t m_nNextUnitThink; // 0xbfc            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            float m_flManaRegen; // 0xc00            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            float m_flHealthRegen; // 0xc04            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int64_t m_nTotalDamageTaken; // 0xc08            
            float m_flHealthRegenCounter; // 0xc10            
            float m_flManaRegenCounter; // 0xc14            
            float m_flAccumulatedHeal; // 0xc18            
            std::int32_t m_iBaseAttackSpeed; // 0xc1c            
            // metadata: MNetworkEnable
            std::int32_t m_iBaseDamageMin; // 0xc20            
            // metadata: MNetworkEnable
            std::int32_t m_iBaseDamageMax; // 0xc24            
            // metadata: MNetworkEnable
            std::int32_t m_iAttackRange; // 0xc28            
            std::int32_t m_iAttackRangeBuffer; // 0xc2c            
            // metadata: MNetworkEnable
            std::int32_t m_iMoveSpeed; // 0xc30            
            float m_flTurnRate; // 0xc34            
            std::int32_t m_iHasAggressiveStance; // 0xc38            
            bool m_bInAggressiveStance; // 0xc3c            
            bool m_bInInjuredAggressiveStance; // 0xc3d            
            uint8_t _pad0c3e[0x2]; // 0xc3e
            float m_flFollowRange; // 0xc40            
            std::int32_t m_iAcquisitionRange; // 0xc44            
            float m_flAttackAnimationPoint; // 0xc48            
            float m_flHullRadius; // 0xc4c            
            float m_flCollisionPadding; // 0xc50            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTauntCooldown; // 0xc54            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTauntCooldown2; // 0xc58            
            // metadata: MNetworkEnable
            float m_fRevealRadius; // 0xc5c            
            float m_flProjectileCollisionSize; // 0xc60            
            source2sdk::server::ObstructionRelationshipClass_t m_ObstructionRelationshipClass; // 0xc64            
            CUtlSymbolLarge m_iszParticleFolder; // 0xc68            
            CUtlSymbolLarge m_iszGameSoundsFile; // 0xc70            
            CUtlSymbolLarge m_iszVoiceFile; // 0xc78            
            CUtlSymbolLarge m_iszSoundSet; // 0xc80            
            CUtlSymbolLarge m_iszSelectionGroup; // 0xc88            
            CUtlSymbolLarge m_iszAnimationModifier; // 0xc90            
            uint8_t _pad0c98[0x8]; // 0xc98
            // metadata: MNetworkEnable
            float m_flBaseAttackTime; // 0xca0            
            // metadata: MNetworkEnable
            std::int32_t m_iDayTimeVisionRange; // 0xca4            
            // metadata: MNetworkEnable
            std::int32_t m_iNightTimeVisionRange; // 0xca8            
            float m_fBotAttackDesire; // 0xcac            
            std::int32_t m_iUnitRelationshipClass; // 0xcb0            
            // metadata: MNetworkEnable
            float m_flPhysicalArmorValue; // 0xcb4            
            // metadata: MNetworkEnable
            float m_flMagicalResistanceValue; // 0xcb8            
            std::int32_t m_iTeamName; // 0xcbc            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iAttackCapabilities; // 0xcc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iSpecialAbility; // 0xcc4            
            std::int32_t m_iMoveCapabilities; // 0xcc8            
            std::int32_t m_iOriginalAttackCapabilities; // 0xccc            
            // metadata: MNetworkEnable
            std::int32_t m_iXPBounty; // 0xcd0            
            // metadata: MNetworkEnable
            std::int32_t m_iXPBountyExtra; // 0xcd4            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldBountyMin; // 0xcd8            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldBountyMax; // 0xcdc            
            source2sdk::client::PlayerID_t m_nFarmClaimPlayerID; // 0xce0            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nPlayerOwnerID; // 0xce4            
            CUtlSymbolLarge m_iszAbilityList[40]; // 0xce8            
            std::int32_t m_iAttackDamageType; // 0xe28            
            bool m_bIsIdle; // 0xe2c            
            bool m_bHold; // 0xe2d            
            bool m_bWasKilledPassively; // 0xe2e            
            uint8_t _pad0e2f[0x1]; // 0xe2f
            source2sdk::server::CountdownTimer m_AngerTimer; // 0xe30            
            source2sdk::server::CountdownTimer m_AlertTimer; // 0xe48            
            // m_hAngerTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAngerTarget;
            char m_hAngerTarget[0x4]; // 0xe60            
            // m_hAlertTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAlertTarget;
            char m_hAlertTarget[0x4]; // 0xe64            
            // m_hForceAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hForceAttackTarget;
            char m_hForceAttackTarget[0x4]; // 0xe68            
            bool m_bAllowAllyForceAttack; // 0xe6c            
            uint8_t _pad0e6d[0x3]; // 0xe6d
            Vector m_vTargetLastKnownPosition; // 0xe70            
            uint8_t _pad0e7c[0x1c]; // 0xe7c
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0xe98            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0xe9c            
            source2sdk::entity2::GameTime_t m_flTimeSinceLastAbilityNag; // 0xea0            
            source2sdk::entity2::GameTime_t m_flLastTeleportTime; // 0xea4            
            // metadata: MNetworkEnable
            std::uint64_t m_nUnitState64; // 0xea8            
            source2sdk::entity2::GameTime_t m_vLastVisibilityChange[15]; // 0xeb0            
            uint8_t _pad0eec[0x1c]; // 0xeec
            bool m_bFirstSpawn; // 0xf08            
            uint8_t _pad0f09[0x3]; // 0xf09
            // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttackTarget;
            char m_hAttackTarget[0x4]; // 0xf0c            
            // m_hAggroTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAggroTarget;
            char m_hAggroTarget[0x4]; // 0xf10            
            // m_hCommandAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCommandAttackTarget;
            char m_hCommandAttackTarget[0x4]; // 0xf14            
            CUtlSymbolLarge m_iszOriginalModel; // 0xf18            
            // metadata: MNetworkEnable
            std::int8_t m_nUnitModelVariant; // 0xf20            
            std::int8_t m_nUnitModelVariantCount; // 0xf21            
            bool m_bPseudoQueueOrders; // 0xf22            
            bool m_bCastLocked; // 0xf23            
            uint8_t _pad0f24[0x1c]; // 0xf24
            source2sdk::entity2::GameTime_t m_flAttackRegulator; // 0xf40            
            float m_flTimeDisparityTolerance; // 0xf44            
            source2sdk::entity2::GameTime_t m_fAttackPhaseEndTime; // 0xf48            
            source2sdk::entity2::GameTime_t m_flPositionUpdateTime; // 0xf4c            
            Vector m_vLastPositionSent; // 0xf50            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iTaggedAsVisibleByTeam; // 0xf5c            
            // metadata: MNetworkEnable
            std::uint64_t m_iIsControllableByPlayer64; // 0xf60            
            source2sdk::client::PlayerID_t m_nControllingPlayerID; // 0xf68            
            bool m_bRunAIWhenControllableByPlayer; // 0xf6c            
            uint8_t _pad0f6d[0x3]; // 0xf6d
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Abilities"
            // metadata: MNetworkPriority "32"
            // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecAbilities;
            char m_vecAbilities[0x18]; // 0xf70            
            // m_associatedEmptyAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_associatedEmptyAbilities;
            char m_associatedEmptyAbilities[0x18]; // 0xf88            
            // m_hActiveAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActiveAbility;
            char m_hActiveAbility[0x4]; // 0xfa0            
            Vector m_vCursorLocation; // 0xfa4            
            // m_hCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCursorTarget;
            char m_hCursorTarget[0x4]; // 0xfb0            
            // m_hOriginalCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOriginalCursorTarget;
            char m_hOriginalCursorTarget[0x4]; // 0xfb4            
            bool m_bCursorTargetingNothing; // 0xfb8            
            uint8_t _pad0fb9[0x7]; // 0xfb9
            // metadata: MNetworkEnable
            source2sdk::server::CDOTA_ModifierManager m_ModifierManager; // 0xfc0            
            uint8_t _pad1300[0x8]; // 0x1300
            float m_flInvisibilityLevel; // 0x1308            
            uint8_t _pad130c[0x4]; // 0x130c
            CUtlSymbolLarge m_iszMapUnitName; // 0x1310            
            CUtlSymbolLarge m_iszUnitName; // 0x1318            
            // metadata: MNetworkEnable
            std::int32_t m_iUnitNameIndex; // 0x1320            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageMin; // 0x1324            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageMax; // 0x1328            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageBonus; // 0x132c            
            // metadata: MNetworkEnable
            bool m_bIsWaitingToSpawn; // 0x1330            
            uint8_t _pad1331[0x3]; // 0x1331
            std::int32_t m_iLeashType; // 0x1334            
            std::int32_t m_iAggroType; // 0x1338            
            bool m_bCreepIgnoreAggro; // 0x133c            
            bool m_bCreepFirstWave; // 0x133d            
            // metadata: MNetworkEnable
            bool m_bIsIllusion; // 0x133e            
            // metadata: MNetworkEnable
            std::uint8_t m_nUnitLabelIndex; // 0x133f            
            // metadata: MNetworkEnable
            CUtlString m_szScaleset; // 0x1340            
            // metadata: MNetworkEnable
            CUtlString m_szUnitLabel; // 0x1348            
            CUtlString m_strAnimationModifier; // 0x1350            
            uint8_t _pad1358[0x8]; // 0x1358
            // metadata: MNetworkEnable
            // m_hOwnerNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwnerNPC;
            char m_hOwnerNPC[0x4]; // 0x1360            
            uint8_t _pad1364[0x4]; // 0x1364
            source2sdk::server::CLocomotionBase* m_locomotor; // 0x1368            
            source2sdk::server::INextBotBody* m_body; // 0x1370            
            bool m_bNeverMoveToClearSpace; // 0x1378            
            uint8_t _pad1379[0x3]; // 0x1379
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "SpectatorsOnly"
            // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGoalEntity;
            char m_hGoalEntity[0x4]; // 0x137c            
            bool m_bMustReachEachGoalEntity; // 0x1380            
            uint8_t _pad1381[0x3]; // 0x1381
            Vector m_vInitialGoalPosition; // 0x1384            
            uint8_t _pad1390[0x18]; // 0x1390
            source2sdk::client::CUnitOrders m_CurrentQueuedOrder; // 0x13a8            
            uint8_t _pad13e8[0x18]; // 0x13e8
            // metadata: MNetworkEnable
            source2sdk::server::CDOTA_UnitInventory m_Inventory; // 0x1400            
            // m_hItemToDrop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hItemToDrop;
            char m_hItemToDrop[0x4]; // 0x14f8            
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_SHOP_TYPE m_iCurShop; // 0x14fc            
            // m_hLastNearShop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastNearShop;
            char m_hLastNearShop[0x4]; // 0x1500            
            uint8_t _pad1504[0x4]; // 0x1504
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szCurShopEntName; // 0x1508            
            bool m_bHasInventory; // 0x1510            
            uint8_t _pad1511[0x3]; // 0x1511
            float m_flBaselineModelScale; // 0x1514            
            float m_fModelScaleMultiplier; // 0x1518            
            float m_fModelScaleMultiplierChangeStart; // 0x151c            
            source2sdk::entity2::GameTime_t m_fModelScaleMultiplierChangeTime; // 0x1520            
            float m_flPreviousModelScale; // 0x1524            
            float m_fMaxModelScaleMultiplier; // 0x1528            
            bool m_bIsCamped; // 0x152c            
            bool m_bIsReturningHome; // 0x152d            
            bool m_bIgnoreHome; // 0x152e            
            bool m_bWantsToFlee; // 0x152f            
            bool m_bWakesNeutrals; // 0x1530            
            bool m_bNeutralIgnore; // 0x1531            
            bool m_bIdleAcquire; // 0x1532            
            bool m_bCanFollowUnseenUnits; // 0x1533            
            bool m_bExpired; // 0x1534            
            uint8_t _pad1535[0x3]; // 0x1535
            Vector m_vCurrentMovementOrderDestination; // 0x1538            
            Vector m_vPreviousMovementOrderDestination; // 0x1544            
            Vector m_vResumePreviousMovementRequestLocation; // 0x1550            
            bool m_bCurrentOrderIsMovement; // 0x155c            
            bool m_bPreviousOrderIsMovement; // 0x155d            
            bool m_bResumePreviousMovement; // 0x155e            
            bool m_bIsPatrolling; // 0x155f            
            source2sdk::entity2::GameTime_t m_flCreationTime; // 0x1560            
            bool m_bTargetMovedOutOfRange; // 0x1564            
            bool m_bChaseTargetMoves; // 0x1565            
            uint8_t _pad1566[0x2]; // 0x1566
            float m_flChaseDistance; // 0x1568            
            // m_hChaseEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hChaseEntity;
            char m_hChaseEntity[0x4]; // 0x156c            
            // m_ActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_ActivityModifiers;
            char m_ActivityModifiers[0x18]; // 0x1570            
            bool m_bActivityModifiersDirty; // 0x1588            
            uint8_t _pad1589[0x7]; // 0x1589
            // m_ActivityModifiersFromScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_ActivityModifiersFromScript;
            char m_ActivityModifiersFromScript[0x18]; // 0x1590            
            source2sdk::entity2::GameTime_t m_flBlinkDaggerTime; // 0x15a8            
            float m_flAdditionalBattleMusicWeight; // 0x15ac            
            // metadata: MNetworkEnable
            bool m_bStolenScepter; // 0x15b0            
            bool m_bHasScepterCached; // 0x15b1            
            bool m_bHasShardCached; // 0x15b2            
            uint8_t _pad15b3[0x5]; // 0x15b3
            source2sdk::server::CLocalNPCObstructionsCache m_LocalNPCObstructionsCache; // 0x15b8            
            uint8_t _pad15d8[0x20]; // 0x15d8
            source2sdk::entity2::GameTime_t m_flCritBashFailUntil; // 0x15f8            
            float m_flAttackTimeLostToLastTick; // 0x15fc            
            float m_flAttackTimeAtLastTick; // 0x1600            
            float m_flCompanionDistance; // 0x1604            
            bool m_bIsPartyCompanion; // 0x1608            
            bool m_bCanPartyCompanionAttack; // 0x1609            
            uint8_t _pad160a[0x2]; // 0x160a
            // m_CompanionEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_CompanionEntity;
            char m_CompanionEntity[0x4]; // 0x160c            
            bool m_bFacePlayer; // 0x1610            
            uint8_t _pad1611[0x3]; // 0x1611
            source2sdk::entity2::GameTime_t m_flLastIdleChangeTime; // 0x1614            
            bool m_bUseNeutralCreepBehavior; // 0x1618            
            uint8_t _pad1619[0x27]; // 0x1619
            bool m_bHasBuiltWearableSpawnList; // 0x1640            
            uint8_t _pad1641[0x3]; // 0x1641
            source2sdk::entity2::GameTick_t m_nFoWFadeStartTime[15]; // 0x1644            
            std::int32_t m_nFOWVisibilityRadius; // 0x1680            
            Vector m_vFOWOriginOverride; // 0x1684            
            std::int32_t m_iTeamViewerID; // 0x1690            
            uint8_t _pad1694[0x4]; // 0x1694
            CUtlString m_strLastKillerAbility; // 0x1698            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_anglediff; // 0x16a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_NetworkActivity; // 0x16a4            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_NetworkSequenceIndex; // 0x16a8            
            // metadata: MNetworkEnable
            bool m_bShouldDoFlyHeightVisual; // 0x16ac            
            uint8_t _pad16ad[0x3]; // 0x16ad
            // metadata: MNetworkEnable
            float m_flStartSequenceCycle; // 0x16b0            
            bool m_bMidLoading; // 0x16b4            
            uint8_t _pad16b5[0x3]; // 0x16b5
            // m_hTutorialSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_ScriptedSpawner> m_hTutorialSpawner;
            char m_hTutorialSpawner[0x4]; // 0x16b8            
            uint8_t _pad16bc[0x4]; // 0x16bc
            source2sdk::server::CountdownTimer m_AngerCooldownTimer; // 0x16c0            
            std::int32_t m_iProjectileMoveSpeed; // 0x16d8            
            uint8_t _pad16dc[0x4]; // 0x16dc
            CUtlSymbolLarge m_iszAutoAttackRangedParticle; // 0x16e0            
            std::int32_t m_nPoseParameterTurn; // 0x16e8            
            std::int32_t m_nPoseParameterRun; // 0x16ec            
            float m_flLean; // 0x16f0            
            float m_flRun; // 0x16f4            
            // metadata: MNetworkEnable
            char m_CustomHealthLabel[256]; // 0x16f8            
            // metadata: MNetworkEnable
            Color m_CustomHealthLabelColor; // 0x17f8            
            source2sdk::client::item_definition_index_t m_nWearableDefIndex; // 0x17fc            
            std::int8_t m_nArcanaLevel; // 0x1800            
            std::int8_t m_nDefaultArcanaLevel; // 0x1801            
            Color m_defaultColorGemColor; // 0x1802            
            bool m_bDisableDamageDisplay; // 0x1806            
            uint8_t _pad1807[0x1]; // 0x1807
            Color m_gibTintColor; // 0x1808            
            float m_flPathfindingSearchDepthScale; // 0x180c            
            // m_ActivitiesStarted has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_ActivitiesStarted;
            char m_ActivitiesStarted[0x18]; // 0x1810            
            // m_hIllusionOriginal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hIllusionOriginal;
            char m_hIllusionOriginal[0x4]; // 0x1828            
            // m_hDirectionalRangedFakeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hDirectionalRangedFakeTarget;
            char m_hDirectionalRangedFakeTarget[0x4]; // 0x182c            
            uint8_t _pad1830[0x28]; // 0x1830
            bool m_bShouldComputeRemainingPathLength; // 0x1858            
            uint8_t _pad1859[0x3]; // 0x1859
            float m_flRemainingPathLength; // 0x185c            
            
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
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC) == 0x1860);
    };
};
