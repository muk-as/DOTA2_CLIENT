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
        // Size: 0x1a00
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
        // static metadata: MNetworkVarNames "uint32 m_iUnitType"
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
            uint8_t _pad0c48[0x8]; // 0xc48
            // metadata: MNetworkEnable
            bool m_bIsPhantom; // 0xc50            
            uint8_t _pad0c51[0x3]; // 0xc51
            // metadata: MNetworkEnable
            std::uint32_t m_iUnitType; // 0xc54            
            uint8_t _pad0c58[0x10]; // 0xc58
            // metadata: MNetworkEnable
            bool m_bSelectionRingVisible; // 0xc68            
            uint8_t _pad0c69[0x3]; // 0xc69
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentLevel; // 0xc6c            
            // metadata: MNetworkEnable
            bool m_bIsAncient; // 0xc70            
            // metadata: MNetworkEnable
            bool m_bIsBossCreature; // 0xc71            
            // metadata: MNetworkEnable
            bool m_bStolenScepter; // 0xc72            
            // metadata: MNetworkEnable
            bool m_bIsNeutralUnitType; // 0xc73            
            bool m_bSelectOnSpawn; // 0xc74            
            bool m_bCachedReplicatedMorphlingIllusion; // 0xc75            
            bool m_bIgnoreAddSummonedToSelection; // 0xc76            
            bool m_bConsideredHero; // 0xc77            
            bool m_bUsesConstantGesture; // 0xc78            
            bool m_bUseHeroAbilityNumbers; // 0xc79            
            bool m_bHasSharedAbilities; // 0xc7a            
            // metadata: MNetworkEnable
            bool m_bIsSummoned; // 0xc7b            
            // metadata: MNetworkEnable
            bool m_bCanBeDominated; // 0xc7c            
            // metadata: MNetworkEnable
            bool m_bHasUpgradeableAbilities; // 0xc7d            
            uint8_t _pad0c7e[0x2]; // 0xc7e
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            float m_flHealthThinkRegen; // 0xc80            
            uint8_t _pad0c84[0x4]; // 0xc84
            // metadata: MNetworkEnable
            std::uint64_t m_iIsControllableByPlayer64; // 0xc88            
            // metadata: MNetworkEnable
            std::int32_t m_nHealthBarOffsetOverride; // 0xc90            
            // metadata: MNetworkEnable
            bool m_bCanRespawn; // 0xc94            
            uint8_t _pad0c95[0x3]; // 0xc95
            // metadata: MNetworkEnable
            std::int32_t m_iAttackRange; // 0xc98            
            // metadata: MNetworkEnable
            bool m_bIsClone; // 0xc9c            
            Color m_colorGemColor; // 0xc9d            
            bool m_bHasColorGem; // 0xca1            
            uint8_t _pad0ca2[0x2]; // 0xca2
            source2sdk::client::ParticleIndex_t m_nFXDeniableIndex; // 0xca4            
            // metadata: MNetworkEnable
            std::int32_t m_iMoveSpeed; // 0xca8            
            std::int32_t m_iBaseAttackSpeed; // 0xcac            
            // metadata: MNetworkEnable
            float m_flBaseAttackTime; // 0xcb0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUnitNameIndexChanged"
            std::int32_t m_iUnitNameIndex; // 0xcb4            
            std::int32_t m_iHealthBarOffset; // 0xcb8            
            Color m_iHealthBarHighlightColor; // 0xcbc            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "65536,000000"
            float m_flMana; // 0xcc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "65536,000000"
            float m_flMaxMana; // 0xcc4            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "14"
            // metadata: MNetworkMinValue "-50,000000"
            // metadata: MNetworkMaxValue "500,000000"
            float m_flManaThinkRegen; // 0xcc8            
            // metadata: MNetworkEnable
            std::int32_t m_iBKBChargesUsed; // 0xccc            
            // metadata: MNetworkEnable
            std::int32_t m_iAeonChargesUsed; // 0xcd0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRefresherUseTime; // 0xcd4            
            // metadata: MNetworkEnable
            float m_flRefresherLastCooldown; // 0xcd8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDealtDamageTime; // 0xcdc            
            // metadata: MNetworkEnable
            std::int32_t m_iBotDebugData; // 0xce0            
            // metadata: MNetworkEnable
            bool m_bIsIllusion; // 0xce4            
            bool m_bHasClientSeenIllusionModifier; // 0xce5            
            uint8_t _pad0ce6[0x2]; // 0xce6
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilitiesChanged"
            // metadata: MNetworkPriority "32"
            // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_vecAbilities;
            char m_vecAbilities[0x18]; // 0xce8            
            float m_flInvisibilityLevel; // 0xd00            
            float m_flHullRadius; // 0xd04            
            float m_flCollisionPadding; // 0xd08            
            float m_flRingRadius; // 0xd0c            
            float m_flProjectileCollisionSize; // 0xd10            
            uint8_t _pad0d14[0x4]; // 0xd14
            CUtlSymbolLarge m_iszUnitName; // 0xd18            
            CUtlSymbolLarge m_iszUnitNameIconOverride; // 0xd20            
            CUtlSymbolLarge m_iszParticleFolder; // 0xd28            
            CUtlSymbolLarge m_iszSoundSet; // 0xd30            
            CUtlSymbolLarge m_iszSelectionGroup; // 0xd38            
            CUtlSymbolLarge m_iszVoiceFile; // 0xd40            
            CUtlSymbolLarge m_iszGameSoundsFile; // 0xd48            
            CUtlSymbolLarge m_iszVoiceBackgroundSound; // 0xd50            
            CUtlSymbolLarge m_iszIdleSoundLoop; // 0xd58            
            // metadata: MNetworkEnable
            CUtlString m_szUnitLabel; // 0xd60            
            // metadata: MNetworkEnable
            CUtlString m_szScaleset; // 0xd68            
            // metadata: MNetworkEnable
            std::uint8_t m_nUnitLabelIndex; // 0xd70            
            uint8_t _pad0d71[0x7]; // 0xd71
            CUtlString m_strAnimationModifier; // 0xd78            
            CUtlString m_TerrainSpecificFootstepEffect; // 0xd80            
            bool m_bUseCustomTerrainWeatherEffect; // 0xd88            
            bool m_bHasClientSoundReplacement; // 0xd89            
            bool m_bHasClientReplacementParticle; // 0xd8a            
            uint8_t _pad0d8b[0x15]; // 0xd8b
            bool m_bResourcesLoaded; // 0xda0            
            uint8_t _pad0da1[0x3]; // 0xda1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTauntCooldown; // 0xda4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTauntCooldown2; // 0xda8            
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_SHOP_TYPE m_iCurShop; // 0xdac            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szCurShopEntName; // 0xdb0            
            // metadata: MNetworkEnable
            std::int32_t m_iDayTimeVisionRange; // 0xdb8            
            // metadata: MNetworkEnable
            std::int32_t m_iNightTimeVisionRange; // 0xdbc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDamageMinChanged"
            std::int32_t m_iDamageMin; // 0xdc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDamageMaxChanged"
            std::int32_t m_iDamageMax; // 0xdc4            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageBonus; // 0xdc8            
            // metadata: MNetworkEnable
            std::int32_t m_iBaseDamageMin; // 0xdcc            
            // metadata: MNetworkEnable
            std::int32_t m_iBaseDamageMax; // 0xdd0            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iTaggedAsVisibleByTeam; // 0xdd4            
            // metadata: MNetworkEnable
            source2sdk::client::CDOTA_ModifierManager m_ModifierManager; // 0xdd8            
            // metadata: MNetworkEnable
            source2sdk::client::C_DOTA_UnitInventory m_Inventory; // 0x1128            
            uint8_t _pad1218[0x10]; // 0x1218
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUnitStateChanged"
            // metadata: MNetworkPriority "32"
            std::uint64_t m_nUnitState64; // 0x1228            
            uint8_t _pad1230[0x8]; // 0x1230
            std::uint64_t m_nUnitDebuffState; // 0x1238            
            bool m_bHasInventory; // 0x1240            
            uint8_t _pad1241[0x3]; // 0x1241
            std::int32_t m_iAcquisitionRange; // 0x1244            
            std::int32_t m_FoWViewID; // 0x1248            
            std::int32_t m_iTeamViewerID; // 0x124c            
            std::int32_t m_iPrevHealthPct; // 0x1250            
            std::int32_t m_iPrevLifeState; // 0x1254            
            std::int32_t m_iPrevTeam; // 0x1258            
            bool m_bLastShardState; // 0x125c            
            bool m_bLastScepterState; // 0x125d            
            bool m_bPrevProvidesVision; // 0x125e            
            uint8_t _pad125f[0x1]; // 0x125f
            std::uint64_t m_nPrevControllableMask; // 0x1260            
            uint8_t _pad1268[0x8]; // 0x1268
            source2sdk::client::CountdownTimer m_TagTime; // 0x1270            
            source2sdk::client::CountdownTimer m_ClickedTime; // 0x1288            
            source2sdk::entity2::GameTime_t m_flIdleRunPoseStartTime[2]; // 0x12a0            
            float m_flIdleRunPoseDuration[2]; // 0x12a8            
            bool m_bAnimationTransitionActive; // 0x12b0            
            uint8_t _pad12b1[0x3]; // 0x12b1
            std::int32_t m_nAnimationTransitionPoseParameters[2]; // 0x12b4            
            std::int32_t m_nAnimationTransitionInjuredPoseParameters[2]; // 0x12bc            
            std::int32_t m_nAnimationTransitionAggressivePoseParameters[2]; // 0x12c4            
            uint8_t _pad12cc[0x5c]; // 0x12cc
            source2sdk::entity2::GameTime_t m_flTimeSinceLastAbilityNag; // 0x1328            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iAttackCapabilities; // 0x132c            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iSpecialAbility; // 0x1330            
            std::int32_t m_iMoveCapabilities; // 0x1334            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nPlayerOwnerID; // 0x1338            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x133c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0x1340            
            uint8_t _pad1344[0x4]; // 0x1344
            CUtlSymbolLarge m_iszMinimapIcon; // 0x1348            
            uint8_t _pad1350[0x8]; // 0x1350
            float m_flMinimapIconSize; // 0x1358            
            bool m_bMinimapDisableTint; // 0x135c            
            bool m_bMinimapDisableRotation; // 0x135d            
            Color m_colorHeroGlow; // 0x135e            
            uint8_t _pad1362[0x2]; // 0x1362
            std::int32_t m_iNearShopMask; // 0x1364            
            std::int32_t m_nPoseParameterTurn; // 0x1368            
            std::int32_t m_nPoseParameterRun; // 0x136c            
            float m_flLean; // 0x1370            
            float m_flRun; // 0x1374            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_anglediff; // 0x1378            
            bool m_bInfoKeyActive; // 0x137c            
            bool m_bNewUpdateAssetModifiersNetworked; // 0x137d            
            uint8_t _pad137e[0x2]; // 0x137e
            source2sdk::entity2::GameTick_t m_nAssetModifiersLastUpdatedTick; // 0x1380            
            bool m_bSuppressGlow; // 0x1384            
            bool m_bWasSinking; // 0x1385            
            uint8_t _pad1386[0x2]; // 0x1386
            float m_flRangeDisplayDist; // 0x1388            
            uint8_t _pad138c[0x1e4]; // 0x138c
            CUtlSymbolLarge m_szDefaultIdle; // 0x1570            
            CUtlSymbolLarge m_szDefaultRareIdle; // 0x1578            
            source2sdk::client::CountdownTimer m_damagetimer; // 0x1580            
            Vector m_vRenderOrigin; // 0x1598            
            float m_fZDelta; // 0x15a4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0x15a8            
            bool m_bBaseStatsChanged; // 0x15ac            
            bool m_bNeedsSoundEmitterRefresh; // 0x15ad            
            uint8_t _pad15ae[0x2]; // 0x15ae
            // metadata: MNetworkEnable
            float m_flPhysicalArmorValue; // 0x15b0            
            // metadata: MNetworkEnable
            float m_flMagicalResistanceValue; // 0x15b4            
            std::int32_t m_nPrevSequenceParity; // 0x15b8            
            uint8_t _pad15bc[0xa4]; // 0x15bc
            float m_flPrevInvisLevel; // 0x1660            
            uint8_t _pad1664[0x4]; // 0x1664
            // m_nOriginalModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nOriginalModelIndex;
            char m_nOriginalModelIndex[0x8]; // 0x1668            
            // m_nClientOriginalModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nClientOriginalModelIndex;
            char m_nClientOriginalModelIndex[0x8]; // 0x1670            
            // m_nClientReplacementModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nClientReplacementModelIndex;
            char m_nClientReplacementModelIndex[0x8]; // 0x1678            
            bool m_bClientReplacementModelNeedsRebuild; // 0x1680            
            uint8_t _pad1681[0x3]; // 0x1681
            std::int32_t m_nClientReplacementModelReloadCount; // 0x1684            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUnitModelVariantChanged"
            std::int8_t m_nUnitModelVariant; // 0x1688            
            std::int8_t m_nUnitModelVariantCount; // 0x1689            
            uint8_t _pad168a[0x2]; // 0x168a
            std::int32_t m_iPrevSequence; // 0x168c            
            char* m_pLastWeatherEffectName; // 0x1690            
            uint8_t _pad1698[0x8]; // 0x1698
            source2sdk::client::CountdownTimer m_VoiceBackgroundSoundTimer; // 0x16a0            
            // metadata: MNetworkEnable
            bool m_bIsWaitingToSpawn; // 0x16b8            
            uint8_t _pad16b9[0x7]; // 0x16b9
            // metadata: MNetworkEnable
            std::int64_t m_nTotalDamageTaken; // 0x16c0            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            // metadata: MNetworkChangeCallback "OnManaRegenChanged"
            float m_flManaRegen; // 0x16c8            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            // metadata: MNetworkChangeCallback "OnHealthRegenChanged"
            float m_flHealthRegen; // 0x16cc            
            // metadata: MNetworkEnable
            bool m_bIsMoving; // 0x16d0            
            uint8_t _pad16d1[0x3]; // 0x16d1
            // metadata: MNetworkEnable
            float m_fRevealRadius; // 0x16d4            
            // metadata: MNetworkEnable
            bool m_bCanUseWards; // 0x16d8            
            // metadata: MNetworkEnable
            bool m_bCanUseAllItems; // 0x16d9            
            uint8_t _pad16da[0x2]; // 0x16da
            // metadata: MNetworkEnable
            std::int32_t m_iXPBounty; // 0x16dc            
            // metadata: MNetworkEnable
            std::int32_t m_iXPBountyExtra; // 0x16e0            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldBountyMin; // 0x16e4            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldBountyMax; // 0x16e8            
            // metadata: MNetworkEnable
            // m_hOwnerNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwnerNPC;
            char m_hOwnerNPC[0x4]; // 0x16ec            
            // metadata: MNetworkEnable
            // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hGoalEntity;
            char m_hGoalEntity[0x4]; // 0x16f0            
            // metadata: MNetworkEnable
            // m_hNeutralSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_NeutralSpawner> m_hNeutralSpawner;
            char m_hNeutralSpawner[0x4]; // 0x16f4            
            // m_hClientOverrideMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hClientOverrideMaterial;
            char m_hClientOverrideMaterial[0x8]; // 0x16f8            
            bool m_bCombinerMaterialOverrideListChanged; // 0x1700            
            uint8_t _pad1701[0x3]; // 0x1701
            std::int32_t m_nBaseModelMeshCount; // 0x1704            
            // m_combinerMaterialOverrideList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandleCopyable<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2>> m_combinerMaterialOverrideList;
            char m_combinerMaterialOverrideList[0x18]; // 0x1708            
            std::int8_t m_nArcanaLevel; // 0x1720            
            std::int8_t m_nDefaultArcanaLevel; // 0x1721            
            Color m_defaultColorGemColor; // 0x1722            
            uint8_t _pad1726[0x1a]; // 0x1726
            bool m_bHasBuiltWearableSpawnList; // 0x1740            
            bool m_bHasCostume; // 0x1741            
            bool m_bRecreateParticleSystemsOnModifiersChange; // 0x1742            
            bool m_bWasRevealedFromFOWAsDead; // 0x1743            
            uint8_t _pad1744[0x18]; // 0x1744
            float m_flAdditionalSinkDelay; // 0x175c            
            uint8_t _pad1760[0xe0]; // 0x1760
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_NetworkActivity; // 0x1840            
            std::int32_t m_PrevNetworkActivity; // 0x1844            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_NetworkSequenceIndex; // 0x1848            
            // metadata: MNetworkEnable
            bool m_bShouldDoFlyHeightVisual; // 0x184c            
            uint8_t _pad184d[0x3]; // 0x184d
            // metadata: MNetworkEnable
            float m_flStartSequenceCycle; // 0x1850            
            uint8_t _pad1854[0x4]; // 0x1854
            // m_ActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_ActivityModifiers;
            char m_ActivityModifiers[0x18]; // 0x1858            
            // m_hBackgroundSceneEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_SceneEntity> m_hBackgroundSceneEnt;
            char m_hBackgroundSceneEnt[0x4]; // 0x1870            
            // m_hSpeakingSceneEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_SceneEntity> m_hSpeakingSceneEnt;
            char m_hSpeakingSceneEnt[0x4]; // 0x1874            
            uint8_t _pad1878[0x10]; // 0x1878
            // m_hOldWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_EconWearable>> m_hOldWearables;
            char m_hOldWearables[0x18]; // 0x1888            
            // m_hOldWearableSkins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlStringToken> m_hOldWearableSkins;
            char m_hOldWearableSkins[0x18]; // 0x18a0            
            // metadata: MNetworkEnable
            char m_CustomHealthLabel[256]; // 0x18b8            
            // metadata: MNetworkEnable
            Color m_CustomHealthLabelColor; // 0x19b8            
            source2sdk::client::item_definition_index_t m_nWearableDefIndex; // 0x19bc            
            uint8_t _pad19c0[0x1]; // 0x19c0
            Color m_gibTintColor; // 0x19c1            
            bool m_bForceMaterialCombine; // 0x19c5            
            bool m_bShouldDrawParticlesWhileHidden; // 0x19c6            
            bool m_bIsClientThinkPending; // 0x19c7            
            bool m_bActivityModifiersDirty; // 0x19c8            
            bool m_bUnitModelVariantChanged; // 0x19c9            
            bool m_bWearablesAreTaunting; // 0x19ca            
            bool m_bWearablesLoadoutOverride; // 0x19cb            
            uint8_t _pad19cc[0x14]; // 0x19cc
            bool m_bShowCannotBeDisabledIcon; // 0x19e0            
            uint8_t _pad19e1[0x1f];
            
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
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC) == 0x1a00);
    };
};
