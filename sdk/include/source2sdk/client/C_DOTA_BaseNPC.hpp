#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_ModifierManager.hpp"
#include "source2sdk/client/C_DOTA_UnitInventory.hpp"
#include "source2sdk/client/C_NextBotCombatCharacter.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/DOTA_SHOP_TYPE.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_NeutralSpawner;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_EconWearable;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_SceneEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x17d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
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
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkIncludeByName "m_lifeState"
        // static metadata: MNetworkIncludeByName "m_bTakesDamage"
        // static metadata: MNetworkIncludeByName "m_nTakeDamageFlags"
        // static metadata: MNetworkExcludeByName "m_bIsIllusion"
        // static metadata: MNetworkExcludeByName "m_flDeathTime"
        // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
        // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
        // static metadata: MNetworkVarNames "bool m_bIsPhantom"
        // static metadata: MNetworkVarNames "bool m_bSelectionRingVisible"
        // static metadata: MNetworkVarNames "int m_iCurrentLevel"
        // static metadata: MNetworkVarNames "bool m_bIsAncient"
        // static metadata: MNetworkVarNames "bool m_bIsBossCreature"
        // static metadata: MNetworkVarNames "bool m_bStolenScepter"
        // static metadata: MNetworkVarNames "bool m_bIsNeutralUnitType"
        // static metadata: MNetworkVarNames "bool m_bIsSummoned"
        // static metadata: MNetworkVarNames "bool m_bCanBeDominated"
        // static metadata: MNetworkVarNames "bool m_bHasUpgradeableAbilities"
        // static metadata: MNetworkVarNames "float m_flHealthThinkRegen"
        // static metadata: MNetworkVarNames "uint64 m_iIsControllableByPlayer64"
        // static metadata: MNetworkVarNames "int m_nHealthBarOffsetOverride"
        // static metadata: MNetworkVarNames "bool m_bCanRespawn"
        // static metadata: MNetworkVarNames "int m_iAttackRange"
        // static metadata: MNetworkVarNames "bool m_bIsClone"
        // static metadata: MNetworkVarNames "int m_iMoveSpeed"
        // static metadata: MNetworkVarNames "float m_flBaseAttackTime"
        // static metadata: MNetworkVarNames "int m_iUnitNameIndex"
        // static metadata: MNetworkVarNames "float m_flMana"
        // static metadata: MNetworkVarNames "float m_flMaxMana"
        // static metadata: MNetworkVarNames "float m_flManaThinkRegen"
        // static metadata: MNetworkVarNames "int m_iBKBChargesUsed"
        // static metadata: MNetworkVarNames "int m_iAeonChargesUsed"
        // static metadata: MNetworkVarNames "GameTime_t m_flRefresherUseTime"
        // static metadata: MNetworkVarNames "float m_flRefresherLastCooldown"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastDealtDamageTime"
        // static metadata: MNetworkVarNames "int m_iBotDebugData"
        // static metadata: MNetworkVarNames "bool m_bIsIllusion"
        // static metadata: MNetworkVarNames "EHANDLE m_vecAbilities"
        // static metadata: MNetworkVarNames "CUtlString m_szUnitLabel"
        // static metadata: MNetworkVarNames "CUtlString m_szScaleset"
        // static metadata: MNetworkVarNames "uint8 m_nUnitLabelIndex"
        // static metadata: MNetworkVarNames "GameTime_t m_flTauntCooldown"
        // static metadata: MNetworkVarNames "GameTime_t m_flTauntCooldown2"
        // static metadata: MNetworkVarNames "DOTA_SHOP_TYPE m_iCurShop"
        // static metadata: MNetworkVarNames "string_t m_szCurShopEntName"
        // static metadata: MNetworkVarNames "int m_iDayTimeVisionRange"
        // static metadata: MNetworkVarNames "int m_iNightTimeVisionRange"
        // static metadata: MNetworkVarNames "int m_iDamageMin"
        // static metadata: MNetworkVarNames "int m_iDamageMax"
        // static metadata: MNetworkVarNames "int m_iDamageBonus"
        // static metadata: MNetworkVarNames "int m_iBaseDamageMin"
        // static metadata: MNetworkVarNames "int m_iBaseDamageMax"
        // static metadata: MNetworkVarNames "int m_iTaggedAsVisibleByTeam"
        // static metadata: MNetworkVarNames "CDOTA_ModifierManager m_ModifierManager"
        // static metadata: MNetworkVarNames "CDOTA_UnitInventory m_Inventory"
        // static metadata: MNetworkVarNames "uint64 m_nUnitState64"
        // static metadata: MNetworkVarNames "int m_iAttackCapabilities"
        // static metadata: MNetworkVarNames "int m_iSpecialAbility"
        // static metadata: MNetworkVarNames "PlayerID_t m_nPlayerOwnerID"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastDamageTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastAttackTime"
        // static metadata: MNetworkVarNames "int m_anglediff"
        // static metadata: MNetworkVarNames "GameTime_t m_flDeathTime"
        // static metadata: MNetworkVarNames "float m_flPhysicalArmorValue"
        // static metadata: MNetworkVarNames "float m_flMagicalResistanceValue"
        // static metadata: MNetworkVarNames "int8 m_nUnitModelVariant"
        // static metadata: MNetworkVarNames "bool m_bIsWaitingToSpawn"
        // static metadata: MNetworkVarNames "int64 m_nTotalDamageTaken"
        // static metadata: MNetworkVarNames "float m_flManaRegen"
        // static metadata: MNetworkVarNames "float m_flHealthRegen"
        // static metadata: MNetworkVarNames "bool m_bIsMoving"
        // static metadata: MNetworkVarNames "float m_fRevealRadius"
        // static metadata: MNetworkVarNames "bool m_bCanUseWards"
        // static metadata: MNetworkVarNames "bool m_bCanUseAllItems"
        // static metadata: MNetworkVarNames "int m_iXPBounty"
        // static metadata: MNetworkVarNames "int m_iXPBountyExtra"
        // static metadata: MNetworkVarNames "int m_iGoldBountyMin"
        // static metadata: MNetworkVarNames "int m_iGoldBountyMax"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerNPC"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hGoalEntity"
        // static metadata: MNetworkVarNames "CHandle< C_DOTA_NeutralSpawner> m_hNeutralSpawner"
        // static metadata: MNetworkVarNames "Activity m_NetworkActivity"
        // static metadata: MNetworkVarNames "int m_NetworkSequenceIndex"
        // static metadata: MNetworkVarNames "bool m_bShouldDoFlyHeightVisual"
        // static metadata: MNetworkVarNames "float m_flStartSequenceCycle"
        // static metadata: MNetworkVarNames "char m_CustomHealthLabel"
        // static metadata: MNetworkVarNames "Color m_CustomHealthLabelColor"
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC : public source2sdk::client::C_NextBotCombatCharacter
        {
        public:
            uint8_t _pad0a30[0x10]; // 0xa30
            // metadata: MNetworkEnable
            bool m_bIsPhantom; // 0xa40            
            uint8_t _pad0a41[0x3]; // 0xa41
            std::uint32_t m_iUnitType; // 0xa44            
            uint8_t _pad0a48[0x10]; // 0xa48
            // metadata: MNetworkEnable
            bool m_bSelectionRingVisible; // 0xa58            
            uint8_t _pad0a59[0x3]; // 0xa59
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentLevel; // 0xa5c            
            // metadata: MNetworkEnable
            bool m_bIsAncient; // 0xa60            
            // metadata: MNetworkEnable
            bool m_bIsBossCreature; // 0xa61            
            // metadata: MNetworkEnable
            bool m_bStolenScepter; // 0xa62            
            // metadata: MNetworkEnable
            bool m_bIsNeutralUnitType; // 0xa63            
            bool m_bSelectOnSpawn; // 0xa64            
            bool m_bCachedReplicatedMorphlingIllusion; // 0xa65            
            bool m_bIgnoreAddSummonedToSelection; // 0xa66            
            bool m_bConsideredHero; // 0xa67            
            bool m_bUsesConstantGesture; // 0xa68            
            bool m_bUseHeroAbilityNumbers; // 0xa69            
            bool m_bHasSharedAbilities; // 0xa6a            
            // metadata: MNetworkEnable
            bool m_bIsSummoned; // 0xa6b            
            // metadata: MNetworkEnable
            bool m_bCanBeDominated; // 0xa6c            
            // metadata: MNetworkEnable
            bool m_bHasUpgradeableAbilities; // 0xa6d            
            uint8_t _pad0a6e[0x2]; // 0xa6e
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            float m_flHealthThinkRegen; // 0xa70            
            uint8_t _pad0a74[0x4]; // 0xa74
            // metadata: MNetworkEnable
            std::uint64_t m_iIsControllableByPlayer64; // 0xa78            
            // metadata: MNetworkEnable
            std::int32_t m_nHealthBarOffsetOverride; // 0xa80            
            // metadata: MNetworkEnable
            bool m_bCanRespawn; // 0xa84            
            uint8_t _pad0a85[0x3]; // 0xa85
            // metadata: MNetworkEnable
            std::int32_t m_iAttackRange; // 0xa88            
            // metadata: MNetworkEnable
            bool m_bIsClone; // 0xa8c            
            Color m_colorGemColor; // 0xa8d            
            bool m_bHasColorGem; // 0xa91            
            uint8_t _pad0a92[0x2]; // 0xa92
            source2sdk::client::ParticleIndex_t m_nFXDeniableIndex; // 0xa94            
            // metadata: MNetworkEnable
            std::int32_t m_iMoveSpeed; // 0xa98            
            std::int32_t m_iBaseAttackSpeed; // 0xa9c            
            // metadata: MNetworkEnable
            float m_flBaseAttackTime; // 0xaa0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUnitNameIndexChanged"
            std::int32_t m_iUnitNameIndex; // 0xaa4            
            std::int32_t m_iHealthBarOffset; // 0xaa8            
            Color m_iHealthBarHighlightColor; // 0xaac            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "65536,000000"
            float m_flMana; // 0xab0            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "65536,000000"
            float m_flMaxMana; // 0xab4            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "14"
            // metadata: MNetworkMinValue "-50,000000"
            // metadata: MNetworkMaxValue "500,000000"
            float m_flManaThinkRegen; // 0xab8            
            // metadata: MNetworkEnable
            std::int32_t m_iBKBChargesUsed; // 0xabc            
            // metadata: MNetworkEnable
            std::int32_t m_iAeonChargesUsed; // 0xac0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRefresherUseTime; // 0xac4            
            // metadata: MNetworkEnable
            float m_flRefresherLastCooldown; // 0xac8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDealtDamageTime; // 0xacc            
            // metadata: MNetworkEnable
            std::int32_t m_iBotDebugData; // 0xad0            
            // metadata: MNetworkEnable
            bool m_bIsIllusion; // 0xad4            
            bool m_bHasClientSeenIllusionModifier; // 0xad5            
            uint8_t _pad0ad6[0x2]; // 0xad6
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilitiesChanged"
            // metadata: MNetworkPriority "32"
            // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_vecAbilities;
            char m_vecAbilities[0x18]; // 0xad8            
            float m_flInvisibilityLevel; // 0xaf0            
            float m_flHullRadius; // 0xaf4            
            float m_flCollisionPadding; // 0xaf8            
            float m_flRingRadius; // 0xafc            
            float m_flProjectileCollisionSize; // 0xb00            
            uint8_t _pad0b04[0x4]; // 0xb04
            CUtlSymbolLarge m_iszUnitName; // 0xb08            
            CUtlSymbolLarge m_iszUnitNameIconOverride; // 0xb10            
            CUtlSymbolLarge m_iszParticleFolder; // 0xb18            
            CUtlSymbolLarge m_iszSoundSet; // 0xb20            
            CUtlSymbolLarge m_iszSelectionGroup; // 0xb28            
            CUtlSymbolLarge m_iszVoiceFile; // 0xb30            
            CUtlSymbolLarge m_iszGameSoundsFile; // 0xb38            
            CUtlSymbolLarge m_iszVoiceBackgroundSound; // 0xb40            
            CUtlSymbolLarge m_iszIdleSoundLoop; // 0xb48            
            // metadata: MNetworkEnable
            CUtlString m_szUnitLabel; // 0xb50            
            // metadata: MNetworkEnable
            CUtlString m_szScaleset; // 0xb58            
            // metadata: MNetworkEnable
            std::uint8_t m_nUnitLabelIndex; // 0xb60            
            uint8_t _pad0b61[0x7]; // 0xb61
            CUtlString m_strAnimationModifier; // 0xb68            
            CUtlString m_TerrainSpecificFootstepEffect; // 0xb70            
            bool m_bUseCustomTerrainWeatherEffect; // 0xb78            
            bool m_bHasClientSoundReplacement; // 0xb79            
            bool m_bHasClientReplacementParticle; // 0xb7a            
            uint8_t _pad0b7b[0x9]; // 0xb7b
            bool m_bResourcesLoaded; // 0xb84            
            uint8_t _pad0b85[0x3]; // 0xb85
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTauntCooldown; // 0xb88            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTauntCooldown2; // 0xb8c            
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_SHOP_TYPE m_iCurShop; // 0xb90            
            uint8_t _pad0b94[0x4]; // 0xb94
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szCurShopEntName; // 0xb98            
            // metadata: MNetworkEnable
            std::int32_t m_iDayTimeVisionRange; // 0xba0            
            // metadata: MNetworkEnable
            std::int32_t m_iNightTimeVisionRange; // 0xba4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDamageMinChanged"
            std::int32_t m_iDamageMin; // 0xba8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDamageMaxChanged"
            std::int32_t m_iDamageMax; // 0xbac            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageBonus; // 0xbb0            
            // metadata: MNetworkEnable
            std::int32_t m_iBaseDamageMin; // 0xbb4            
            // metadata: MNetworkEnable
            std::int32_t m_iBaseDamageMax; // 0xbb8            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iTaggedAsVisibleByTeam; // 0xbbc            
            // metadata: MNetworkEnable
            source2sdk::client::CDOTA_ModifierManager m_ModifierManager; // 0xbc0            
            // metadata: MNetworkEnable
            source2sdk::client::C_DOTA_UnitInventory m_Inventory; // 0xf00            
            uint8_t _pad0ff0[0x10]; // 0xff0
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUnitStateChanged"
            // metadata: MNetworkPriority "32"
            std::uint64_t m_nUnitState64; // 0x1000            
            uint8_t _pad1008[0x8]; // 0x1008
            std::uint64_t m_nUnitDebuffState; // 0x1010            
            bool m_bHasInventory; // 0x1018            
            uint8_t _pad1019[0x3]; // 0x1019
            std::int32_t m_iAcquisitionRange; // 0x101c            
            std::int32_t m_FoWViewID; // 0x1020            
            std::int32_t m_iTeamViewerID; // 0x1024            
            std::int32_t m_iPrevHealthPct; // 0x1028            
            std::int32_t m_iPrevLifeState; // 0x102c            
            std::int32_t m_iPrevTeam; // 0x1030            
            bool m_bPrevProvidesVision; // 0x1034            
            uint8_t _pad1035[0x3]; // 0x1035
            std::uint64_t m_nPrevControllableMask; // 0x1038            
            uint8_t _pad1040[0x8]; // 0x1040
            source2sdk::client::CountdownTimer m_TagTime; // 0x1048            
            source2sdk::client::CountdownTimer m_ClickedTime; // 0x1060            
            source2sdk::entity2::GameTime_t m_flIdleRunPoseStartTime[2]; // 0x1078            
            float m_flIdleRunPoseDuration[2]; // 0x1080            
            bool m_bAnimationTransitionActive; // 0x1088            
            uint8_t _pad1089[0x3]; // 0x1089
            std::int32_t m_nAnimationTransitionPoseParameters[2]; // 0x108c            
            std::int32_t m_nAnimationTransitionInjuredPoseParameters[2]; // 0x1094            
            std::int32_t m_nAnimationTransitionAggressivePoseParameters[2]; // 0x109c            
            uint8_t _pad10a4[0x5c]; // 0x10a4
            source2sdk::entity2::GameTime_t m_flTimeSinceLastAbilityNag; // 0x1100            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iAttackCapabilities; // 0x1104            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iSpecialAbility; // 0x1108            
            std::int32_t m_iMoveCapabilities; // 0x110c            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nPlayerOwnerID; // 0x1110            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x1114            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0x1118            
            uint8_t _pad111c[0x4]; // 0x111c
            CUtlSymbolLarge m_iszMinimapIcon; // 0x1120            
            uint8_t _pad1128[0x8]; // 0x1128
            float m_flMinimapIconSize; // 0x1130            
            bool m_bMinimapDisableTint; // 0x1134            
            bool m_bMinimapDisableRotation; // 0x1135            
            Color m_colorHeroGlow; // 0x1136            
            uint8_t _pad113a[0x2]; // 0x113a
            std::int32_t m_iNearShopMask; // 0x113c            
            std::int32_t m_nPoseParameterTurn; // 0x1140            
            std::int32_t m_nPoseParameterRun; // 0x1144            
            float m_flLean; // 0x1148            
            float m_flRun; // 0x114c            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_anglediff; // 0x1150            
            bool m_bInfoKeyActive; // 0x1154            
            bool m_bNewUpdateAssetModifiersNetworked; // 0x1155            
            uint8_t _pad1156[0x2]; // 0x1156
            source2sdk::entity2::GameTick_t m_nAssetModifiersLastUpdatedTick; // 0x1158            
            bool m_bSuppressGlow; // 0x115c            
            bool m_bWasSinking; // 0x115d            
            uint8_t _pad115e[0x2]; // 0x115e
            float m_flRangeDisplayDist; // 0x1160            
            uint8_t _pad1164[0x1e4]; // 0x1164
            CUtlSymbolLarge m_szDefaultIdle; // 0x1348            
            CUtlSymbolLarge m_szDefaultRareIdle; // 0x1350            
            source2sdk::client::CountdownTimer m_damagetimer; // 0x1358            
            Vector m_vRenderOrigin; // 0x1370            
            float m_fZDelta; // 0x137c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0x1380            
            bool m_bBaseStatsChanged; // 0x1384            
            bool m_bNeedsSoundEmitterRefresh; // 0x1385            
            uint8_t _pad1386[0x2]; // 0x1386
            // metadata: MNetworkEnable
            float m_flPhysicalArmorValue; // 0x1388            
            // metadata: MNetworkEnable
            float m_flMagicalResistanceValue; // 0x138c            
            std::int32_t m_nPrevSequenceParity; // 0x1390            
            uint8_t _pad1394[0xa4]; // 0x1394
            float m_flPrevInvisLevel; // 0x1438            
            uint8_t _pad143c[0x4]; // 0x143c
            // m_nOriginalModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nOriginalModelIndex;
            char m_nOriginalModelIndex[0x8]; // 0x1440            
            // m_nClientOriginalModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nClientOriginalModelIndex;
            char m_nClientOriginalModelIndex[0x8]; // 0x1448            
            // m_nClientReplacementModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nClientReplacementModelIndex;
            char m_nClientReplacementModelIndex[0x8]; // 0x1450            
            bool m_bClientReplacementModelNeedsRebuild; // 0x1458            
            uint8_t _pad1459[0x3]; // 0x1459
            std::int32_t m_nClientReplacementModelReloadCount; // 0x145c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUnitModelVariantChanged"
            std::int8_t m_nUnitModelVariant; // 0x1460            
            std::int8_t m_nUnitModelVariantCount; // 0x1461            
            uint8_t _pad1462[0x2]; // 0x1462
            std::int32_t m_iPrevSequence; // 0x1464            
            char* m_pLastWeatherEffectName; // 0x1468            
            uint8_t _pad1470[0x8]; // 0x1470
            source2sdk::client::CountdownTimer m_VoiceBackgroundSoundTimer; // 0x1478            
            // metadata: MNetworkEnable
            bool m_bIsWaitingToSpawn; // 0x1490            
            uint8_t _pad1491[0x7]; // 0x1491
            // metadata: MNetworkEnable
            std::int64_t m_nTotalDamageTaken; // 0x1498            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            // metadata: MNetworkChangeCallback "OnManaRegenChanged"
            float m_flManaRegen; // 0x14a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            // metadata: MNetworkChangeCallback "OnHealthRegenChanged"
            float m_flHealthRegen; // 0x14a4            
            // metadata: MNetworkEnable
            bool m_bIsMoving; // 0x14a8            
            uint8_t _pad14a9[0x3]; // 0x14a9
            // metadata: MNetworkEnable
            float m_fRevealRadius; // 0x14ac            
            // metadata: MNetworkEnable
            bool m_bCanUseWards; // 0x14b0            
            // metadata: MNetworkEnable
            bool m_bCanUseAllItems; // 0x14b1            
            uint8_t _pad14b2[0x2]; // 0x14b2
            // metadata: MNetworkEnable
            std::int32_t m_iXPBounty; // 0x14b4            
            // metadata: MNetworkEnable
            std::int32_t m_iXPBountyExtra; // 0x14b8            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldBountyMin; // 0x14bc            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldBountyMax; // 0x14c0            
            // metadata: MNetworkEnable
            // m_hOwnerNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwnerNPC;
            char m_hOwnerNPC[0x4]; // 0x14c4            
            // metadata: MNetworkEnable
            // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hGoalEntity;
            char m_hGoalEntity[0x4]; // 0x14c8            
            // metadata: MNetworkEnable
            // m_hNeutralSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_NeutralSpawner> m_hNeutralSpawner;
            char m_hNeutralSpawner[0x4]; // 0x14cc            
            // m_hClientOverrideMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hClientOverrideMaterial;
            char m_hClientOverrideMaterial[0x8]; // 0x14d0            
            bool m_bCombinerMaterialOverrideListChanged; // 0x14d8            
            uint8_t _pad14d9[0x3]; // 0x14d9
            std::int32_t m_nBaseModelMeshCount; // 0x14dc            
            // m_combinerMaterialOverrideList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandleCopyable<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2>> m_combinerMaterialOverrideList;
            char m_combinerMaterialOverrideList[0x18]; // 0x14e0            
            std::int8_t m_nArcanaLevel; // 0x14f8            
            std::int8_t m_nDefaultArcanaLevel; // 0x14f9            
            Color m_defaultColorGemColor; // 0x14fa            
            uint8_t _pad14fe[0x1a]; // 0x14fe
            bool m_bHasBuiltWearableSpawnList; // 0x1518            
            bool m_bHasCostume; // 0x1519            
            bool m_bRecreateParticleSystemsOnModifiersChange; // 0x151a            
            uint8_t _pad151b[0x19]; // 0x151b
            float m_flAdditionalSinkDelay; // 0x1534            
            uint8_t _pad1538[0xe0]; // 0x1538
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_NetworkActivity; // 0x1618            
            std::int32_t m_PrevNetworkActivity; // 0x161c            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_NetworkSequenceIndex; // 0x1620            
            // metadata: MNetworkEnable
            bool m_bShouldDoFlyHeightVisual; // 0x1624            
            uint8_t _pad1625[0x3]; // 0x1625
            // metadata: MNetworkEnable
            float m_flStartSequenceCycle; // 0x1628            
            uint8_t _pad162c[0x4]; // 0x162c
            // m_ActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_ActivityModifiers;
            char m_ActivityModifiers[0x18]; // 0x1630            
            // m_hBackgroundSceneEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_SceneEntity> m_hBackgroundSceneEnt;
            char m_hBackgroundSceneEnt[0x4]; // 0x1648            
            // m_hSpeakingSceneEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_SceneEntity> m_hSpeakingSceneEnt;
            char m_hSpeakingSceneEnt[0x4]; // 0x164c            
            uint8_t _pad1650[0x10]; // 0x1650
            // m_hOldWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_EconWearable>> m_hOldWearables;
            char m_hOldWearables[0x18]; // 0x1660            
            // m_hOldWearableSkins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlStringToken> m_hOldWearableSkins;
            char m_hOldWearableSkins[0x18]; // 0x1678            
            // metadata: MNetworkEnable
            char m_CustomHealthLabel[256]; // 0x1690            
            // metadata: MNetworkEnable
            Color m_CustomHealthLabelColor; // 0x1790            
            source2sdk::client::item_definition_index_t m_nWearableDefIndex; // 0x1794            
            uint8_t _pad1798[0x1]; // 0x1798
            Color m_gibTintColor; // 0x1799            
            bool m_bForceMaterialCombine; // 0x179d            
            bool m_bShouldDrawParticlesWhileHidden; // 0x179e            
            bool m_bIsClientThinkPending; // 0x179f            
            bool m_bActivityModifiersDirty; // 0x17a0            
            bool m_bUnitModelVariantChanged; // 0x17a1            
            bool m_bWearablesAreTaunting; // 0x17a2            
            bool m_bWearablesLoadoutOverride; // 0x17a3            
            uint8_t _pad17a4[0x14]; // 0x17a4
            bool m_bShowCannotBeDisabledIcon; // 0x17b8            
            uint8_t _pad17b9[0x1f];
            
            // Datamap fields:
            // int32_t InputSetStyleOverride; // 0x0
            // CUtlSymbolLarge InputSetAutoStyleCriteria; // 0x0
            // uint8_t m_iTeamNum; // 0x3eb
            // CHandle< CBaseEntity > econ_owner; // 0x7fffffff
            // int32_t EconItemCount; // 0x7fffffff
            // bool inPortrait; // 0x7fffffff
            // bool EnableAutoStyles; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC) == 0x17d8);
    };
};
