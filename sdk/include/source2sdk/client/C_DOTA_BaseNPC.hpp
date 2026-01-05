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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
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
        // static metadata: MNetworkVarNames "int m_iRefresherChargesUsed"
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            bool m_bIsPhantom; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint32_t m_iUnitType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            bool m_bSelectionRingVisible; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentLevel; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsAncient; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsBossCreature; // 0x_            
            // metadata: MNetworkEnable
            bool m_bStolenScepter; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsNeutralUnitType; // 0x_            
            bool m_bSelectOnSpawn; // 0x_            
            bool m_bCachedReplicatedMorphlingIllusion; // 0x_            
            bool m_bIgnoreAddSummonedToSelection; // 0x_            
            bool m_bConsideredHero; // 0x_            
            bool m_bUsesConstantGesture; // 0x_            
            bool m_bUseHeroAbilityNumbers; // 0x_            
            bool m_bHasSharedAbilities; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsSummoned; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCanBeDominated; // 0x_            
            // metadata: MNetworkEnable
            bool m_bHasUpgradeableAbilities; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            float m_flHealthThinkRegen; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint64_t m_iIsControllableByPlayer64; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nHealthBarOffsetOverride; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCanRespawn; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_iAttackRange; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsClone; // 0x_            
            Color m_colorGemColor; // 0x_            
            bool m_bHasColorGem; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ParticleIndex_t m_nFXDeniableIndex; // 0x_            
            std::int32_t m_nCustomHealthbarStyle; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iMoveSpeed; // 0x_            
            std::int32_t m_iBaseAttackSpeed; // 0x_            
            // metadata: MNetworkEnable
            float m_flBaseAttackTime; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUnitNameIndexChanged"
            std::int32_t m_iUnitNameIndex; // 0x_            
            std::int32_t m_iHealthBarOffset; // 0x_            
            Color m_iHealthBarHighlightColor; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "65536,000000"
            float m_flMana; // 0x_            
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
            bool m_bIsIllusion; // 0x_            
            bool m_bHasClientSeenIllusionModifier; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilitiesChanged"
            // metadata: MNetworkPriority "32"
            // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_vecAbilities;
            char m_vecAbilities[0x_]; // 0x_            
            // m_vecAbilitiesClientPrediction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecAbilitiesClientPrediction;
            char m_vecAbilitiesClientPrediction[0x_]; // 0x_            
            std::int32_t m_nLocalAbilityBarSequenceNumber; // 0x_            
            float m_flInvisibilityLevel; // 0x_            
            float m_flHullRadius; // 0x_            
            float m_flCollisionPadding; // 0x_            
            float m_flRingRadius; // 0x_            
            float m_flProjectileCollisionSize; // 0x_            
            CUtlSymbolLarge m_iszUnitName; // 0x_            
            CUtlSymbolLarge m_iszUnitNameIconOverride; // 0x_            
            CUtlSymbolLarge m_iszParticleFolder; // 0x_            
            CUtlSymbolLarge m_iszSoundSet; // 0x_            
            CUtlSymbolLarge m_iszSelectionGroup; // 0x_            
            CUtlSymbolLarge m_iszVoiceFile; // 0x_            
            CUtlSymbolLarge m_iszGameSoundsFile; // 0x_            
            CUtlSymbolLarge m_iszVoiceBackgroundSound; // 0x_            
            CUtlSymbolLarge m_iszIdleSoundLoop; // 0x_            
            // metadata: MNetworkEnable
            CUtlString m_szUnitLabel; // 0x_            
            // metadata: MNetworkEnable
            CUtlString m_szScaleset; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_nUnitLabelIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strAnimationModifier; // 0x_            
            CUtlString m_TerrainSpecificFootstepEffect; // 0x_            
            bool m_bUseCustomTerrainWeatherEffect; // 0x_            
            bool m_bHasClientSoundReplacement; // 0x_            
            bool m_bHasClientReplacementParticle; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bResourcesLoaded; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTauntCooldown; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTauntCooldown2; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_SHOP_TYPE m_iCurShop; // 0x_            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szCurShopEntName; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iDayTimeVisionRange; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iNightTimeVisionRange; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDamageMinChanged"
            std::int32_t m_iDamageMin; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDamageMaxChanged"
            std::int32_t m_iDamageMax; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iDamageBonus; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iBaseDamageMin; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iBaseDamageMax; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::CDOTA_ModifierManager m_ModifierManager; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::C_DOTA_UnitInventory m_Inventory; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUnitStateChanged"
            // metadata: MNetworkPriority "32"
            std::uint64_t m_nUnitState64; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint64_t m_nUnitDebuffState; // 0x_            
            bool m_bHasInventory; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iAcquisitionRange; // 0x_            
            std::int32_t m_FoWViewID; // 0x_            
            std::int32_t m_iTeamViewerID; // 0x_            
            std::int32_t m_iPrevHealthPct; // 0x_            
            std::int32_t m_iPrevLifeState; // 0x_            
            std::int32_t m_iPrevTeam; // 0x_            
            bool m_bLastShardState; // 0x_            
            bool m_bLastScepterState; // 0x_            
            bool m_bPrevProvidesVision; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint64_t m_nPrevControllableMask; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CountdownTimer m_TagTime; // 0x_            
            source2sdk::client::CountdownTimer m_ClickedTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flIdleRunPoseStartTime[2]; // 0x_            
            float m_flIdleRunPoseDuration[2]; // 0x_            
            bool m_bAnimationTransitionActive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nAnimationTransitionPoseParameters[2]; // 0x_            
            std::int32_t m_nAnimationTransitionInjuredPoseParameters[2]; // 0x_            
            std::int32_t m_nAnimationTransitionAggressivePoseParameters[2]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flTimeSinceLastAbilityNag; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iAttackCapabilities; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iSpecialAbility; // 0x_            
            std::int32_t m_iMoveCapabilities; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nPlayerOwnerID; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszMinimapIcon; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMinimapIconSize; // 0x_            
            bool m_bMinimapDisableTint; // 0x_            
            bool m_bMinimapDisableRotation; // 0x_            
            Color m_colorHeroGlow; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iNearShopMask; // 0x_            
            std::int32_t m_nPoseParameterTurn; // 0x_            
            std::int32_t m_nPoseParameterRun; // 0x_            
            float m_flLean; // 0x_            
            float m_flRun; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_anglediff; // 0x_            
            bool m_bInfoKeyActive; // 0x_            
            bool m_bNewUpdateAssetModifiersNetworked; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTick_t m_nAssetModifiersLastUpdatedTick; // 0x_            
            bool m_bSuppressGlow; // 0x_            
            bool m_bWasSinking; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flRangeDisplayDist; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_szDefaultIdle; // 0x_            
            CUtlSymbolLarge m_szDefaultRareIdle; // 0x_            
            source2sdk::client::CountdownTimer m_damagetimer; // 0x_            
            Vector m_vRenderOrigin; // 0x_            
            float m_fZDelta; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0x_            
            bool m_bBaseStatsChanged; // 0x_            
            bool m_bNeedsSoundEmitterRefresh; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flPhysicalArmorValue; // 0x_            
            // metadata: MNetworkEnable
            float m_flMagicalResistanceValue; // 0x_            
            std::int32_t m_nPrevSequenceParity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flPrevInvisLevel; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_nOriginalModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nOriginalModelIndex;
            char m_nOriginalModelIndex[0x_]; // 0x_            
            // m_nClientOriginalModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nClientOriginalModelIndex;
            char m_nClientOriginalModelIndex[0x_]; // 0x_            
            // m_nClientReplacementModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nClientReplacementModelIndex;
            char m_nClientReplacementModelIndex[0x_]; // 0x_            
            bool m_bClientReplacementModelNeedsRebuild; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nClientReplacementModelReloadCount; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUnitModelVariantChanged"
            std::int8_t m_nUnitModelVariant; // 0x_            
            std::int8_t m_nUnitModelVariantCount; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iPrevSequence; // 0x_            
            char* m_pLastWeatherEffectName; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CountdownTimer m_VoiceBackgroundSoundTimer; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsWaitingToSpawn; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int64_t m_nTotalDamageTaken; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            // metadata: MNetworkChangeCallback "OnManaRegenChanged"
            float m_flManaRegen; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "-100,000000"
            // metadata: MNetworkMaxValue "1000,000000"
            // metadata: MNetworkChangeCallback "OnHealthRegenChanged"
            float m_flHealthRegen; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsMoving; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_fRevealRadius; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCanUseWards; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCanUseAllItems; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_iXPBounty; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iXPBountyExtra; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldBountyMin; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iGoldBountyMax; // 0x_            
            // metadata: MNetworkEnable
            // m_hOwnerNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwnerNPC;
            char m_hOwnerNPC[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hGoalEntity;
            char m_hGoalEntity[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hNeutralSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_NeutralSpawner> m_hNeutralSpawner;
            char m_hNeutralSpawner[0x_]; // 0x_            
            // m_hClientOverrideMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hClientOverrideMaterial;
            char m_hClientOverrideMaterial[0x_]; // 0x_            
            bool m_bCombinerMaterialOverrideListChanged; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nBaseModelMeshCount; // 0x_            
            // m_combinerMaterialOverrideList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandleCopyable<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2>> m_combinerMaterialOverrideList;
            char m_combinerMaterialOverrideList[0x_]; // 0x_            
            std::int8_t m_nArcanaLevel; // 0x_            
            std::int8_t m_nDefaultArcanaLevel; // 0x_            
            Color m_defaultColorGemColor; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bHasBuiltWearableSpawnList; // 0x_            
            bool m_bHasCostume; // 0x_            
            bool m_bRecreateParticleSystemsOnModifiersChange; // 0x_            
            bool m_bWasRevealedFromFOWAsDead; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flAdditionalSinkDelay; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_NetworkActivity; // 0x_            
            std::int32_t m_PrevNetworkActivity; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_NetworkSequenceIndex; // 0x_            
            // metadata: MNetworkEnable
            bool m_bShouldDoFlyHeightVisual; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flStartSequenceCycle; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_ActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_ActivityModifiers;
            char m_ActivityModifiers[0x_]; // 0x_            
            // m_hBackgroundSceneEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_SceneEntity> m_hBackgroundSceneEnt;
            char m_hBackgroundSceneEnt[0x_]; // 0x_            
            // m_hSpeakingSceneEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_SceneEntity> m_hSpeakingSceneEnt;
            char m_hSpeakingSceneEnt[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hOldWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_EconWearable>> m_hOldWearables;
            char m_hOldWearables[0x_]; // 0x_            
            // m_hOldWearableSkins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlStringToken> m_hOldWearableSkins;
            char m_hOldWearableSkins[0x_]; // 0x_            
            // metadata: MNetworkEnable
            char m_CustomHealthLabel[256]; // 0x_            
            // metadata: MNetworkEnable
            Color m_CustomHealthLabelColor; // 0x_            
            source2sdk::client::item_definition_index_t m_nWearableDefIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Color m_gibTintColor; // 0x_            
            bool m_bForceMaterialCombine; // 0x_            
            bool m_bShouldDrawParticlesWhileHidden; // 0x_            
            bool m_bIsClientThinkPending; // 0x_            
            bool m_bActivityModifiersDirty; // 0x_            
            bool m_bUnitModelVariantChanged; // 0x_            
            bool m_bWearablesAreTaunting; // 0x_            
            bool m_bWearablesLoadoutOverride; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bShowCannotBeDisabledIcon; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // int32_t InputSetStyleOverride; // 0x_
            // CUtlSymbolLarge InputSetAutoStyleCriteria; // 0x_
            // uint8_t m_iTeamNum; // 0x_
            // CHandle< CBaseEntity > econ_owner; // 0x_
            // int32_t EconItemCount; // 0x_
            // bool inPortrait; // 0x_
            // bool EnableAutoStyles; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC) == 0x_);
    };
};
