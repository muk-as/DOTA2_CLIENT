#pragma once
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
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    class C_DOTA_NeutralSpawner;
};

namespace source2sdk::client
{
    class C_EconWearable;
};

namespace source2sdk::client
{
    class C_SceneEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1808
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
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
    // static metadata: MNetworkVarNames "EHANDLE m_hAbilities"
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
    class C_DOTA_BaseNPC : public client::C_NextBotCombatCharacter
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa38[0x10]; // 0xa38
        // metadata: MNetworkEnable
        bool m_bIsPhantom; // 0xa48        
        [[maybe_unused]] std::uint8_t pad_0xa49[0x3]; // 0xa49
        uint32_t m_iUnitType; // 0xa4c        
        [[maybe_unused]] std::uint8_t pad_0xa50[0x10]; // 0xa50
        // metadata: MNetworkEnable
        bool m_bSelectionRingVisible; // 0xa60        
        [[maybe_unused]] std::uint8_t pad_0xa61[0x3]; // 0xa61
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iCurrentLevel; // 0xa64        
        // metadata: MNetworkEnable
        bool m_bIsAncient; // 0xa68        
        // metadata: MNetworkEnable
        bool m_bIsBossCreature; // 0xa69        
        // metadata: MNetworkEnable
        bool m_bStolenScepter; // 0xa6a        
        // metadata: MNetworkEnable
        bool m_bIsNeutralUnitType; // 0xa6b        
        bool m_bSelectOnSpawn; // 0xa6c        
        bool m_bCachedReplicatedMorphlingIllusion; // 0xa6d        
        bool m_bIgnoreAddSummonedToSelection; // 0xa6e        
        bool m_bConsideredHero; // 0xa6f        
        bool m_bUsesConstantGesture; // 0xa70        
        bool m_bUseHeroAbilityNumbers; // 0xa71        
        bool m_bHasSharedAbilities; // 0xa72        
        // metadata: MNetworkEnable
        bool m_bIsSummoned; // 0xa73        
        // metadata: MNetworkEnable
        bool m_bCanBeDominated; // 0xa74        
        // metadata: MNetworkEnable
        bool m_bHasUpgradeableAbilities; // 0xa75        
        [[maybe_unused]] std::uint8_t pad_0xa76[0x2]; // 0xa76
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "18"
        // metadata: MNetworkMinValue "-100,000000"
        // metadata: MNetworkMaxValue "1000,000000"
        float m_flHealthThinkRegen; // 0xa78        
        [[maybe_unused]] std::uint8_t pad_0xa7c[0x4]; // 0xa7c
        // metadata: MNetworkEnable
        uint64_t m_iIsControllableByPlayer64; // 0xa80        
        // metadata: MNetworkEnable
        int32_t m_nHealthBarOffsetOverride; // 0xa88        
        // metadata: MNetworkEnable
        bool m_bCanRespawn; // 0xa8c        
        [[maybe_unused]] std::uint8_t pad_0xa8d[0x3]; // 0xa8d
        // metadata: MNetworkEnable
        int32_t m_iAttackRange; // 0xa90        
        // metadata: MNetworkEnable
        bool m_bIsClone; // 0xa94        
        Color m_colorGemColor; // 0xa95        
        bool m_bHasColorGem; // 0xa99        
        [[maybe_unused]] std::uint8_t pad_0xa9a[0x2]; // 0xa9a
        client::ParticleIndex_t m_nFXDeniableIndex; // 0xa9c        
        // metadata: MNetworkEnable
        int32_t m_iMoveSpeed; // 0xaa0        
        int32_t m_iBaseAttackSpeed; // 0xaa4        
        // metadata: MNetworkEnable
        float m_flBaseAttackTime; // 0xaa8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUnitNameIndexChanged"
        int32_t m_iUnitNameIndex; // 0xaac        
        int32_t m_iHealthBarOffset; // 0xab0        
        Color m_iHealthBarHighlightColor; // 0xab4        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "20"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "65536,000000"
        float m_flMana; // 0xab8        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "20"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "65536,000000"
        float m_flMaxMana; // 0xabc        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "14"
        // metadata: MNetworkMinValue "-50,000000"
        // metadata: MNetworkMaxValue "500,000000"
        float m_flManaThinkRegen; // 0xac0        
        // metadata: MNetworkEnable
        int32_t m_iBKBChargesUsed; // 0xac4        
        // metadata: MNetworkEnable
        int32_t m_iAeonChargesUsed; // 0xac8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRefresherUseTime; // 0xacc        
        // metadata: MNetworkEnable
        float m_flRefresherLastCooldown; // 0xad0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastDealtDamageTime; // 0xad4        
        // metadata: MNetworkEnable
        int32_t m_iBotDebugData; // 0xad8        
        // metadata: MNetworkEnable
        bool m_bIsIllusion; // 0xadc        
        bool m_bHasClientSeenIllusionModifier; // 0xadd        
        [[maybe_unused]] std::uint8_t pad_0xade[0x2]; // 0xade
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnAbilitiesChanged"
        // metadata: MNetworkPriority "32"
        // m_hAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAbilities[35];
        char m_hAbilities[0x8c]; // 0xae0        
        float m_flInvisibilityLevel; // 0xb6c        
        float m_flHullRadius; // 0xb70        
        float m_flCollisionPadding; // 0xb74        
        float m_flRingRadius; // 0xb78        
        float m_flProjectileCollisionSize; // 0xb7c        
        CUtlSymbolLarge m_iszUnitName; // 0xb80        
        CUtlSymbolLarge m_iszUnitNameIconOverride; // 0xb88        
        CUtlSymbolLarge m_iszParticleFolder; // 0xb90        
        CUtlSymbolLarge m_iszSoundSet; // 0xb98        
        CUtlSymbolLarge m_iszSelectionGroup; // 0xba0        
        CUtlSymbolLarge m_iszVoiceFile; // 0xba8        
        CUtlSymbolLarge m_iszGameSoundsFile; // 0xbb0        
        CUtlSymbolLarge m_iszVoiceBackgroundSound; // 0xbb8        
        CUtlSymbolLarge m_iszIdleSoundLoop; // 0xbc0        
        // metadata: MNetworkEnable
        CUtlString m_szUnitLabel; // 0xbc8        
        // metadata: MNetworkEnable
        CUtlString m_szScaleset; // 0xbd0        
        // metadata: MNetworkEnable
        uint8_t m_nUnitLabelIndex; // 0xbd8        
        [[maybe_unused]] std::uint8_t pad_0xbd9[0x7]; // 0xbd9
        CUtlString m_strAnimationModifier; // 0xbe0        
        CUtlString m_TerrainSpecificFootstepEffect; // 0xbe8        
        bool m_bUseCustomTerrainWeatherEffect; // 0xbf0        
        bool m_bHasClientSoundReplacement; // 0xbf1        
        bool m_bHasClientReplacementParticle; // 0xbf2        
        [[maybe_unused]] std::uint8_t pad_0xbf3[0x9]; // 0xbf3
        bool m_bResourcesLoaded; // 0xbfc        
        [[maybe_unused]] std::uint8_t pad_0xbfd[0x3]; // 0xbfd
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTauntCooldown; // 0xc00        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTauntCooldown2; // 0xc04        
        // metadata: MNetworkEnable
        client::DOTA_SHOP_TYPE m_iCurShop; // 0xc08        
        [[maybe_unused]] std::uint8_t pad_0xc0c[0x4]; // 0xc0c
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szCurShopEntName; // 0xc10        
        // metadata: MNetworkEnable
        int32_t m_iDayTimeVisionRange; // 0xc18        
        // metadata: MNetworkEnable
        int32_t m_iNightTimeVisionRange; // 0xc1c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDamageMinChanged"
        int32_t m_iDamageMin; // 0xc20        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDamageMaxChanged"
        int32_t m_iDamageMax; // 0xc24        
        // metadata: MNetworkEnable
        int32_t m_iDamageBonus; // 0xc28        
        // metadata: MNetworkEnable
        int32_t m_iBaseDamageMin; // 0xc2c        
        // metadata: MNetworkEnable
        int32_t m_iBaseDamageMax; // 0xc30        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iTaggedAsVisibleByTeam; // 0xc34        
        // metadata: MNetworkEnable
        client::CDOTA_ModifierManager m_ModifierManager; // 0xc38        
        // metadata: MNetworkEnable
        client::C_DOTA_UnitInventory m_Inventory; // 0xf58        
        [[maybe_unused]] std::uint8_t pad_0x1028[0x8]; // 0x1028
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUnitStateChanged"
        // metadata: MNetworkPriority "32"
        uint64_t m_nUnitState64; // 0x1030        
        [[maybe_unused]] std::uint8_t pad_0x1038[0x8]; // 0x1038
        uint64_t m_nUnitDebuffState; // 0x1040        
        bool m_bHasInventory; // 0x1048        
        [[maybe_unused]] std::uint8_t pad_0x1049[0x3]; // 0x1049
        int32_t m_iAcquisitionRange; // 0x104c        
        int32_t m_FoWViewID; // 0x1050        
        int32_t m_iPrevHealthPct; // 0x1054        
        int32_t m_iPrevLifeState; // 0x1058        
        int32_t m_iPrevTeam; // 0x105c        
        bool m_bPrevProvidesVision; // 0x1060        
        [[maybe_unused]] std::uint8_t pad_0x1061[0x7]; // 0x1061
        uint64_t m_nPrevControllableMask; // 0x1068        
        [[maybe_unused]] std::uint8_t pad_0x1070[0x8]; // 0x1070
        client::CountdownTimer m_TagTime; // 0x1078        
        client::CountdownTimer m_ClickedTime; // 0x1090        
        entity2::GameTime_t m_flIdleRunPoseStartTime[2]; // 0x10a8        
        float m_flIdleRunPoseDuration[2]; // 0x10b0        
        bool m_bAnimationTransitionActive; // 0x10b8        
        [[maybe_unused]] std::uint8_t pad_0x10b9[0x3]; // 0x10b9
        int32_t m_nAnimationTransitionPoseParameters[2]; // 0x10bc        
        int32_t m_nAnimationTransitionInjuredPoseParameters[2]; // 0x10c4        
        int32_t m_nAnimationTransitionAggressivePoseParameters[2]; // 0x10cc        
        [[maybe_unused]] std::uint8_t pad_0x10d4[0x5c]; // 0x10d4
        entity2::GameTime_t m_flTimeSinceLastAbilityNag; // 0x1130        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iAttackCapabilities; // 0x1134        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iSpecialAbility; // 0x1138        
        int32_t m_iMoveCapabilities; // 0x113c        
        // metadata: MNetworkEnable
        client::PlayerID_t m_nPlayerOwnerID; // 0x1140        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastDamageTime; // 0x1144        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastAttackTime; // 0x1148        
        [[maybe_unused]] std::uint8_t pad_0x114c[0x4]; // 0x114c
        CUtlSymbolLarge m_iszMinimapIcon; // 0x1150        
        [[maybe_unused]] std::uint8_t pad_0x1158[0x8]; // 0x1158
        float m_flMinimapIconSize; // 0x1160        
        bool m_bMinimapDisableTint; // 0x1164        
        bool m_bMinimapDisableRotation; // 0x1165        
        Color m_colorHeroGlow; // 0x1166        
        [[maybe_unused]] std::uint8_t pad_0x116a[0x2]; // 0x116a
        int32_t m_iNearShopMask; // 0x116c        
        int32_t m_nPoseParameterTurn; // 0x1170        
        int32_t m_nPoseParameterRun; // 0x1174        
        float m_flLean; // 0x1178        
        float m_flRun; // 0x117c        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_anglediff; // 0x1180        
        bool m_bInfoKeyActive; // 0x1184        
        bool m_bNewUpdateAssetModifiersNetworked; // 0x1185        
        [[maybe_unused]] std::uint8_t pad_0x1186[0x2]; // 0x1186
        entity2::GameTick_t m_nAssetModifiersLastUpdatedTick; // 0x1188        
        bool m_bSuppressGlow; // 0x118c        
        bool m_bWasSinking; // 0x118d        
        [[maybe_unused]] std::uint8_t pad_0x118e[0x2]; // 0x118e
        float m_flRangeDisplayDist; // 0x1190        
        [[maybe_unused]] std::uint8_t pad_0x1194[0x1e4]; // 0x1194
        CUtlSymbolLarge m_szDefaultIdle; // 0x1378        
        CUtlSymbolLarge m_szDefaultRareIdle; // 0x1380        
        client::CountdownTimer m_damagetimer; // 0x1388        
        Vector m_vRenderOrigin; // 0x13a0        
        float m_fZDelta; // 0x13ac        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flDeathTime; // 0x13b0        
        bool m_bBaseStatsChanged; // 0x13b4        
        bool m_bNeedsSoundEmitterRefresh; // 0x13b5        
        [[maybe_unused]] std::uint8_t pad_0x13b6[0x2]; // 0x13b6
        // metadata: MNetworkEnable
        float m_flPhysicalArmorValue; // 0x13b8        
        // metadata: MNetworkEnable
        float m_flMagicalResistanceValue; // 0x13bc        
        int32_t m_nPrevSequenceParity; // 0x13c0        
        [[maybe_unused]] std::uint8_t pad_0x13c4[0xa4]; // 0x13c4
        float m_flPrevInvisLevel; // 0x1468        
        [[maybe_unused]] std::uint8_t pad_0x146c[0x4]; // 0x146c
        // m_nOriginalModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_nOriginalModelIndex;
        char m_nOriginalModelIndex[0x8]; // 0x1470        
        // m_nClientOriginalModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_nClientOriginalModelIndex;
        char m_nClientOriginalModelIndex[0x8]; // 0x1478        
        // m_nClientReplacementModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_nClientReplacementModelIndex;
        char m_nClientReplacementModelIndex[0x8]; // 0x1480        
        bool m_bClientReplacementModelNeedsRebuild; // 0x1488        
        [[maybe_unused]] std::uint8_t pad_0x1489[0x3]; // 0x1489
        int32_t m_nClientReplacementModelReloadCount; // 0x148c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUnitModelVariantChanged"
        int8_t m_nUnitModelVariant; // 0x1490        
        int8_t m_nUnitModelVariantCount; // 0x1491        
        [[maybe_unused]] std::uint8_t pad_0x1492[0x2]; // 0x1492
        int32_t m_iPrevSequence; // 0x1494        
        char* m_pLastWeatherEffectName; // 0x1498        
        [[maybe_unused]] std::uint8_t pad_0x14a0[0x8]; // 0x14a0
        client::CountdownTimer m_VoiceBackgroundSoundTimer; // 0x14a8        
        // metadata: MNetworkEnable
        bool m_bIsWaitingToSpawn; // 0x14c0        
        [[maybe_unused]] std::uint8_t pad_0x14c1[0x7]; // 0x14c1
        // metadata: MNetworkEnable
        int64_t m_nTotalDamageTaken; // 0x14c8        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "18"
        // metadata: MNetworkMinValue "-100,000000"
        // metadata: MNetworkMaxValue "1000,000000"
        // metadata: MNetworkChangeCallback "OnManaRegenChanged"
        float m_flManaRegen; // 0x14d0        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "18"
        // metadata: MNetworkMinValue "-100,000000"
        // metadata: MNetworkMaxValue "1000,000000"
        // metadata: MNetworkChangeCallback "OnHealthRegenChanged"
        float m_flHealthRegen; // 0x14d4        
        // metadata: MNetworkEnable
        bool m_bIsMoving; // 0x14d8        
        [[maybe_unused]] std::uint8_t pad_0x14d9[0x3]; // 0x14d9
        // metadata: MNetworkEnable
        float m_fRevealRadius; // 0x14dc        
        // metadata: MNetworkEnable
        bool m_bCanUseWards; // 0x14e0        
        // metadata: MNetworkEnable
        bool m_bCanUseAllItems; // 0x14e1        
        [[maybe_unused]] std::uint8_t pad_0x14e2[0x2]; // 0x14e2
        // metadata: MNetworkEnable
        int32_t m_iXPBounty; // 0x14e4        
        // metadata: MNetworkEnable
        int32_t m_iXPBountyExtra; // 0x14e8        
        // metadata: MNetworkEnable
        int32_t m_iGoldBountyMin; // 0x14ec        
        // metadata: MNetworkEnable
        int32_t m_iGoldBountyMax; // 0x14f0        
        // metadata: MNetworkEnable
        // m_hOwnerNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOwnerNPC;
        char m_hOwnerNPC[0x4]; // 0x14f4        
        // metadata: MNetworkEnable
        // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hGoalEntity;
        char m_hGoalEntity[0x4]; // 0x14f8        
        // metadata: MNetworkEnable
        // m_hNeutralSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTA_NeutralSpawner> m_hNeutralSpawner;
        char m_hNeutralSpawner[0x4]; // 0x14fc        
        // m_hClientOverrideMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hClientOverrideMaterial;
        char m_hClientOverrideMaterial[0x8]; // 0x1500        
        bool m_bCombinerMaterialOverrideListChanged; // 0x1508        
        [[maybe_unused]] std::uint8_t pad_0x1509[0x3]; // 0x1509
        int32_t m_nBaseModelMeshCount; // 0x150c        
        // m_combinerMaterialOverrideList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CStrongHandleCopyable<resourcesystem::InfoForResourceTypeIMaterial2>> m_combinerMaterialOverrideList;
        char m_combinerMaterialOverrideList[0x18]; // 0x1510        
        int8_t m_nArcanaLevel; // 0x1528        
        int8_t m_nDefaultArcanaLevel; // 0x1529        
        Color m_defaultColorGemColor; // 0x152a        
        [[maybe_unused]] std::uint8_t pad_0x152e[0x1a]; // 0x152e
        bool m_bHasBuiltWearableSpawnList; // 0x1548        
        bool m_bHasCostume; // 0x1549        
        bool m_bRecreateParticleSystemsOnModifiersChange; // 0x154a        
        [[maybe_unused]] std::uint8_t pad_0x154b[0x19]; // 0x154b
        float m_flAdditionalSinkDelay; // 0x1564        
        [[maybe_unused]] std::uint8_t pad_0x1568[0xe0]; // 0x1568
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_NetworkActivity; // 0x1648        
        int32_t m_PrevNetworkActivity; // 0x164c        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_NetworkSequenceIndex; // 0x1650        
        // metadata: MNetworkEnable
        bool m_bShouldDoFlyHeightVisual; // 0x1654        
        [[maybe_unused]] std::uint8_t pad_0x1655[0x3]; // 0x1655
        // metadata: MNetworkEnable
        float m_flStartSequenceCycle; // 0x1658        
        [[maybe_unused]] std::uint8_t pad_0x165c[0x4]; // 0x165c
        // m_ActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlSymbol> m_ActivityModifiers;
        char m_ActivityModifiers[0x18]; // 0x1660        
        // m_hBackgroundSceneEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_SceneEntity> m_hBackgroundSceneEnt;
        char m_hBackgroundSceneEnt[0x4]; // 0x1678        
        // m_hSpeakingSceneEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_SceneEntity> m_hSpeakingSceneEnt;
        char m_hSpeakingSceneEnt[0x4]; // 0x167c        
        [[maybe_unused]] std::uint8_t pad_0x1680[0x10]; // 0x1680
        // m_hOldWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_EconWearable>> m_hOldWearables;
        char m_hOldWearables[0x18]; // 0x1690        
        // m_hOldWearableSkins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlStringToken> m_hOldWearableSkins;
        char m_hOldWearableSkins[0x18]; // 0x16a8        
        // metadata: MNetworkEnable
        char m_CustomHealthLabel[256]; // 0x16c0        
        // metadata: MNetworkEnable
        Color m_CustomHealthLabelColor; // 0x17c0        
        client::item_definition_index_t m_nWearableDefIndex; // 0x17c4        
        [[maybe_unused]] std::uint8_t pad_0x17c8[0x1]; // 0x17c8
        Color m_gibTintColor; // 0x17c9        
        bool m_bForceMaterialCombine; // 0x17cd        
        bool m_bShouldDrawParticlesWhileHidden; // 0x17ce        
        bool m_bIsClientThinkPending; // 0x17cf        
        bool m_bActivityModifiersDirty; // 0x17d0        
        bool m_bUnitModelVariantChanged; // 0x17d1        
        bool m_bWearablesAreTaunting; // 0x17d2        
        [[maybe_unused]] std::uint8_t pad_0x17d3[0x15]; // 0x17d3
        bool m_bShowCannotBeDisabledIcon; // 0x17e8        
        [[maybe_unused]] std::uint8_t pad_0x17e9[0x1f];
        
        // Datamap fields:
        // int32_t InputSetStyleOverride; // 0x0
        // CUtlSymbolLarge InputSetAutoStyleCriteria; // 0x0
        // uint8_t m_iTeamNum; // 0x3c3
        // CHandle< CBaseEntity > econ_owner; // 0x7fffffff
        // int32_t EconItemCount; // 0x7fffffff
        // bool inPortrait; // 0x7fffffff
        // bool EnableAutoStyles; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC) == 0x1808);
};
