#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityBarType_t.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5b8
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
        // static metadata: MNetworkVarNames "bool m_bReflection"
        // static metadata: MNetworkVarNames "EHANDLE m_pReflectionSourceAbility"
        #pragma pack(push, 1)
        class CDOTABaseAbility : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04d8[0x8]; // 0x4d8
            std::int32_t m_iAbilityIndex; // 0x4e0            
            std::int32_t m_nStolenActivity; // 0x4e4            
            bool m_bChanneling; // 0x4e8            
            bool m_bRedirected; // 0x4e9            
            // metadata: MNetworkEnable
            bool m_bRefCountsModifiers; // 0x4ea            
            uint8_t _pad04eb[0x1]; // 0x4eb
            std::int32_t m_iModifierRefCount; // 0x4ec            
            bool m_bWantsToNeutralCast; // 0x4f0            
            uint8_t _pad04f1[0x3]; // 0x4f1
            // m_hNeutralCastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hNeutralCastTarget;
            char m_hNeutralCastTarget[0x4]; // 0x4f4            
            bool m_bServerOnlyAbility; // 0x4f8            
            bool m_bGrantedAbilityChargesFromScepter; // 0x4f9            
            bool m_bGrantedAbilityChargesFromShard; // 0x4fa            
            bool m_bIsDefaultHeroAbility; // 0x4fb            
            bool m_bConsiderOvershootInGetCastRange; // 0x4fc            
            uint8_t _pad04fd[0x3]; // 0x4fd
            float m_flExtendChannelTime; // 0x500            
            // metadata: MNetworkEnable
            bool m_bHidden; // 0x504            
            // metadata: MNetworkEnable
            bool m_bActivated; // 0x505            
            uint8_t _pad0506[0x2]; // 0x506
            // metadata: MNetworkEnable
            source2sdk::client::AbilityBarType_t m_nAbilityBarType; // 0x508            
            // metadata: MNetworkEnable
            std::int32_t m_iDirtyButtons; // 0x50c            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iLevel; // 0x510            
            // metadata: MNetworkEnable
            bool m_bToggleState; // 0x514            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            bool m_bInAbilityPhase; // 0x515            
            uint8_t _pad0516[0x2]; // 0x516
            // metadata: MNetworkEnable
            float m_flAbilityMuteDuration; // 0x518            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            float m_fCooldown; // 0x51c            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "15"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1024,000000"
            float m_flCooldownLength; // 0x520            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iManaCost; // 0x524            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            bool m_bAutoCastState; // 0x528            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            bool m_bAltCastState; // 0x529            
            uint8_t _pad052a[0x2]; // 0x52a
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flChannelStartTime; // 0x52c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCastStartTime; // 0x530            
            // metadata: MNetworkEnable
            bool m_bInIndefiniteCooldown; // 0x534            
            // metadata: MNetworkEnable
            bool m_bFrozenCooldown; // 0x535            
            uint8_t _pad0536[0x2]; // 0x536
            std::int32_t m_nFrozenCooldownStack; // 0x538            
            // metadata: MNetworkEnable
            float m_flOverrideCastPoint; // 0x53c            
            // metadata: MNetworkEnable
            bool m_bStolen; // 0x540            
            // metadata: MNetworkEnable
            bool m_bReplicated; // 0x541            
            // metadata: MNetworkEnable
            bool m_bStealable; // 0x542            
            uint8_t _pad0543[0x1]; // 0x543
            // metadata: MNetworkEnable
            std::int32_t m_nAbilityCurrentCharges; // 0x544            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            float m_fAbilityChargeRestoreTimeRemaining; // 0x548            
            // metadata: MNetworkEnable
            bool m_bUpgradeRecommended; // 0x54c            
            uint8_t _pad054d[0x3]; // 0x54d
            // metadata: MNetworkEnable
            std::int32_t m_nMaxLevelOverride; // 0x550            
            // metadata: MNetworkEnable
            std::int32_t m_nRequiredLevelOverride; // 0x554            
            // metadata: MNetworkEnable
            std::int32_t m_nLevelsBetweenUpgradesOverride; // 0x558            
            uint8_t _pad055c[0x4]; // 0x55c
            // metadata: MNetworkEnable
            source2sdk::client::HeroFacetKey_t m_nHeroFacetKey; // 0x560            
            // metadata: MNetworkEnable
            float m_flTotalExtendedChannelTime; // 0x568            
            // metadata: MNetworkEnable
            bool m_bGrantedByFacet; // 0x56c            
            // metadata: MNetworkEnable
            bool m_bReflection; // 0x56d            
            uint8_t _pad056e[0x2]; // 0x56e
            // metadata: MNetworkEnable
            // m_pReflectionSourceAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_pReflectionSourceAbility;
            char m_pReflectionSourceAbility[0x4]; // 0x570            
            // m_hReflectionCause has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hReflectionCause;
            char m_hReflectionCause[0x4]; // 0x574            
            uint8_t _pad0578[0x28]; // 0x578
            source2sdk::client::item_definition_index_t m_nBackedByEconItemIndex; // 0x5a0            
            uint8_t _pad05a4[0xd]; // 0x5a4
            bool m_bAltCastOrdered; // 0x5b1            
            uint8_t _pad05b2[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTABaseAbility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTABaseAbility) == 0x5b8);
    };
};
