#pragma once
#include "source2sdk/client/AbilityBarType_t.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5d8
    // Has VTable
    // Is Abstract
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkExcludeByName "m_angRotation"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByName "m_cellX"
    // static metadata: MNetworkExcludeByName "m_cellY"
    // static metadata: MNetworkExcludeByName "m_cellZ"
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
    // static metadata: MNetworkExcludeByName "m_vecOrigin"
    // static metadata: MNetworkExcludeByName "m_vecSpecifiedSurroundingMaxs"
    // static metadata: MNetworkExcludeByName "m_vecSpecifiedSurroundingMins"
    // static metadata: MNetworkExcludeByName "m_vLookTargetPosition"
    // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
    // static metadata: MNetworkVarNames "bool m_bRefCountsModifiers"
    // static metadata: MNetworkVarNames "bool m_bHidden"
    // static metadata: MNetworkVarNames "bool m_bActivated"
    // static metadata: MNetworkVarNames "AbilityBarType_t m_nAbilityBarType"
    // static metadata: MNetworkVarNames "int m_iDirtyButtons"
    // static metadata: MNetworkVarNames "int m_iLevel"
    // static metadata: MNetworkVarNames "bool m_bToggleState"
    // static metadata: MNetworkVarNames "float m_flAbilityMuteDuration"
    // static metadata: MNetworkVarNames "bool m_bInAbilityPhase"
    // static metadata: MNetworkVarNames "float m_fCooldown"
    // static metadata: MNetworkVarNames "float m_flCooldownLength"
    // static metadata: MNetworkVarNames "int m_iManaCost"
    // static metadata: MNetworkVarNames "bool m_bAutoCastState"
    // static metadata: MNetworkVarNames "bool m_bAltCastState"
    // static metadata: MNetworkVarNames "GameTime_t m_flChannelStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flCastStartTime"
    // static metadata: MNetworkVarNames "bool m_bInIndefiniteCooldown"
    // static metadata: MNetworkVarNames "bool m_bFrozenCooldown"
    // static metadata: MNetworkVarNames "float m_flOverrideCastPoint"
    // static metadata: MNetworkVarNames "bool m_bStolen"
    // static metadata: MNetworkVarNames "bool m_bStealable"
    // static metadata: MNetworkVarNames "bool m_bReplicated"
    // static metadata: MNetworkVarNames "int m_nAbilityCurrentCharges"
    // static metadata: MNetworkVarNames "float m_fAbilityChargeRestoreTimeRemaining"
    // static metadata: MNetworkVarNames "bool m_bUpgradeRecommended"
    // static metadata: MNetworkVarNames "int m_nMaxLevelOverride"
    // static metadata: MNetworkVarNames "int m_nRequiredLevelOverride"
    // static metadata: MNetworkVarNames "int m_nLevelsBetweenUpgradesOverride"
    // static metadata: MNetworkVarNames "HeroFacetKey_t m_nHeroFacetKey"
    // static metadata: MNetworkVarNames "float m_flTotalExtendedChannelTime"
    // static metadata: MNetworkVarNames "bool m_bGrantedByFacet"
    #pragma pack(push, 1)
    class C_DOTABaseAbility : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x538[0x8]; // 0x538
        bool m_bAuxCastState; // 0x540        
        [[maybe_unused]] std::uint8_t pad_0x541[0x3]; // 0x541
        int32_t m_iEnemyLevel; // 0x544        
        int32_t m_iMaxLevel; // 0x548        
        int32_t m_iRequiredLevel; // 0x54c        
        int32_t m_iLevelsBetweenUpgrades; // 0x550        
        bool m_bCanLearn; // 0x554        
        [[maybe_unused]] std::uint8_t pad_0x555[0x3]; // 0x555
        float m_flUpgradeBlend; // 0x558        
        bool m_bUpgradedDuringQuickcastPreview; // 0x55c        
        bool m_bConsiderOvershootInGetCastRange; // 0x55d        
        // metadata: MNetworkEnable
        bool m_bRefCountsModifiers; // 0x55e        
        // metadata: MNetworkEnable
        bool m_bHidden; // 0x55f        
        bool m_bOldHidden; // 0x560        
        // metadata: MNetworkEnable
        bool m_bActivated; // 0x561        
        bool m_bOldActivated; // 0x562        
        [[maybe_unused]] std::uint8_t pad_0x563[0x1]; // 0x563
        // metadata: MNetworkEnable
        client::AbilityBarType_t m_nAbilityBarType; // 0x564        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDirtyButtonsChanged"
        int32_t m_iDirtyButtons; // 0x568        
        bool m_bPerformDirtyParity; // 0x56c        
        [[maybe_unused]] std::uint8_t pad_0x56d[0x3]; // 0x56d
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnLevelChanged"
        // metadata: MNetworkPriority "32"
        int32_t m_iLevel; // 0x570        
        bool m_bAbilityLevelDirty; // 0x574        
        // metadata: MNetworkEnable
        bool m_bToggleState; // 0x575        
        [[maybe_unused]] std::uint8_t pad_0x576[0x2]; // 0x576
        // metadata: MNetworkEnable
        float m_flAbilityMuteDuration; // 0x578        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        bool m_bInAbilityPhase; // 0x57c        
        [[maybe_unused]] std::uint8_t pad_0x57d[0x3]; // 0x57d
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        float m_fCooldown; // 0x580        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "15"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1024,000000"
        float m_flCooldownLength; // 0x584        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iManaCost; // 0x588        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        bool m_bAutoCastState; // 0x58c        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        bool m_bAltCastState; // 0x58d        
        [[maybe_unused]] std::uint8_t pad_0x58e[0x2]; // 0x58e
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flChannelStartTime; // 0x590        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCastStartTime; // 0x594        
        // metadata: MNetworkEnable
        bool m_bInIndefiniteCooldown; // 0x598        
        // metadata: MNetworkEnable
        bool m_bFrozenCooldown; // 0x599        
        [[maybe_unused]] std::uint8_t pad_0x59a[0x2]; // 0x59a
        // metadata: MNetworkEnable
        float m_flOverrideCastPoint; // 0x59c        
        // metadata: MNetworkEnable
        bool m_bStolen; // 0x5a0        
        // metadata: MNetworkEnable
        bool m_bStealable; // 0x5a1        
        // metadata: MNetworkEnable
        bool m_bReplicated; // 0x5a2        
        [[maybe_unused]] std::uint8_t pad_0x5a3[0x1]; // 0x5a3
        // metadata: MNetworkEnable
        int32_t m_nAbilityCurrentCharges; // 0x5a4        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        float m_fAbilityChargeRestoreTimeRemaining; // 0x5a8        
        // metadata: MNetworkEnable
        bool m_bUpgradeRecommended; // 0x5ac        
        [[maybe_unused]] std::uint8_t pad_0x5ad[0x3]; // 0x5ad
        // metadata: MNetworkEnable
        int32_t m_nMaxLevelOverride; // 0x5b0        
        // metadata: MNetworkEnable
        int32_t m_nRequiredLevelOverride; // 0x5b4        
        // metadata: MNetworkEnable
        int32_t m_nLevelsBetweenUpgradesOverride; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5bc[0x4]; // 0x5bc
        // metadata: MNetworkEnable
        client::HeroFacetKey_t m_nHeroFacetKey; // 0x5c0        
        // metadata: MNetworkEnable
        float m_flTotalExtendedChannelTime; // 0x5c8        
        // metadata: MNetworkEnable
        bool m_bGrantedByFacet; // 0x5cc        
        [[maybe_unused]] std::uint8_t pad_0x5cd[0x3]; // 0x5cd
        float m_flLastCastClickTime; // 0x5d0        
        [[maybe_unused]] std::uint8_t pad_0x5d4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTABaseAbility because it is not a standard-layout class
    static_assert(sizeof(C_DOTABaseAbility) == 0x5d8);
};
