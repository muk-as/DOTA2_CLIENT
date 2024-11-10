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
    // Size: 0x600
    // Has VTable
    // Is Abstract
    // MClassHasEntityLimitedDataDesc
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
        [[maybe_unused]] std::uint8_t pad_0x560[0x8]; // 0x560
        bool m_bAuxCastState; // 0x568        
        [[maybe_unused]] std::uint8_t pad_0x569[0x3]; // 0x569
        int32_t m_iEnemyLevel; // 0x56c        
        int32_t m_iMaxLevel; // 0x570        
        int32_t m_iRequiredLevel; // 0x574        
        int32_t m_iLevelsBetweenUpgrades; // 0x578        
        bool m_bCanLearn; // 0x57c        
        [[maybe_unused]] std::uint8_t pad_0x57d[0x3]; // 0x57d
        float m_flUpgradeBlend; // 0x580        
        bool m_bUpgradedDuringQuickcastPreview; // 0x584        
        bool m_bConsiderOvershootInGetCastRange; // 0x585        
        // metadata: MNetworkEnable
        bool m_bRefCountsModifiers; // 0x586        
        // metadata: MNetworkEnable
        bool m_bHidden; // 0x587        
        bool m_bOldHidden; // 0x588        
        // metadata: MNetworkEnable
        bool m_bActivated; // 0x589        
        bool m_bOldActivated; // 0x58a        
        [[maybe_unused]] std::uint8_t pad_0x58b[0x1]; // 0x58b
        // metadata: MNetworkEnable
        client::AbilityBarType_t m_nAbilityBarType; // 0x58c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDirtyButtonsChanged"
        int32_t m_iDirtyButtons; // 0x590        
        bool m_bPerformDirtyParity; // 0x594        
        [[maybe_unused]] std::uint8_t pad_0x595[0x3]; // 0x595
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnLevelChanged"
        // metadata: MNetworkPriority "32"
        int32_t m_iLevel; // 0x598        
        bool m_bAbilityLevelDirty; // 0x59c        
        // metadata: MNetworkEnable
        bool m_bToggleState; // 0x59d        
        [[maybe_unused]] std::uint8_t pad_0x59e[0x2]; // 0x59e
        // metadata: MNetworkEnable
        float m_flAbilityMuteDuration; // 0x5a0        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        bool m_bInAbilityPhase; // 0x5a4        
        [[maybe_unused]] std::uint8_t pad_0x5a5[0x3]; // 0x5a5
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        float m_fCooldown; // 0x5a8        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "15"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1024,000000"
        float m_flCooldownLength; // 0x5ac        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iManaCost; // 0x5b0        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        bool m_bAutoCastState; // 0x5b4        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        bool m_bAltCastState; // 0x5b5        
        [[maybe_unused]] std::uint8_t pad_0x5b6[0x2]; // 0x5b6
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flChannelStartTime; // 0x5b8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCastStartTime; // 0x5bc        
        // metadata: MNetworkEnable
        bool m_bInIndefiniteCooldown; // 0x5c0        
        // metadata: MNetworkEnable
        bool m_bFrozenCooldown; // 0x5c1        
        [[maybe_unused]] std::uint8_t pad_0x5c2[0x2]; // 0x5c2
        // metadata: MNetworkEnable
        float m_flOverrideCastPoint; // 0x5c4        
        // metadata: MNetworkEnable
        bool m_bStolen; // 0x5c8        
        // metadata: MNetworkEnable
        bool m_bStealable; // 0x5c9        
        // metadata: MNetworkEnable
        bool m_bReplicated; // 0x5ca        
        [[maybe_unused]] std::uint8_t pad_0x5cb[0x1]; // 0x5cb
        // metadata: MNetworkEnable
        int32_t m_nAbilityCurrentCharges; // 0x5cc        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        float m_fAbilityChargeRestoreTimeRemaining; // 0x5d0        
        // metadata: MNetworkEnable
        bool m_bUpgradeRecommended; // 0x5d4        
        [[maybe_unused]] std::uint8_t pad_0x5d5[0x3]; // 0x5d5
        // metadata: MNetworkEnable
        int32_t m_nMaxLevelOverride; // 0x5d8        
        // metadata: MNetworkEnable
        int32_t m_nRequiredLevelOverride; // 0x5dc        
        // metadata: MNetworkEnable
        int32_t m_nLevelsBetweenUpgradesOverride; // 0x5e0        
        [[maybe_unused]] std::uint8_t pad_0x5e4[0x4]; // 0x5e4
        // metadata: MNetworkEnable
        client::HeroFacetKey_t m_nHeroFacetKey; // 0x5e8        
        // metadata: MNetworkEnable
        float m_flTotalExtendedChannelTime; // 0x5f0        
        // metadata: MNetworkEnable
        bool m_bGrantedByFacet; // 0x5f4        
        [[maybe_unused]] std::uint8_t pad_0x5f5[0x3]; // 0x5f5
        float m_flLastCastClickTime; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTABaseAbility because it is not a standard-layout class
    static_assert(sizeof(C_DOTABaseAbility) == 0x600);
};
