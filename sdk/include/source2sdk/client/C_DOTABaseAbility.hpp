#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityBarType_t.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x680
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
        // static metadata: MNetworkVarNames "bool m_bReflection"
        // static metadata: MNetworkVarNames "EHANDLE m_pReflectionSourceAbility"
        #pragma pack(push, 1)
        class C_DOTABaseAbility : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05e0[0x8]; // 0x5e0
            bool m_bAuxCastState; // 0x5e8            
            uint8_t _pad05e9[0x3]; // 0x5e9
            std::int32_t m_iEnemyLevel; // 0x5ec            
            std::int32_t m_iMaxLevel; // 0x5f0            
            std::int32_t m_iRequiredLevel; // 0x5f4            
            std::int32_t m_iLevelsBetweenUpgrades; // 0x5f8            
            bool m_bCanLearn; // 0x5fc            
            uint8_t _pad05fd[0x3]; // 0x5fd
            float m_flUpgradeBlend; // 0x600            
            bool m_bUpgradedDuringQuickcastPreview; // 0x604            
            bool m_bConsiderOvershootInGetCastRange; // 0x605            
            // metadata: MNetworkEnable
            bool m_bRefCountsModifiers; // 0x606            
            // metadata: MNetworkEnable
            bool m_bHidden; // 0x607            
            bool m_bOldHidden; // 0x608            
            // metadata: MNetworkEnable
            bool m_bActivated; // 0x609            
            bool m_bOldActivated; // 0x60a            
            uint8_t _pad060b[0x1]; // 0x60b
            // metadata: MNetworkEnable
            source2sdk::client::AbilityBarType_t m_nAbilityBarType; // 0x60c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDirtyButtonsChanged"
            std::int32_t m_iDirtyButtons; // 0x610            
            bool m_bPerformDirtyParity; // 0x614            
            uint8_t _pad0615[0x3]; // 0x615
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnLevelChanged"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iLevel; // 0x618            
            bool m_bAbilityLevelDirty; // 0x61c            
            // metadata: MNetworkEnable
            bool m_bToggleState; // 0x61d            
            uint8_t _pad061e[0x2]; // 0x61e
            // metadata: MNetworkEnable
            float m_flAbilityMuteDuration; // 0x620            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            bool m_bInAbilityPhase; // 0x624            
            uint8_t _pad0625[0x3]; // 0x625
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            float m_fCooldown; // 0x628            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "15"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1024,000000"
            float m_flCooldownLength; // 0x62c            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iManaCost; // 0x630            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            bool m_bAutoCastState; // 0x634            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            bool m_bAltCastState; // 0x635            
            bool m_bLocalAltCastState; // 0x636            
            uint8_t _pad0637[0x1]; // 0x637
            std::int32_t m_nLocalAltCastChangeSequenceNumber; // 0x638            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flChannelStartTime; // 0x63c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCastStartTime; // 0x640            
            // metadata: MNetworkEnable
            bool m_bInIndefiniteCooldown; // 0x644            
            // metadata: MNetworkEnable
            bool m_bFrozenCooldown; // 0x645            
            uint8_t _pad0646[0x2]; // 0x646
            // metadata: MNetworkEnable
            float m_flOverrideCastPoint; // 0x648            
            // metadata: MNetworkEnable
            bool m_bStolen; // 0x64c            
            // metadata: MNetworkEnable
            bool m_bStealable; // 0x64d            
            // metadata: MNetworkEnable
            bool m_bReplicated; // 0x64e            
            uint8_t _pad064f[0x1]; // 0x64f
            // metadata: MNetworkEnable
            std::int32_t m_nAbilityCurrentCharges; // 0x650            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            float m_fAbilityChargeRestoreTimeRemaining; // 0x654            
            // metadata: MNetworkEnable
            bool m_bUpgradeRecommended; // 0x658            
            uint8_t _pad0659[0x3]; // 0x659
            // metadata: MNetworkEnable
            std::int32_t m_nMaxLevelOverride; // 0x65c            
            // metadata: MNetworkEnable
            std::int32_t m_nRequiredLevelOverride; // 0x660            
            // metadata: MNetworkEnable
            std::int32_t m_nLevelsBetweenUpgradesOverride; // 0x664            
            // metadata: MNetworkEnable
            source2sdk::client::HeroFacetKey_t m_nHeroFacetKey; // 0x668            
            // metadata: MNetworkEnable
            float m_flTotalExtendedChannelTime; // 0x670            
            // metadata: MNetworkEnable
            bool m_bGrantedByFacet; // 0x674            
            // metadata: MNetworkEnable
            bool m_bReflection; // 0x675            
            uint8_t _pad0676[0x2]; // 0x676
            // metadata: MNetworkEnable
            // m_pReflectionSourceAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_pReflectionSourceAbility;
            char m_pReflectionSourceAbility[0x4]; // 0x678            
            float m_flLastCastClickTime; // 0x67c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTABaseAbility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTABaseAbility) == 0x680);
    };
};
