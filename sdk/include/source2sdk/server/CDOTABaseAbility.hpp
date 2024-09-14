#pragma once
#include "source2sdk/client/AbilityBarType_t.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5a0
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
    // static metadata: MNetworkExcludeByName "m_hOwnerEntity"
    // static metadata: MNetworkExcludeByName "m_hParent"
    // static metadata: MNetworkExcludeByName "m_flCreateTime"
    // static metadata: MNetworkExcludeByName "m_flScale"
    // static metadata: MNetworkVarNames "bool m_bRefCountsModifiers"
    // static metadata: MNetworkVarNames "bool m_bHidden"
    // static metadata: MNetworkVarNames "bool m_bActivated"
    // static metadata: MNetworkVarNames "AbilityBarType_t m_nAbilityBarType"
    // static metadata: MNetworkVarNames "int m_iDirtyButtons"
    // static metadata: MNetworkVarNames "int m_iLevel"
    // static metadata: MNetworkVarNames "bool m_bToggleState"
    // static metadata: MNetworkVarNames "bool m_bInAbilityPhase"
    // static metadata: MNetworkVarNames "float m_flAbilityMuteDuration"
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
    // static metadata: MNetworkVarNames "bool m_bReplicated"
    // static metadata: MNetworkVarNames "bool m_bStealable"
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
    class CDOTABaseAbility : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4b8[0x8]; // 0x4b8
        int32_t m_iAbilityIndex; // 0x4c0        
        int32_t m_nStolenActivity; // 0x4c4        
        bool m_bChanneling; // 0x4c8        
        bool m_bReflection; // 0x4c9        
        bool m_bRedirected; // 0x4ca        
        // metadata: MNetworkEnable
        bool m_bRefCountsModifiers; // 0x4cb        
        int32_t m_iModifierRefCount; // 0x4cc        
        bool m_bWantsToNeutralCast; // 0x4d0        
        [[maybe_unused]] std::uint8_t pad_0x4d1[0x3]; // 0x4d1
        // m_hNeutralCastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hNeutralCastTarget;
        char m_hNeutralCastTarget[0x4]; // 0x4d4        
        bool m_bServerOnlyAbility; // 0x4d8        
        bool m_bGrantedAbilityChargesFromScepter; // 0x4d9        
        bool m_bGrantedAbilityChargesFromShard; // 0x4da        
        bool m_bIsDefaultHeroAbility; // 0x4db        
        bool m_bConsiderOvershootInGetCastRange; // 0x4dc        
        [[maybe_unused]] std::uint8_t pad_0x4dd[0x3]; // 0x4dd
        float m_flExtendChannelTime; // 0x4e0        
        // metadata: MNetworkEnable
        bool m_bHidden; // 0x4e4        
        // metadata: MNetworkEnable
        bool m_bActivated; // 0x4e5        
        [[maybe_unused]] std::uint8_t pad_0x4e6[0x2]; // 0x4e6
        // metadata: MNetworkEnable
        client::AbilityBarType_t m_nAbilityBarType; // 0x4e8        
        // metadata: MNetworkEnable
        int32_t m_iDirtyButtons; // 0x4ec        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iLevel; // 0x4f0        
        // metadata: MNetworkEnable
        bool m_bToggleState; // 0x4f4        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        bool m_bInAbilityPhase; // 0x4f5        
        [[maybe_unused]] std::uint8_t pad_0x4f6[0x2]; // 0x4f6
        // metadata: MNetworkEnable
        float m_flAbilityMuteDuration; // 0x4f8        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        float m_fCooldown; // 0x4fc        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "15"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1024,000000"
        float m_flCooldownLength; // 0x500        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iManaCost; // 0x504        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        bool m_bAutoCastState; // 0x508        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        bool m_bAltCastState; // 0x509        
        [[maybe_unused]] std::uint8_t pad_0x50a[0x2]; // 0x50a
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flChannelStartTime; // 0x50c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCastStartTime; // 0x510        
        // metadata: MNetworkEnable
        bool m_bInIndefiniteCooldown; // 0x514        
        // metadata: MNetworkEnable
        bool m_bFrozenCooldown; // 0x515        
        [[maybe_unused]] std::uint8_t pad_0x516[0x2]; // 0x516
        int32_t m_nFrozenCooldownStack; // 0x518        
        // metadata: MNetworkEnable
        float m_flOverrideCastPoint; // 0x51c        
        // metadata: MNetworkEnable
        bool m_bStolen; // 0x520        
        // metadata: MNetworkEnable
        bool m_bReplicated; // 0x521        
        // metadata: MNetworkEnable
        bool m_bStealable; // 0x522        
        [[maybe_unused]] std::uint8_t pad_0x523[0x1]; // 0x523
        // metadata: MNetworkEnable
        int32_t m_nAbilityCurrentCharges; // 0x524        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        float m_fAbilityChargeRestoreTimeRemaining; // 0x528        
        // metadata: MNetworkEnable
        bool m_bUpgradeRecommended; // 0x52c        
        [[maybe_unused]] std::uint8_t pad_0x52d[0x3]; // 0x52d
        // metadata: MNetworkEnable
        int32_t m_nMaxLevelOverride; // 0x530        
        // metadata: MNetworkEnable
        int32_t m_nRequiredLevelOverride; // 0x534        
        // metadata: MNetworkEnable
        int32_t m_nLevelsBetweenUpgradesOverride; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x53c[0x4]; // 0x53c
        // metadata: MNetworkEnable
        client::HeroFacetKey_t m_nHeroFacetKey; // 0x540        
        // metadata: MNetworkEnable
        float m_flTotalExtendedChannelTime; // 0x548        
        // metadata: MNetworkEnable
        bool m_bGrantedByFacet; // 0x54c        
        [[maybe_unused]] std::uint8_t pad_0x54d[0x3]; // 0x54d
        // m_hReflectionCause has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hReflectionCause;
        char m_hReflectionCause[0x4]; // 0x550        
        [[maybe_unused]] std::uint8_t pad_0x554[0x24]; // 0x554
        // m_pReflectionSourceAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_pReflectionSourceAbility;
        char m_pReflectionSourceAbility[0x4]; // 0x578        
        [[maybe_unused]] std::uint8_t pad_0x57c[0xc]; // 0x57c
        client::item_definition_index_t m_nBackedByEconItemIndex; // 0x588        
        [[maybe_unused]] std::uint8_t pad_0x58c[0xd]; // 0x58c
        bool m_bAltCastOrdered; // 0x599        
        [[maybe_unused]] std::uint8_t pad_0x59a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTABaseAbility because it is not a standard-layout class
    static_assert(sizeof(CDOTABaseAbility) == 0x5a0);
};
