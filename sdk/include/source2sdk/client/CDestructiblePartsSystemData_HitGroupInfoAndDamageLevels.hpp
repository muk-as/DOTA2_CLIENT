#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDestructiblePartsSystemData_DamageLevel.hpp"
#include "source2sdk/client/HitGroup_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MModelGameData
        // static metadata: MFgdHelper
        #pragma pack(push, 1)
        class CDestructiblePartsSystemData_HitGroupInfoAndDamageLevels
        {
        public:
            // metadata: MPropertySuppressField
            CGlobalSymbol m_DebugName; // 0x_            
            // metadata: MPropertyStartGroup "+Hitgroup"
            // metadata: MPropertyDescription "The hitgroup this is related to."
            source2sdk::client::HitGroup_t m_nHitGroup; // 0x_            
            // metadata: MPropertyDescription "Do we disable the hitgroup and physics bodies tagged with said hitgroup when all damage levels are destroyed?"
            // metadata: MPropertyFriendlyName "Disable Hit Group & Remove Tagged Physics Bodies When Destroyed"
            bool m_bDisableHitGroupWhenDestroyed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Other hitgroups to destroy when this one is fully destroyed.  Useful for chaining destructibles like blowing up the lower arm when the upper arm dies."
            // m_nOtherHitgroupsToDestroyWhenFullyDestructed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HitGroup_t> m_nOtherHitgroupsToDestroyWhenFullyDestructed;
            char m_nOtherHitgroupsToDestroyWhenFullyDestructed[0x_]; // 0x_            
            // metadata: MPropertyStartGroup "+Gibbing"
            // metadata: MPropertyDescription "Only allow this part to be destroyed when gibbing.  Useful for special case gibbing breakables like torsos."
            bool m_bOnlyDestroyWhenGibbing; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyStartGroup "+Model Setup/+Body Group"
            // metadata: MPropertyDescription "Body group to set when this damage level is broken."
            // metadata: MPropertyAttributeEditor "ModelDocPicker( 4 )"
            CGlobalSymbol m_sBodyGroupName; // 0x_            
            // metadata: MPropertyDescription "The various damage levels for this hitgroup."
            // metadata: MPropertyFriendlyName "Damage Levels"
            // metadata: MPropertyAutoExpandSelf
            // m_DamageLevels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDestructiblePartsSystemData_DamageLevel> m_DamageLevels;
            char m_DamageLevels[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndDamageLevels, m_DebugName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndDamageLevels, m_nHitGroup) == 0x_);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndDamageLevels, m_bDisableHitGroupWhenDestroyed) == 0x_);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndDamageLevels, m_nOtherHitgroupsToDestroyWhenFullyDestructed) == 0x_);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndDamageLevels, m_bOnlyDestroyWhenGibbing) == 0x_);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndDamageLevels, m_sBodyGroupName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndDamageLevels, m_DamageLevels) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndDamageLevels) == 0x_);
    };
};
