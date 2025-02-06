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
    // Size: 0x1870
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
        [[maybe_unused]] std::uint8_t pad_0xa80[0x10]; // 0xa80
        // metadata: MNetworkEnable
        bool m_bIsPhantom; // 0xa90        
        [[maybe_unused]] std::uint8_t pad_0xa91[0x3]; // 0xa91
        uint32_t m_iUnitType; // 0xa94        
        [[maybe_unused]] std::uint8_t pad_0xa98[0x10]; // 0xa98
        // metadata: MNetworkEnable
        bool m_bSelectionRingVisible; // 0xaa8        
        [[maybe_unused]] std::uint8_t pad_0xaa9[0x3]; // 0xaa9
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iCurrentLevel; // 0xaac        
        // metadata: MNetworkEnable
        bool m_bIsAncient; // 0xab0        
        // metadata: MNetworkEnable
        bool m_bIsBossCreature; // 0xab1        
        // metadata: MNetworkEnable
        bool m_bStolenScepter; // 0xab2        
        // metadata: MNetworkEnable
        bool m_bIsNeutralUnitType; // 0xab3        
        bool m_bSelectOnSpawn; // 0xab4        
        bool m_bCachedReplicatedMorphlingIllusion; // 0xab5        
        bool m_bIgnoreAddSummonedToSelection; // 0xab6        
        bool m_bConsideredHero; // 0xab7        
        bool m_bUsesConstantGesture; // 0xab8        
        bool m_bUseHeroAbilityNumbers; // 0xab9        
        bool m_bHasSharedAbilities; // 0xaba        
        // metadata: MNetworkEnable
        bool m_bIsSummoned; // 0xabb        
        // metadata: MNetworkEnable
        bool m_bCanBeDominated; // 0xabc        
        // metadata: MNetworkEnable
        bool m_bHasUpgradeableAbilities; // 0xabd        
        [[maybe_unused]] std::uint8_t pad_0xabe[0x2]; // 0xabe
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "18"
        // metadata: MNetworkMinValue "-100,000000"
        // metadata: MNetworkMaxValue "1000,000000"
        float m_flHealthThinkRegen; // 0xac0        
        [[maybe_unused]] std::uint8_t pad_0xac4[0x4]; // 0xac4
        // metadata: MNetworkEnable
        uint64_t m_iIsControllableByPlayer64; // 0xac8        
        // metadata: MNetworkEnable
        int32_t m_nHealthBarOffsetOverride; // 0xad0        
        // metadata: MNetworkEnable
        bool m_bCanRespawn; // 0xad4        
        [[maybe_unused]] std::uint8_t pad_0xad5[0x3]; // 0xad5
        // metadata: MNetworkEnable
        int32_t m_iAttackRange; // 0xad8        
        // metadata: MNetworkEnable
        bool m_bIsClone; // 0xadc        
        Color m_colorGemColor; // 0xadd        
        bool m_bHasColorGem; // 0xae1        
        [[maybe_unused]] std::uint8_t pad_0xae2[0x2]; // 0xae2
        client::ParticleIndex_t m_nFXDeniableIndex; // 0xae4        
        // metadata: MNetworkEnable
        int32_t m_iMoveSpeed; // 0xae8        
        int32_t m_iBaseAttackSpeed; // 0xaec        
        // metadata: MNetworkEnable
        float m_flBaseAttackTime; // 0xaf0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUnitNameIndexChanged"
        int32_t m_iUnitNameIndex; // 0xaf4        
        int32_t m_iHealthBarOffset; // 0xaf8        
        Color m_iHealthBarHighlightColor; // 0xafc        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "20"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "65536,000000"
        float m_flMana; // 0xb00        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "20"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "65536,000000"
        float m_flMaxMana; // 0xb04        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "14"
        // metadata: MNetworkMinValue "-50,000000"
        // metadata: MNetworkMaxValue "500,000000"
        float m_flManaThinkRegen; // 0xb08        
        // metadata: MNetworkEnable
        int32_t m_iBKBChargesUsed; // 0xb0c        
        // metadata: MNetworkEnable
        int32_t m_iAeonChargesUsed; // 0xb10        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRefresherUseTime; // 0xb14        
        // metadata: MNetworkEnable
        float m_flRefresherLastCooldown; // 0xb18        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastDealtDamageTime; // 0xb1c        
        // metadata: MNetworkEnable
        int32_t m_iBotDebugData; // 0xb20        
        // metadata: MNetworkEnable
        bool m_bIsIllusion; // 0xb24        
        bool m_bHasClientSeenIllusionModifier; // 0xb25        
        [[maybe_unused]] std::uint8_t pad_0xb26[0x2]; // 0xb26
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnAbilitiesChanged"
        // metadata: MNetworkPriority "32"
        // m_hAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAbilities[40];
        char m_hAbilities[0xa0]; // 0xb28        
        float m_flInvisibilityLevel; // 0xbc8        
        float m_flHullRadius; // 0xbcc        
        float m_flCollisionPadding; // 0xbd0        
        float m_flRingRadius; // 0xbd4        
        float m_flProjectileCollisionSize; // 0xbd8        
        [[maybe_unused]] std::uint8_t pad_0xbdc[0x4]; // 0xbdc
        CUtlSymbolLarge m_iszUnitName; // 0xbe0        
        CUtlSymbolLarge m_iszUnitNameIconOverride; // 0xbe8        
        CUtlSymbolLarge m_iszParticleFolder; // 0xbf0        
        CUtlSymbolLarge m_iszSoundSet; // 0xbf8        
        CUtlSymbolLarge m_iszSelectionGroup; // 0xc00        
        CUtlSymbolLarge m_iszVoiceFile; // 0xc08        
        CUtlSymbolLarge m_iszGameSoundsFile; // 0xc10        
        CUtlSymbolLarge m_iszVoiceBackgroundSound; // 0xc18        
        CUtlSymbolLarge m_iszIdleSoundLoop; // 0xc20        
        // metadata: MNetworkEnable
        CUtlString m_szUnitLabel; // 0xc28        
        // metadata: MNetworkEnable
        CUtlString m_szScaleset; // 0xc30        
        // metadata: MNetworkEnable
        uint8_t m_nUnitLabelIndex; // 0xc38        
        [[maybe_unused]] std::uint8_t pad_0xc39[0x7]; // 0xc39
        CUtlString m_strAnimationModifier; // 0xc40        
        CUtlString m_TerrainSpecificFootstepEffect; // 0xc48        
        bool m_bUseCustomTerrainWeatherEffect; // 0xc50        
        bool m_bHasClientSoundReplacement; // 0xc51        
        bool m_bHasClientReplacementParticle; // 0xc52        
        [[maybe_unused]] std::uint8_t pad_0xc53[0x9]; // 0xc53
        bool m_bResourcesLoaded; // 0xc5c        
        [[maybe_unused]] std::uint8_t pad_0xc5d[0x3]; // 0xc5d
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTauntCooldown; // 0xc60        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTauntCooldown2; // 0xc64        
        // metadata: MNetworkEnable
        client::DOTA_SHOP_TYPE m_iCurShop; // 0xc68        
        [[maybe_unused]] std::uint8_t pad_0xc6c[0x4]; // 0xc6c
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szCurShopEntName; // 0xc70        
        // metadata: MNetworkEnable
        int32_t m_iDayTimeVisionRange; // 0xc78        
        // metadata: MNetworkEnable
        int32_t m_iNightTimeVisionRange; // 0xc7c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDamageMinChanged"
        int32_t m_iDamageMin; // 0xc80        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDamageMaxChanged"
        int32_t m_iDamageMax; // 0xc84        
        // metadata: MNetworkEnable
        int32_t m_iDamageBonus; // 0xc88        
        // metadata: MNetworkEnable
        int32_t m_iBaseDamageMin; // 0xc8c        
        // metadata: MNetworkEnable
        int32_t m_iBaseDamageMax; // 0xc90        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iTaggedAsVisibleByTeam; // 0xc94        
        // metadata: MNetworkEnable
        client::CDOTA_ModifierManager m_ModifierManager; // 0xc98        
        // metadata: MNetworkEnable
        client::C_DOTA_UnitInventory m_Inventory; // 0xfb8        
        [[maybe_unused]] std::uint8_t pad_0x1088[0x10]; // 0x1088
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUnitStateChanged"
        // metadata: MNetworkPriority "32"
        uint64_t m_nUnitState64; // 0x1098        
        [[maybe_unused]] std::uint8_t pad_0x10a0[0x8]; // 0x10a0
        uint64_t m_nUnitDebuffState; // 0x10a8        
        bool m_bHasInventory; // 0x10b0        
        [[maybe_unused]] std::uint8_t pad_0x10b1[0x3]; // 0x10b1
        int32_t m_iAcquisitionRange; // 0x10b4        
        int32_t m_FoWViewID; // 0x10b8        
        int32_t m_iPrevHealthPct; // 0x10bc        
        int32_t m_iPrevLifeState; // 0x10c0        
        int32_t m_iPrevTeam; // 0x10c4        
        bool m_bPrevProvidesVision; // 0x10c8        
        [[maybe_unused]] std::uint8_t pad_0x10c9[0x7]; // 0x10c9
        uint64_t m_nPrevControllableMask; // 0x10d0        
        [[maybe_unused]] std::uint8_t pad_0x10d8[0x8]; // 0x10d8
        client::CountdownTimer m_TagTime; // 0x10e0        
        client::CountdownTimer m_ClickedTime; // 0x10f8        
        entity2::GameTime_t m_flIdleRunPoseStartTime[2]; // 0x1110        
        float m_flIdleRunPoseDuration[2]; // 0x1118        
        bool m_bAnimationTransitionActive; // 0x1120        
        [[maybe_unused]] std::uint8_t pad_0x1121[0x3]; // 0x1121
        int32_t m_nAnimationTransitionPoseParameters[2]; // 0x1124        
        int32_t m_nAnimationTransitionInjuredPoseParameters[2]; // 0x112c        
        int32_t m_nAnimationTransitionAggressivePoseParameters[2]; // 0x1134        
        [[maybe_unused]] std::uint8_t pad_0x113c[0x5c]; // 0x113c
        entity2::GameTime_t m_flTimeSinceLastAbilityNag; // 0x1198        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iAttackCapabilities; // 0x119c        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iSpecialAbility; // 0x11a0        
        int32_t m_iMoveCapabilities; // 0x11a4        
        // metadata: MNetworkEnable
        client::PlayerID_t m_nPlayerOwnerID; // 0x11a8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastDamageTime; // 0x11ac        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastAttackTime; // 0x11b0        
        [[maybe_unused]] std::uint8_t pad_0x11b4[0x4]; // 0x11b4
        CUtlSymbolLarge m_iszMinimapIcon; // 0x11b8        
        [[maybe_unused]] std::uint8_t pad_0x11c0[0x8]; // 0x11c0
        float m_flMinimapIconSize; // 0x11c8        
        bool m_bMinimapDisableTint; // 0x11cc        
        bool m_bMinimapDisableRotation; // 0x11cd        
        Color m_colorHeroGlow; // 0x11ce        
        [[maybe_unused]] std::uint8_t pad_0x11d2[0x2]; // 0x11d2
        int32_t m_iNearShopMask; // 0x11d4        
        int32_t m_nPoseParameterTurn; // 0x11d8        
        int32_t m_nPoseParameterRun; // 0x11dc        
        float m_flLean; // 0x11e0        
        float m_flRun; // 0x11e4        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_anglediff; // 0x11e8        
        bool m_bInfoKeyActive; // 0x11ec        
        bool m_bNewUpdateAssetModifiersNetworked; // 0x11ed        
        [[maybe_unused]] std::uint8_t pad_0x11ee[0x2]; // 0x11ee
        entity2::GameTick_t m_nAssetModifiersLastUpdatedTick; // 0x11f0        
        bool m_bSuppressGlow; // 0x11f4        
        bool m_bWasSinking; // 0x11f5        
        [[maybe_unused]] std::uint8_t pad_0x11f6[0x2]; // 0x11f6
        float m_flRangeDisplayDist; // 0x11f8        
        [[maybe_unused]] std::uint8_t pad_0x11fc[0x1e4]; // 0x11fc
        CUtlSymbolLarge m_szDefaultIdle; // 0x13e0        
        CUtlSymbolLarge m_szDefaultRareIdle; // 0x13e8        
        client::CountdownTimer m_damagetimer; // 0x13f0        
        Vector m_vRenderOrigin; // 0x1408        
        float m_fZDelta; // 0x1414        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flDeathTime; // 0x1418        
        bool m_bBaseStatsChanged; // 0x141c        
        bool m_bNeedsSoundEmitterRefresh; // 0x141d        
        [[maybe_unused]] std::uint8_t pad_0x141e[0x2]; // 0x141e
        // metadata: MNetworkEnable
        float m_flPhysicalArmorValue; // 0x1420        
        // metadata: MNetworkEnable
        float m_flMagicalResistanceValue; // 0x1424        
        int32_t m_nPrevSequenceParity; // 0x1428        
        [[maybe_unused]] std::uint8_t pad_0x142c[0xa4]; // 0x142c
        float m_flPrevInvisLevel; // 0x14d0        
        [[maybe_unused]] std::uint8_t pad_0x14d4[0x4]; // 0x14d4
        // m_nOriginalModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_nOriginalModelIndex;
        char m_nOriginalModelIndex[0x8]; // 0x14d8        
        // m_nClientOriginalModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_nClientOriginalModelIndex;
        char m_nClientOriginalModelIndex[0x8]; // 0x14e0        
        // m_nClientReplacementModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_nClientReplacementModelIndex;
        char m_nClientReplacementModelIndex[0x8]; // 0x14e8        
        bool m_bClientReplacementModelNeedsRebuild; // 0x14f0        
        [[maybe_unused]] std::uint8_t pad_0x14f1[0x3]; // 0x14f1
        int32_t m_nClientReplacementModelReloadCount; // 0x14f4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUnitModelVariantChanged"
        int8_t m_nUnitModelVariant; // 0x14f8        
        int8_t m_nUnitModelVariantCount; // 0x14f9        
        [[maybe_unused]] std::uint8_t pad_0x14fa[0x2]; // 0x14fa
        int32_t m_iPrevSequence; // 0x14fc        
        char* m_pLastWeatherEffectName; // 0x1500        
        [[maybe_unused]] std::uint8_t pad_0x1508[0x8]; // 0x1508
        client::CountdownTimer m_VoiceBackgroundSoundTimer; // 0x1510        
        // metadata: MNetworkEnable
        bool m_bIsWaitingToSpawn; // 0x1528        
        [[maybe_unused]] std::uint8_t pad_0x1529[0x7]; // 0x1529
        // metadata: MNetworkEnable
        int64_t m_nTotalDamageTaken; // 0x1530        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "18"
        // metadata: MNetworkMinValue "-100,000000"
        // metadata: MNetworkMaxValue "1000,000000"
        // metadata: MNetworkChangeCallback "OnManaRegenChanged"
        float m_flManaRegen; // 0x1538        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "18"
        // metadata: MNetworkMinValue "-100,000000"
        // metadata: MNetworkMaxValue "1000,000000"
        // metadata: MNetworkChangeCallback "OnHealthRegenChanged"
        float m_flHealthRegen; // 0x153c        
        // metadata: MNetworkEnable
        bool m_bIsMoving; // 0x1540        
        [[maybe_unused]] std::uint8_t pad_0x1541[0x3]; // 0x1541
        // metadata: MNetworkEnable
        float m_fRevealRadius; // 0x1544        
        // metadata: MNetworkEnable
        bool m_bCanUseWards; // 0x1548        
        // metadata: MNetworkEnable
        bool m_bCanUseAllItems; // 0x1549        
        [[maybe_unused]] std::uint8_t pad_0x154a[0x2]; // 0x154a
        // metadata: MNetworkEnable
        int32_t m_iXPBounty; // 0x154c        
        // metadata: MNetworkEnable
        int32_t m_iXPBountyExtra; // 0x1550        
        // metadata: MNetworkEnable
        int32_t m_iGoldBountyMin; // 0x1554        
        // metadata: MNetworkEnable
        int32_t m_iGoldBountyMax; // 0x1558        
        // metadata: MNetworkEnable
        // m_hOwnerNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOwnerNPC;
        char m_hOwnerNPC[0x4]; // 0x155c        
        // metadata: MNetworkEnable
        // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hGoalEntity;
        char m_hGoalEntity[0x4]; // 0x1560        
        // metadata: MNetworkEnable
        // m_hNeutralSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTA_NeutralSpawner> m_hNeutralSpawner;
        char m_hNeutralSpawner[0x4]; // 0x1564        
        // m_hClientOverrideMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hClientOverrideMaterial;
        char m_hClientOverrideMaterial[0x8]; // 0x1568        
        bool m_bCombinerMaterialOverrideListChanged; // 0x1570        
        [[maybe_unused]] std::uint8_t pad_0x1571[0x3]; // 0x1571
        int32_t m_nBaseModelMeshCount; // 0x1574        
        // m_combinerMaterialOverrideList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CStrongHandleCopyable<resourcesystem::InfoForResourceTypeIMaterial2>> m_combinerMaterialOverrideList;
        char m_combinerMaterialOverrideList[0x18]; // 0x1578        
        int8_t m_nArcanaLevel; // 0x1590        
        int8_t m_nDefaultArcanaLevel; // 0x1591        
        Color m_defaultColorGemColor; // 0x1592        
        [[maybe_unused]] std::uint8_t pad_0x1596[0x1a]; // 0x1596
        bool m_bHasBuiltWearableSpawnList; // 0x15b0        
        bool m_bHasCostume; // 0x15b1        
        bool m_bRecreateParticleSystemsOnModifiersChange; // 0x15b2        
        [[maybe_unused]] std::uint8_t pad_0x15b3[0x19]; // 0x15b3
        float m_flAdditionalSinkDelay; // 0x15cc        
        [[maybe_unused]] std::uint8_t pad_0x15d0[0xe0]; // 0x15d0
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_NetworkActivity; // 0x16b0        
        int32_t m_PrevNetworkActivity; // 0x16b4        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_NetworkSequenceIndex; // 0x16b8        
        // metadata: MNetworkEnable
        bool m_bShouldDoFlyHeightVisual; // 0x16bc        
        [[maybe_unused]] std::uint8_t pad_0x16bd[0x3]; // 0x16bd
        // metadata: MNetworkEnable
        float m_flStartSequenceCycle; // 0x16c0        
        [[maybe_unused]] std::uint8_t pad_0x16c4[0x4]; // 0x16c4
        // m_ActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlSymbol> m_ActivityModifiers;
        char m_ActivityModifiers[0x18]; // 0x16c8        
        // m_hBackgroundSceneEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_SceneEntity> m_hBackgroundSceneEnt;
        char m_hBackgroundSceneEnt[0x4]; // 0x16e0        
        // m_hSpeakingSceneEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_SceneEntity> m_hSpeakingSceneEnt;
        char m_hSpeakingSceneEnt[0x4]; // 0x16e4        
        [[maybe_unused]] std::uint8_t pad_0x16e8[0x10]; // 0x16e8
        // m_hOldWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_EconWearable>> m_hOldWearables;
        char m_hOldWearables[0x18]; // 0x16f8        
        // m_hOldWearableSkins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlStringToken> m_hOldWearableSkins;
        char m_hOldWearableSkins[0x18]; // 0x1710        
        // metadata: MNetworkEnable
        char m_CustomHealthLabel[256]; // 0x1728        
        // metadata: MNetworkEnable
        Color m_CustomHealthLabelColor; // 0x1828        
        client::item_definition_index_t m_nWearableDefIndex; // 0x182c        
        [[maybe_unused]] std::uint8_t pad_0x1830[0x1]; // 0x1830
        Color m_gibTintColor; // 0x1831        
        bool m_bForceMaterialCombine; // 0x1835        
        bool m_bShouldDrawParticlesWhileHidden; // 0x1836        
        bool m_bIsClientThinkPending; // 0x1837        
        bool m_bActivityModifiersDirty; // 0x1838        
        bool m_bUnitModelVariantChanged; // 0x1839        
        bool m_bWearablesAreTaunting; // 0x183a        
        bool m_bWearablesLoadoutOverride; // 0x183b        
        [[maybe_unused]] std::uint8_t pad_0x183c[0x14]; // 0x183c
        bool m_bShowCannotBeDisabledIcon; // 0x1850        
        [[maybe_unused]] std::uint8_t pad_0x1851[0x1f];
        
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
    static_assert(sizeof(C_DOTA_BaseNPC) == 0x1870);
};
