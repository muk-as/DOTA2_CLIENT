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
        // Size: 0x5b0
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
            uint8_t _pad0510[0x8]; // 0x510
            bool m_bAuxCastState; // 0x518            
            uint8_t _pad0519[0x3]; // 0x519
            std::int32_t m_iEnemyLevel; // 0x51c            
            std::int32_t m_iMaxLevel; // 0x520            
            std::int32_t m_iRequiredLevel; // 0x524            
            std::int32_t m_iLevelsBetweenUpgrades; // 0x528            
            bool m_bCanLearn; // 0x52c            
            uint8_t _pad052d[0x3]; // 0x52d
            float m_flUpgradeBlend; // 0x530            
            bool m_bUpgradedDuringQuickcastPreview; // 0x534            
            bool m_bConsiderOvershootInGetCastRange; // 0x535            
            // metadata: MNetworkEnable
            bool m_bRefCountsModifiers; // 0x536            
            // metadata: MNetworkEnable
            bool m_bHidden; // 0x537            
            bool m_bOldHidden; // 0x538            
            // metadata: MNetworkEnable
            bool m_bActivated; // 0x539            
            bool m_bOldActivated; // 0x53a            
            uint8_t _pad053b[0x1]; // 0x53b
            // metadata: MNetworkEnable
            source2sdk::client::AbilityBarType_t m_nAbilityBarType; // 0x53c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDirtyButtonsChanged"
            std::int32_t m_iDirtyButtons; // 0x540            
            bool m_bPerformDirtyParity; // 0x544            
            uint8_t _pad0545[0x3]; // 0x545
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnLevelChanged"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iLevel; // 0x548            
            bool m_bAbilityLevelDirty; // 0x54c            
            // metadata: MNetworkEnable
            bool m_bToggleState; // 0x54d            
            uint8_t _pad054e[0x2]; // 0x54e
            // metadata: MNetworkEnable
            float m_flAbilityMuteDuration; // 0x550            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            bool m_bInAbilityPhase; // 0x554            
            uint8_t _pad0555[0x3]; // 0x555
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            float m_fCooldown; // 0x558            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "15"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1024,000000"
            float m_flCooldownLength; // 0x55c            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iManaCost; // 0x560            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            bool m_bAutoCastState; // 0x564            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            bool m_bAltCastState; // 0x565            
            uint8_t _pad0566[0x2]; // 0x566
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flChannelStartTime; // 0x568            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCastStartTime; // 0x56c            
            // metadata: MNetworkEnable
            bool m_bInIndefiniteCooldown; // 0x570            
            // metadata: MNetworkEnable
            bool m_bFrozenCooldown; // 0x571            
            uint8_t _pad0572[0x2]; // 0x572
            // metadata: MNetworkEnable
            float m_flOverrideCastPoint; // 0x574            
            // metadata: MNetworkEnable
            bool m_bStolen; // 0x578            
            // metadata: MNetworkEnable
            bool m_bStealable; // 0x579            
            // metadata: MNetworkEnable
            bool m_bReplicated; // 0x57a            
            uint8_t _pad057b[0x1]; // 0x57b
            // metadata: MNetworkEnable
            std::int32_t m_nAbilityCurrentCharges; // 0x57c            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            float m_fAbilityChargeRestoreTimeRemaining; // 0x580            
            // metadata: MNetworkEnable
            bool m_bUpgradeRecommended; // 0x584            
            uint8_t _pad0585[0x3]; // 0x585
            // metadata: MNetworkEnable
            std::int32_t m_nMaxLevelOverride; // 0x588            
            // metadata: MNetworkEnable
            std::int32_t m_nRequiredLevelOverride; // 0x58c            
            // metadata: MNetworkEnable
            std::int32_t m_nLevelsBetweenUpgradesOverride; // 0x590            
            uint8_t _pad0594[0x4]; // 0x594
            // metadata: MNetworkEnable
            source2sdk::client::HeroFacetKey_t m_nHeroFacetKey; // 0x598            
            // metadata: MNetworkEnable
            float m_flTotalExtendedChannelTime; // 0x5a0            
            // metadata: MNetworkEnable
            bool m_bGrantedByFacet; // 0x5a4            
            // metadata: MNetworkEnable
            bool m_bReflection; // 0x5a5            
            uint8_t _pad05a6[0x2]; // 0x5a6
            // metadata: MNetworkEnable
            // m_pReflectionSourceAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_pReflectionSourceAbility;
            char m_pReflectionSourceAbility[0x4]; // 0x5a8            
            float m_flLastCastClickTime; // 0x5ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTABaseAbility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTABaseAbility) == 0x5b0);
    };
};
