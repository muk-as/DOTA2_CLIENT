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
        // Size: 0x18e0
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
            uint8_t _pad09e8[0x20]; // 0x9e8
            bool m_bPledgedOfrenda; // 0xa08            
            uint8_t _pad0a09[0x3]; // 0xa09
            // metadata: MNetworkEnable
            std::uint32_t m_iUnitType; // 0xa0c            
            Color m_colorGemColor; // 0xa10            
            bool m_bHasColorGem; // 0xa14            
            // metadata: MNetworkEnable
            bool m_bSelectionRingVisible; // 0xa15            
            uint8_t _pad0a16[0xa]; // 0xa16
            CUtlSymbolLarge m_iszBaseClass; // 0xa20            
            std::int32_t m_iStartingMaxHealth; // 0xa28            
            std::int32_t m_iStartingMaxMana; // 0xa2c            
            std::int32_t m_iStartingMana; // 0xa30            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentLevel; // 0xa34            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "65536,000000"
            float m_flMana; // 0xa38            
            float m_flBaseMaxMana; // 0xa3c            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "65536,000000"
            float m_flMaxMana; // 0xa40            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "14"
            // metadata: MNetworkMinValue "-50,000000"
            // metadata: MNetworkMaxValue "500,000000"
            float m_flManaThinkRegen; // 0xa44            
            float m_flBaseMaxHealth; // 0xa48            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            float m_flHealthThinkRegen; // 0xa4c            
            // metadata: MNetworkEnable
            std::int32_t m_nHealthBarOffsetOverride; // 0xa50            
            std::int32_t m_nHealthBarOffset; // 0xa54            
            // metadata: MNetworkEnable
            bool m_bIsPhantom; // 0xa58            
            // metadata: MNetworkEnable
            bool m_bIsAncient; // 0xa59            
            // metadata: MNetworkEnable
            bool m_bIsBossCreature; // 0xa5a            
            // metadata: MNetworkEnable
            bool m_bIsNeutralUnitType; // 0xa5b            
            bool m_bAutoAttacksByDefault; // 0xa5c            
            // metadata: MNetworkEnable
            bool m_bIsSummoned; // 0xa5d            
            // metadata: MNetworkEnable
            bool m_bCanBeDominated; // 0xa5e            
            // metadata: MNetworkEnable
            bool m_bCanRespawn; // 0xa5f            
            // metadata: MNetworkEnable
            bool m_bIsClone; // 0xa60            
            bool m_bConsideredHero; // 0xa61            
            bool m_bUsesConstantGesture; // 0xa62            
            bool m_bIsPlayingSingleForcedActivity; // 0xa63            
            // metadata: MNetworkEnable
            bool m_bHasUpgradeableAbilities; // 0xa64            
            uint8_t _pad0a65[0x3]; // 0xa65
            // metadata: MNetworkEnable
            std::int32_t m_iBKBChargesUsed; // 0xa68            
            // metadata: MNetworkEnable
            std::int32_t m_iAeonChargesUsed; // 0xa6c            
            // metadata: MNetworkEnable
            std::int32_t m_iRefresherChargesUsed; // 0xa70            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRefresherUseTime; // 0xa74            
            // metadata: MNetworkEnable
            float m_flRefresherLastCooldown; // 0xa78            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDealtDamageTime; // 0xa7c            
            // metadata: MNetworkEnable
            std::int32_t m_iBotDebugData; // 0xa80            
            // metadata: MNetworkEnable
            bool m_bIsMoving; // 0xa84            
            uint8_t _pad0a85[0x19b]; // 0xa85
            float m_flChannelMultiplier; // 0xc20            
            // metadata: MNetworkEnable
            bool m_bCanUseWards; // 0xc24            
            // metadata: MNetworkEnable
            bool m_bCanUseAllItems; // 0xc25            
            uint8_t _pad0c26[0x2]; // 0xc26
            source2sdk::client::PlayerID_t m_iLastAbilityPlayer; // 0xc28            
            bool m_bIsPhantomBlocker; // 0xc2c            
            bool m_bBlocksCreepSpawn; // 0xc2d            
            bool m_bCanSellItems; // 0xc2e            
            uint8_t _pad0c2f[0x1]; // 0xc2f
            // metadata: MNetworkEnable
            // m_hNeutralSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_NeutralSpawner> m_hNeutralSpawner;
            char m_hNeutralSpawner[0x4]; // 0xc30            
            bool m_bTrackDamageTaken; // 0xc34            
            uint8_t _pad0c35[0x3]; // 0xc35
            source2sdk::entity2::GameTick_t m_nNextRegenThink; // 0xc38            
            source2sdk::entity2::GameTick_t m_nNextModifierThink; // 0xc3c            
            source2sdk::entity2::GameTick_t m_nNextModelScaleThink; // 0xc40            
            source2sdk::entity2::GameTick_t m_nNextUnitThink; // 0xc44            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            float m_flManaRegen; // 0xc48            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            float m_flHealthRegen; // 0xc4c            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int64_t m_nTotalDamageTaken; // 0xc50            
            float m_flHealthRegenCounter; // 0xc58            
            float m_flManaRegenCounter; // 0xc5c            
            float m_flAccumulatedHeal; // 0xc60            
            std::int32_t m_iBaseAttackSpeed; // 0xc64            
            // metadata: MNetworkEnable
            std::int32_t m_iBaseDamageMin; // 0xc68            
            // metadata: MNetworkEnable
            std::int32_t m_iBaseDamageMax; // 0xc6c            
            // metadata: MNetworkEnable
            std::int32_t m_iAttackRange; // 0xc70            
            std::int32_t m_iAttackRangeBuffer; // 0xc74            
            // metadata: MNetworkEnable
            std::int32_t m_iMoveSpeed; // 0xc78            
            float m_flTurnRate; // 0xc7c            
            std::int32_t m_iHasAggressiveStance; // 0xc80            
            bool m_bInAggressiveStance; // 0xc84            
            bool m_bInInjuredAggressiveStance; // 0xc85            
            uint8_t _pad0c86[0x2]; // 0xc86
            float m_flFollowRange; // 0xc88            
            std::int32_t m_iAcquisitionRange; // 0xc8c            
            float m_flAttackAnimationPoint; // 0xc90            
            float m_flHullRadius; // 0xc94            
            float m_flCollisionPadding; // 0xc98            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTauntCooldown; // 0xc9c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTauntCooldown2; // 0xca0            
            // metadata: MNetworkEnable
            float m_fRevealRadius; // 0xca4            
            float m_flProjectileCollisionSize; // 0xca8            
            source2sdk::server::ObstructionRelationshipClass_t m_ObstructionRelationshipClass; // 0xcac            
            CUtlSymbolLarge m_iszParticleFolder; // 0xcb0            
            CUtlSymbolLarge m_iszGameSoundsFile; // 0xcb8            
            CUtlSymbolLarge m_iszVoiceFile; // 0xcc0            
            CUtlSymbolLarge m_iszSoundSet; // 0xcc8            
            CUtlSymbolLarge m_iszSelectionGroup; // 0xcd0            
            CUtlSymbolLarge m_iszAnimationModifier; // 0xcd8            
            uint8_t _pad0ce0[0x8]; // 0xce0
            // metadata: MNetworkEnable
            float m_flBaseAttackTime; // 0xce8            
            // metadata: MNetworkEnable
            std::int32_t m_iDayTimeVisionRange; // 0xcec            
            // metadata: MNetworkEnable
            std::int32_t m_iNightTimeVisionRange; // 0xcf0            
            float m_fBotAttackDesire; // 0xcf4            
            std::int32_t m_iUnitRelationshipClass; // 0xcf8            
            // metadata: MNetworkEnable
            float m_flPhysicalArmorValue; // 0xcfc            
            // metadata: MNetworkEnable
            float m_flMagicalResistanceValue; // 0xd00            
            std::int32_t m_iTeamName; // 0xd04            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iAttackCapabilities; // 0xd08            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iSpecialAbility; // 0xd0c            
            std::int32_t m_iMoveCapabilities; // 0xd10            
            std::int32_t m_iOriginalAttackCapabilities; // 0xd14            
            // metadata: MNetworkEnable
            std::int32_t m_iXPBounty; // 0xd18            
            // metadata: MNetworkEnable
            std::int32_t m_iXPBountyExtra; // 0xd1c            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldBountyMin; // 0xd20            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldBountyMax; // 0xd24            
            source2sdk::client::PlayerID_t m_nFarmClaimPlayerID; // 0xd28            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nPlayerOwnerID; // 0xd2c            
            CUtlSymbolLarge m_iszAbilityList[40]; // 0xd30            
            std::int32_t m_iAttackDamageType; // 0xe70            
            bool m_bIsIdle; // 0xe74            
            bool m_bHold; // 0xe75            
            bool m_bWasKilledPassively; // 0xe76            
            uint8_t _pad0e77[0x1]; // 0xe77
            source2sdk::server::CountdownTimer m_AngerTimer; // 0xe78            
            source2sdk::server::CountdownTimer m_AlertTimer; // 0xe90            
            // m_hAngerTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAngerTarget;
            char m_hAngerTarget[0x4]; // 0xea8            
            // m_hAlertTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAlertTarget;
            char m_hAlertTarget[0x4]; // 0xeac            
            // m_hForceAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hForceAttackTarget;
            char m_hForceAttackTarget[0x4]; // 0xeb0            
            bool m_bAllowAllyForceAttack; // 0xeb4            
            uint8_t _pad0eb5[0x3]; // 0xeb5
            Vector m_vTargetLastKnownPosition; // 0xeb8            
            uint8_t _pad0ec4[0x1c]; // 0xec4
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0xee0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0xee4            
            source2sdk::entity2::GameTime_t m_flTimeSinceLastAbilityNag; // 0xee8            
            source2sdk::entity2::GameTime_t m_flLastTeleportTime; // 0xeec            
            // metadata: MNetworkEnable
            std::uint64_t m_nUnitState64; // 0xef0            
            source2sdk::entity2::GameTime_t m_vLastVisibilityChange[15]; // 0xef8            
            uint8_t _pad0f34[0x1c]; // 0xf34
            bool m_bFirstSpawn; // 0xf50            
            uint8_t _pad0f51[0x3]; // 0xf51
            // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttackTarget;
            char m_hAttackTarget[0x4]; // 0xf54            
            // m_hAggroTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAggroTarget;
            char m_hAggroTarget[0x4]; // 0xf58            
            // m_hCommandAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCommandAttackTarget;
            char m_hCommandAttackTarget[0x4]; // 0xf5c            
            CUtlSymbolLarge m_iszOriginalModel; // 0xf60            
            // metadata: MNetworkEnable
            std::int8_t m_nUnitModelVariant; // 0xf68            
            std::int8_t m_nUnitModelVariantCount; // 0xf69            
            bool m_bPseudoQueueOrders; // 0xf6a            
            bool m_bCastLocked; // 0xf6b            
            uint8_t _pad0f6c[0x1c]; // 0xf6c
            source2sdk::entity2::GameTime_t m_flAttackRegulator; // 0xf88            
            float m_flTimeDisparityTolerance; // 0xf8c            
            source2sdk::entity2::GameTime_t m_fAttackPhaseEndTime; // 0xf90            
            source2sdk::entity2::GameTime_t m_flPositionUpdateTime; // 0xf94            
            Vector m_vLastPositionSent; // 0xf98            
            std::int32_t m_iTaggedAsVisibleByTeam; // 0xfa4            
            // metadata: MNetworkEnable
            std::uint64_t m_iIsControllableByPlayer64; // 0xfa8            
            source2sdk::client::PlayerID_t m_nControllingPlayerID; // 0xfb0            
            bool m_bRunAIWhenControllableByPlayer; // 0xfb4            
            uint8_t _pad0fb5[0x3]; // 0xfb5
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Abilities"
            // metadata: MNetworkPriority "32"
            // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecAbilities;
            char m_vecAbilities[0x18]; // 0xfb8            
            // m_associatedEmptyAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_associatedEmptyAbilities;
            char m_associatedEmptyAbilities[0x18]; // 0xfd0            
            // m_hActiveAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActiveAbility;
            char m_hActiveAbility[0x4]; // 0xfe8            
            Vector m_vCursorLocation; // 0xfec            
            // m_hCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCursorTarget;
            char m_hCursorTarget[0x4]; // 0xff8            
            // m_hOriginalCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOriginalCursorTarget;
            char m_hOriginalCursorTarget[0x4]; // 0xffc            
            bool m_bCursorTargetingNothing; // 0x1000            
            uint8_t _pad1001[0x7]; // 0x1001
            // metadata: MNetworkEnable
            source2sdk::server::CDOTA_ModifierManager m_ModifierManager; // 0x1008            
            uint8_t _pad1358[0x8]; // 0x1358
            float m_flInvisibilityLevel; // 0x1360            
            uint8_t _pad1364[0x4]; // 0x1364
            CUtlSymbolLarge m_iszMapUnitName; // 0x1368            
            CUtlSymbolLarge m_iszUnitName; // 0x1370            
            // metadata: MNetworkEnable
            std::int32_t m_iUnitNameIndex; // 0x1378            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageMin; // 0x137c            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageMax; // 0x1380            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageBonus; // 0x1384            
            // metadata: MNetworkEnable
            bool m_bIsWaitingToSpawn; // 0x1388            
            uint8_t _pad1389[0x3]; // 0x1389
            std::int32_t m_iLeashType; // 0x138c            
            std::int32_t m_iAggroType; // 0x1390            
            bool m_bCreepIgnoreAggro; // 0x1394            
            bool m_bCreepFirstWave; // 0x1395            
            // metadata: MNetworkEnable
            bool m_bIsIllusion; // 0x1396            
            // metadata: MNetworkEnable
            std::uint8_t m_nUnitLabelIndex; // 0x1397            
            // metadata: MNetworkEnable
            CUtlString m_szScaleset; // 0x1398            
            // metadata: MNetworkEnable
            CUtlString m_szUnitLabel; // 0x13a0            
            CUtlString m_strAnimationModifier; // 0x13a8            
            uint8_t _pad13b0[0x8]; // 0x13b0
            // metadata: MNetworkEnable
            // m_hOwnerNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwnerNPC;
            char m_hOwnerNPC[0x4]; // 0x13b8            
            uint8_t _pad13bc[0x4]; // 0x13bc
            source2sdk::server::CLocomotionBase* m_locomotor; // 0x13c0            
            source2sdk::server::INextBotBody* m_body; // 0x13c8            
            bool m_bNeverMoveToClearSpace; // 0x13d0            
            uint8_t _pad13d1[0x3]; // 0x13d1
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "SpectatorsOnly"
            // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGoalEntity;
            char m_hGoalEntity[0x4]; // 0x13d4            
            bool m_bMustReachEachGoalEntity; // 0x13d8            
            uint8_t _pad13d9[0x3]; // 0x13d9
            Vector m_vInitialGoalPosition; // 0x13dc            
            uint8_t _pad13e8[0x18]; // 0x13e8
            source2sdk::client::CUnitOrders m_CurrentQueuedOrder; // 0x1400            
            uint8_t _pad1440[0x18]; // 0x1440
            // metadata: MNetworkEnable
            source2sdk::server::CDOTA_UnitInventory m_Inventory; // 0x1458            
            // m_hItemToDrop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hItemToDrop;
            char m_hItemToDrop[0x4]; // 0x1550            
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_SHOP_TYPE m_iCurShop; // 0x1554            
            // m_hLastNearShop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastNearShop;
            char m_hLastNearShop[0x4]; // 0x1558            
            uint8_t _pad155c[0x4]; // 0x155c
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szCurShopEntName; // 0x1560            
            bool m_bHasInventory; // 0x1568            
            uint8_t _pad1569[0x3]; // 0x1569
            float m_flBaselineModelScale; // 0x156c            
            float m_fModelScaleMultiplier; // 0x1570            
            float m_fModelScaleMultiplierChangeStart; // 0x1574            
            source2sdk::entity2::GameTime_t m_fModelScaleMultiplierChangeTime; // 0x1578            
            float m_flPreviousModelScale; // 0x157c            
            float m_fMaxModelScaleMultiplier; // 0x1580            
            bool m_bIsCamped; // 0x1584            
            bool m_bIsReturningHome; // 0x1585            
            bool m_bIgnoreHome; // 0x1586            
            bool m_bWantsToFlee; // 0x1587            
            bool m_bWakesNeutrals; // 0x1588            
            bool m_bNeutralIgnore; // 0x1589            
            bool m_bIdleAcquire; // 0x158a            
            bool m_bCanFollowUnseenUnits; // 0x158b            
            bool m_bExpired; // 0x158c            
            uint8_t _pad158d[0x3]; // 0x158d
            Vector m_vCurrentMovementOrderDestination; // 0x1590            
            Vector m_vPreviousMovementOrderDestination; // 0x159c            
            Vector m_vResumePreviousMovementRequestLocation; // 0x15a8            
            bool m_bCurrentOrderIsMovement; // 0x15b4            
            bool m_bPreviousOrderIsMovement; // 0x15b5            
            bool m_bResumePreviousMovement; // 0x15b6            
            bool m_bIsPatrolling; // 0x15b7            
            source2sdk::entity2::GameTime_t m_flCreationTime; // 0x15b8            
            bool m_bTargetMovedOutOfRange; // 0x15bc            
            bool m_bChaseTargetMoves; // 0x15bd            
            uint8_t _pad15be[0x2]; // 0x15be
            float m_flChaseDistance; // 0x15c0            
            // m_hChaseEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hChaseEntity;
            char m_hChaseEntity[0x4]; // 0x15c4            
            // m_ActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_ActivityModifiers;
            char m_ActivityModifiers[0x18]; // 0x15c8            
            bool m_bActivityModifiersDirty; // 0x15e0            
            uint8_t _pad15e1[0x7]; // 0x15e1
            // m_ActivityModifiersFromScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_ActivityModifiersFromScript;
            char m_ActivityModifiersFromScript[0x18]; // 0x15e8            
            source2sdk::entity2::GameTime_t m_flBlinkDaggerTime; // 0x1600            
            float m_flAdditionalBattleMusicWeight; // 0x1604            
            // metadata: MNetworkEnable
            bool m_bStolenScepter; // 0x1608            
            bool m_bHasScepterCached; // 0x1609            
            bool m_bHasShardCached; // 0x160a            
            uint8_t _pad160b[0x5]; // 0x160b
            source2sdk::server::CLocalNPCObstructionsCache m_LocalNPCObstructionsCache; // 0x1610            
            uint8_t _pad1630[0x20]; // 0x1630
            source2sdk::entity2::GameTime_t m_flCritBashFailUntil; // 0x1650            
            float m_flAttackTimeLostToLastTick; // 0x1654            
            float m_flAttackTimeAtLastTick; // 0x1658            
            float m_flCompanionDistance; // 0x165c            
            bool m_bIsPartyCompanion; // 0x1660            
            bool m_bCanPartyCompanionAttack; // 0x1661            
            uint8_t _pad1662[0x2]; // 0x1662
            // m_CompanionEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_CompanionEntity;
            char m_CompanionEntity[0x4]; // 0x1664            
            bool m_bFacePlayer; // 0x1668            
            uint8_t _pad1669[0x3]; // 0x1669
            source2sdk::entity2::GameTime_t m_flLastIdleChangeTime; // 0x166c            
            bool m_bUseNeutralCreepBehavior; // 0x1670            
            uint8_t _pad1671[0x27]; // 0x1671
            bool m_bHasBuiltWearableSpawnList; // 0x1698            
            uint8_t _pad1699[0x3]; // 0x1699
            source2sdk::entity2::GameTick_t m_nFoWFadeStartTime[15]; // 0x169c            
            std::int32_t m_nFOWVisibilityRadius; // 0x16d8            
            Vector m_vFOWOriginOverride; // 0x16dc            
            std::int32_t m_iTeamViewerID; // 0x16e8            
            uint8_t _pad16ec[0x4]; // 0x16ec
            CUtlString m_strLastKillerAbility; // 0x16f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_anglediff; // 0x16f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_NetworkActivity; // 0x16fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_NetworkSequenceIndex; // 0x1700            
            // metadata: MNetworkEnable
            bool m_bShouldDoFlyHeightVisual; // 0x1704            
            uint8_t _pad1705[0x3]; // 0x1705
            // metadata: MNetworkEnable
            float m_flStartSequenceCycle; // 0x1708            
            bool m_bMidLoading; // 0x170c            
            uint8_t _pad170d[0x3]; // 0x170d
            // m_hTutorialSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_ScriptedSpawner> m_hTutorialSpawner;
            char m_hTutorialSpawner[0x4]; // 0x1710            
            uint8_t _pad1714[0x4]; // 0x1714
            source2sdk::server::CountdownTimer m_AngerCooldownTimer; // 0x1718            
            std::int32_t m_iProjectileMoveSpeed; // 0x1730            
            uint8_t _pad1734[0x4]; // 0x1734
            CUtlSymbolLarge m_iszAutoAttackRangedParticle; // 0x1738            
            std::int32_t m_nPoseParameterTurn; // 0x1740            
            std::int32_t m_nPoseParameterRun; // 0x1744            
            float m_flLean; // 0x1748            
            float m_flRun; // 0x174c            
            // metadata: MNetworkEnable
            char m_CustomHealthLabel[256]; // 0x1750            
            // metadata: MNetworkEnable
            Color m_CustomHealthLabelColor; // 0x1850            
            source2sdk::client::item_definition_index_t m_nWearableDefIndex; // 0x1854            
            std::int8_t m_nArcanaLevel; // 0x1858            
            std::int8_t m_nDefaultArcanaLevel; // 0x1859            
            Color m_defaultColorGemColor; // 0x185a            
            bool m_bDisableDamageDisplay; // 0x185e            
            uint8_t _pad185f[0x1]; // 0x185f
            Color m_gibTintColor; // 0x1860            
            float m_flPathfindingSearchDepthScale; // 0x1864            
            // m_ActivitiesStarted has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_ActivitiesStarted;
            char m_ActivitiesStarted[0x18]; // 0x1868            
            // m_hIllusionOriginal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hIllusionOriginal;
            char m_hIllusionOriginal[0x4]; // 0x1880            
            // m_hDirectionalRangedFakeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hDirectionalRangedFakeTarget;
            char m_hDirectionalRangedFakeTarget[0x4]; // 0x1884            
            uint8_t _pad1888[0x28]; // 0x1888
            bool m_bShouldComputeRemainingPathLength; // 0x18b0            
            uint8_t _pad18b1[0x3]; // 0x18b1
            float m_flRemainingPathLength; // 0x18b4            
            uint8_t _pad18b8[0x28];
            
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
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC) == 0x18e0);
    };
};
