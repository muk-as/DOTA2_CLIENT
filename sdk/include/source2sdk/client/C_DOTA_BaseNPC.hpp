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
        // Size: 0x1a40
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
        // static metadata: MNetworkReplayCompatField "m_iTaggedAsVisibleByTeam"
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
            uint8_t _pad0c70[0x8]; // 0xc70
            // metadata: MNetworkEnable
            bool m_bIsPhantom; // 0xc78            
            uint8_t _pad0c79[0x3]; // 0xc79
            // metadata: MNetworkEnable
            std::uint32_t m_iUnitType; // 0xc7c            
            uint8_t _pad0c80[0x10]; // 0xc80
            // metadata: MNetworkEnable
            bool m_bSelectionRingVisible; // 0xc90            
            uint8_t _pad0c91[0x3]; // 0xc91
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentLevel; // 0xc94            
            // metadata: MNetworkEnable
            bool m_bIsAncient; // 0xc98            
            // metadata: MNetworkEnable
            bool m_bIsBossCreature; // 0xc99            
            // metadata: MNetworkEnable
            bool m_bStolenScepter; // 0xc9a            
            // metadata: MNetworkEnable
            bool m_bIsNeutralUnitType; // 0xc9b            
            bool m_bSelectOnSpawn; // 0xc9c            
            bool m_bCachedReplicatedMorphlingIllusion; // 0xc9d            
            bool m_bIgnoreAddSummonedToSelection; // 0xc9e            
            bool m_bConsideredHero; // 0xc9f            
            bool m_bUsesConstantGesture; // 0xca0            
            bool m_bUseHeroAbilityNumbers; // 0xca1            
            bool m_bHasSharedAbilities; // 0xca2            
            // metadata: MNetworkEnable
            bool m_bIsSummoned; // 0xca3            
            // metadata: MNetworkEnable
            bool m_bCanBeDominated; // 0xca4            
            // metadata: MNetworkEnable
            bool m_bHasUpgradeableAbilities; // 0xca5            
            uint8_t _pad0ca6[0x2]; // 0xca6
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            float m_flHealthThinkRegen; // 0xca8            
            uint8_t _pad0cac[0x4]; // 0xcac
            // metadata: MNetworkEnable
            std::uint64_t m_iIsControllableByPlayer64; // 0xcb0            
            // metadata: MNetworkEnable
            std::int32_t m_nHealthBarOffsetOverride; // 0xcb8            
            // metadata: MNetworkEnable
            bool m_bCanRespawn; // 0xcbc            
            uint8_t _pad0cbd[0x3]; // 0xcbd
            // metadata: MNetworkEnable
            std::int32_t m_iAttackRange; // 0xcc0            
            // metadata: MNetworkEnable
            bool m_bIsClone; // 0xcc4            
            Color m_colorGemColor; // 0xcc5            
            bool m_bHasColorGem; // 0xcc9            
            uint8_t _pad0cca[0x2]; // 0xcca
            source2sdk::client::ParticleIndex_t m_nFXDeniableIndex; // 0xccc            
            // metadata: MNetworkEnable
            std::int32_t m_iMoveSpeed; // 0xcd0            
            std::int32_t m_iBaseAttackSpeed; // 0xcd4            
            // metadata: MNetworkEnable
            float m_flBaseAttackTime; // 0xcd8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUnitNameIndexChanged"
            std::int32_t m_iUnitNameIndex; // 0xcdc            
            std::int32_t m_iHealthBarOffset; // 0xce0            
            Color m_iHealthBarHighlightColor; // 0xce4            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "65536,000000"
            float m_flMana; // 0xce8            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "65536,000000"
            float m_flMaxMana; // 0xcec            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "14"
            // metadata: MNetworkMinValue "-50,000000"
            // metadata: MNetworkMaxValue "500,000000"
            float m_flManaThinkRegen; // 0xcf0            
            // metadata: MNetworkEnable
            std::int32_t m_iBKBChargesUsed; // 0xcf4            
            // metadata: MNetworkEnable
            std::int32_t m_iAeonChargesUsed; // 0xcf8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRefresherUseTime; // 0xcfc            
            // metadata: MNetworkEnable
            float m_flRefresherLastCooldown; // 0xd00            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDealtDamageTime; // 0xd04            
            // metadata: MNetworkEnable
            std::int32_t m_iBotDebugData; // 0xd08            
            // metadata: MNetworkEnable
            bool m_bIsIllusion; // 0xd0c            
            bool m_bHasClientSeenIllusionModifier; // 0xd0d            
            uint8_t _pad0d0e[0x2]; // 0xd0e
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilitiesChanged"
            // metadata: MNetworkPriority "32"
            // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_vecAbilities;
            char m_vecAbilities[0x18]; // 0xd10            
            float m_flInvisibilityLevel; // 0xd28            
            float m_flHullRadius; // 0xd2c            
            float m_flCollisionPadding; // 0xd30            
            float m_flRingRadius; // 0xd34            
            float m_flProjectileCollisionSize; // 0xd38            
            uint8_t _pad0d3c[0x4]; // 0xd3c
            CUtlSymbolLarge m_iszUnitName; // 0xd40            
            CUtlSymbolLarge m_iszUnitNameIconOverride; // 0xd48            
            CUtlSymbolLarge m_iszParticleFolder; // 0xd50            
            CUtlSymbolLarge m_iszSoundSet; // 0xd58            
            CUtlSymbolLarge m_iszSelectionGroup; // 0xd60            
            CUtlSymbolLarge m_iszVoiceFile; // 0xd68            
            CUtlSymbolLarge m_iszGameSoundsFile; // 0xd70            
            CUtlSymbolLarge m_iszVoiceBackgroundSound; // 0xd78            
            CUtlSymbolLarge m_iszIdleSoundLoop; // 0xd80            
            // metadata: MNetworkEnable
            CUtlString m_szUnitLabel; // 0xd88            
            // metadata: MNetworkEnable
            CUtlString m_szScaleset; // 0xd90            
            // metadata: MNetworkEnable
            std::uint8_t m_nUnitLabelIndex; // 0xd98            
            uint8_t _pad0d99[0x7]; // 0xd99
            CUtlString m_strAnimationModifier; // 0xda0            
            CUtlString m_TerrainSpecificFootstepEffect; // 0xda8            
            bool m_bUseCustomTerrainWeatherEffect; // 0xdb0            
            bool m_bHasClientSoundReplacement; // 0xdb1            
            bool m_bHasClientReplacementParticle; // 0xdb2            
            uint8_t _pad0db3[0x15]; // 0xdb3
            bool m_bResourcesLoaded; // 0xdc8            
            uint8_t _pad0dc9[0x3]; // 0xdc9
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTauntCooldown; // 0xdcc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTauntCooldown2; // 0xdd0            
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_SHOP_TYPE m_iCurShop; // 0xdd4            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szCurShopEntName; // 0xdd8            
            // metadata: MNetworkEnable
            std::int32_t m_iDayTimeVisionRange; // 0xde0            
            // metadata: MNetworkEnable
            std::int32_t m_iNightTimeVisionRange; // 0xde4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDamageMinChanged"
            std::int32_t m_iDamageMin; // 0xde8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDamageMaxChanged"
            std::int32_t m_iDamageMax; // 0xdec            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageBonus; // 0xdf0            
            // metadata: MNetworkEnable
            std::int32_t m_iBaseDamageMin; // 0xdf4            
            // metadata: MNetworkEnable
            std::int32_t m_iBaseDamageMax; // 0xdf8            
            uint8_t _pad0dfc[0x4]; // 0xdfc
            // metadata: MNetworkEnable
            source2sdk::client::CDOTA_ModifierManager m_ModifierManager; // 0xe00            
            // metadata: MNetworkEnable
            source2sdk::client::C_DOTA_UnitInventory m_Inventory; // 0x1150            
            uint8_t _pad1240[0x10]; // 0x1240
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUnitStateChanged"
            // metadata: MNetworkPriority "32"
            std::uint64_t m_nUnitState64; // 0x1250            
            uint8_t _pad1258[0x8]; // 0x1258
            std::uint64_t m_nUnitDebuffState; // 0x1260            
            bool m_bHasInventory; // 0x1268            
            uint8_t _pad1269[0x3]; // 0x1269
            std::int32_t m_iAcquisitionRange; // 0x126c            
            std::int32_t m_FoWViewID; // 0x1270            
            std::int32_t m_iTeamViewerID; // 0x1274            
            std::int32_t m_iPrevHealthPct; // 0x1278            
            std::int32_t m_iPrevLifeState; // 0x127c            
            std::int32_t m_iPrevTeam; // 0x1280            
            bool m_bLastShardState; // 0x1284            
            bool m_bLastScepterState; // 0x1285            
            bool m_bPrevProvidesVision; // 0x1286            
            uint8_t _pad1287[0x1]; // 0x1287
            std::uint64_t m_nPrevControllableMask; // 0x1288            
            uint8_t _pad1290[0x8]; // 0x1290
            source2sdk::client::CountdownTimer m_TagTime; // 0x1298            
            source2sdk::client::CountdownTimer m_ClickedTime; // 0x12b0            
            source2sdk::entity2::GameTime_t m_flIdleRunPoseStartTime[2]; // 0x12c8            
            float m_flIdleRunPoseDuration[2]; // 0x12d0            
            bool m_bAnimationTransitionActive; // 0x12d8            
            uint8_t _pad12d9[0x3]; // 0x12d9
            std::int32_t m_nAnimationTransitionPoseParameters[2]; // 0x12dc            
            std::int32_t m_nAnimationTransitionInjuredPoseParameters[2]; // 0x12e4            
            std::int32_t m_nAnimationTransitionAggressivePoseParameters[2]; // 0x12ec            
            uint8_t _pad12f4[0x4c]; // 0x12f4
            source2sdk::entity2::GameTime_t m_flTimeSinceLastAbilityNag; // 0x1340            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iAttackCapabilities; // 0x1344            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iSpecialAbility; // 0x1348            
            std::int32_t m_iMoveCapabilities; // 0x134c            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nPlayerOwnerID; // 0x1350            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x1354            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0x1358            
            uint8_t _pad135c[0x4]; // 0x135c
            CUtlSymbolLarge m_iszMinimapIcon; // 0x1360            
            uint8_t _pad1368[0x8]; // 0x1368
            float m_flMinimapIconSize; // 0x1370            
            bool m_bMinimapDisableTint; // 0x1374            
            bool m_bMinimapDisableRotation; // 0x1375            
            Color m_colorHeroGlow; // 0x1376            
            uint8_t _pad137a[0x2]; // 0x137a
            std::int32_t m_iNearShopMask; // 0x137c            
            std::int32_t m_nPoseParameterTurn; // 0x1380            
            std::int32_t m_nPoseParameterRun; // 0x1384            
            float m_flLean; // 0x1388            
            float m_flRun; // 0x138c            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_anglediff; // 0x1390            
            bool m_bInfoKeyActive; // 0x1394            
            bool m_bNewUpdateAssetModifiersNetworked; // 0x1395            
            uint8_t _pad1396[0x2]; // 0x1396
            source2sdk::entity2::GameTick_t m_nAssetModifiersLastUpdatedTick; // 0x1398            
            bool m_bSuppressGlow; // 0x139c            
            bool m_bWasSinking; // 0x139d            
            uint8_t _pad139e[0x2]; // 0x139e
            float m_flRangeDisplayDist; // 0x13a0            
            uint8_t _pad13a4[0x1e4]; // 0x13a4
            CUtlSymbolLarge m_szDefaultIdle; // 0x1588            
            CUtlSymbolLarge m_szDefaultRareIdle; // 0x1590            
            source2sdk::client::CountdownTimer m_damagetimer; // 0x1598            
            Vector m_vRenderOrigin; // 0x15b0            
            float m_fZDelta; // 0x15bc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0x15c0            
            bool m_bBaseStatsChanged; // 0x15c4            
            bool m_bNeedsSoundEmitterRefresh; // 0x15c5            
            uint8_t _pad15c6[0x2]; // 0x15c6
            // metadata: MNetworkEnable
            float m_flPhysicalArmorValue; // 0x15c8            
            // metadata: MNetworkEnable
            float m_flMagicalResistanceValue; // 0x15cc            
            std::int32_t m_nPrevSequenceParity; // 0x15d0            
            uint8_t _pad15d4[0xa4]; // 0x15d4
            float m_flPrevInvisLevel; // 0x1678            
            uint8_t _pad167c[0x4]; // 0x167c
            // m_nOriginalModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nOriginalModelIndex;
            char m_nOriginalModelIndex[0x8]; // 0x1680            
            // m_nClientOriginalModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nClientOriginalModelIndex;
            char m_nClientOriginalModelIndex[0x8]; // 0x1688            
            // m_nClientReplacementModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nClientReplacementModelIndex;
            char m_nClientReplacementModelIndex[0x8]; // 0x1690            
            bool m_bClientReplacementModelNeedsRebuild; // 0x1698            
            uint8_t _pad1699[0x3]; // 0x1699
            std::int32_t m_nClientReplacementModelReloadCount; // 0x169c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUnitModelVariantChanged"
            std::int8_t m_nUnitModelVariant; // 0x16a0            
            std::int8_t m_nUnitModelVariantCount; // 0x16a1            
            uint8_t _pad16a2[0x2]; // 0x16a2
            std::int32_t m_iPrevSequence; // 0x16a4            
            char* m_pLastWeatherEffectName; // 0x16a8            
            uint8_t _pad16b0[0x8]; // 0x16b0
            source2sdk::client::CountdownTimer m_VoiceBackgroundSoundTimer; // 0x16b8            
            // metadata: MNetworkEnable
            bool m_bIsWaitingToSpawn; // 0x16d0            
            uint8_t _pad16d1[0x7]; // 0x16d1
            // metadata: MNetworkEnable
            std::int64_t m_nTotalDamageTaken; // 0x16d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            // metadata: MNetworkChangeCallback "OnManaRegenChanged"
            float m_flManaRegen; // 0x16e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            // metadata: MNetworkChangeCallback "OnHealthRegenChanged"
            float m_flHealthRegen; // 0x16e4            
            // metadata: MNetworkEnable
            bool m_bIsMoving; // 0x16e8            
            uint8_t _pad16e9[0x3]; // 0x16e9
            // metadata: MNetworkEnable
            float m_fRevealRadius; // 0x16ec            
            // metadata: MNetworkEnable
            bool m_bCanUseWards; // 0x16f0            
            // metadata: MNetworkEnable
            bool m_bCanUseAllItems; // 0x16f1            
            uint8_t _pad16f2[0x2]; // 0x16f2
            // metadata: MNetworkEnable
            std::int32_t m_iXPBounty; // 0x16f4            
            // metadata: MNetworkEnable
            std::int32_t m_iXPBountyExtra; // 0x16f8            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldBountyMin; // 0x16fc            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldBountyMax; // 0x1700            
            // metadata: MNetworkEnable
            // m_hOwnerNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwnerNPC;
            char m_hOwnerNPC[0x4]; // 0x1704            
            // metadata: MNetworkEnable
            // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hGoalEntity;
            char m_hGoalEntity[0x4]; // 0x1708            
            // metadata: MNetworkEnable
            // m_hNeutralSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_NeutralSpawner> m_hNeutralSpawner;
            char m_hNeutralSpawner[0x4]; // 0x170c            
            // m_hClientOverrideMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hClientOverrideMaterial;
            char m_hClientOverrideMaterial[0x8]; // 0x1710            
            bool m_bCombinerMaterialOverrideListChanged; // 0x1718            
            uint8_t _pad1719[0x3]; // 0x1719
            std::int32_t m_nBaseModelMeshCount; // 0x171c            
            // m_combinerMaterialOverrideList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandleCopyable<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2>> m_combinerMaterialOverrideList;
            char m_combinerMaterialOverrideList[0x18]; // 0x1720            
            std::int8_t m_nArcanaLevel; // 0x1738            
            std::int8_t m_nDefaultArcanaLevel; // 0x1739            
            Color m_defaultColorGemColor; // 0x173a            
            uint8_t _pad173e[0x1a]; // 0x173e
            bool m_bHasBuiltWearableSpawnList; // 0x1758            
            bool m_bHasCostume; // 0x1759            
            bool m_bRecreateParticleSystemsOnModifiersChange; // 0x175a            
            bool m_bWasRevealedFromFOWAsDead; // 0x175b            
            uint8_t _pad175c[0x18]; // 0x175c
            float m_flAdditionalSinkDelay; // 0x1774            
            uint8_t _pad1778[0x108]; // 0x1778
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_NetworkActivity; // 0x1880            
            std::int32_t m_PrevNetworkActivity; // 0x1884            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_NetworkSequenceIndex; // 0x1888            
            // metadata: MNetworkEnable
            bool m_bShouldDoFlyHeightVisual; // 0x188c            
            uint8_t _pad188d[0x3]; // 0x188d
            // metadata: MNetworkEnable
            float m_flStartSequenceCycle; // 0x1890            
            uint8_t _pad1894[0x4]; // 0x1894
            // m_ActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_ActivityModifiers;
            char m_ActivityModifiers[0x18]; // 0x1898            
            // m_hBackgroundSceneEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_SceneEntity> m_hBackgroundSceneEnt;
            char m_hBackgroundSceneEnt[0x4]; // 0x18b0            
            // m_hSpeakingSceneEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_SceneEntity> m_hSpeakingSceneEnt;
            char m_hSpeakingSceneEnt[0x4]; // 0x18b4            
            uint8_t _pad18b8[0x10]; // 0x18b8
            // m_hOldWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_EconWearable>> m_hOldWearables;
            char m_hOldWearables[0x18]; // 0x18c8            
            // m_hOldWearableSkins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlStringToken> m_hOldWearableSkins;
            char m_hOldWearableSkins[0x18]; // 0x18e0            
            // metadata: MNetworkEnable
            char m_CustomHealthLabel[256]; // 0x18f8            
            // metadata: MNetworkEnable
            Color m_CustomHealthLabelColor; // 0x19f8            
            source2sdk::client::item_definition_index_t m_nWearableDefIndex; // 0x19fc            
            uint8_t _pad1a00[0x1]; // 0x1a00
            Color m_gibTintColor; // 0x1a01            
            bool m_bForceMaterialCombine; // 0x1a05            
            bool m_bShouldDrawParticlesWhileHidden; // 0x1a06            
            bool m_bIsClientThinkPending; // 0x1a07            
            bool m_bActivityModifiersDirty; // 0x1a08            
            bool m_bUnitModelVariantChanged; // 0x1a09            
            bool m_bWearablesAreTaunting; // 0x1a0a            
            bool m_bWearablesLoadoutOverride; // 0x1a0b            
            uint8_t _pad1a0c[0x14]; // 0x1a0c
            bool m_bShowCannotBeDisabledIcon; // 0x1a20            
            uint8_t _pad1a21[0x1f];
            
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
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC) == 0x1a40);
    };
};
