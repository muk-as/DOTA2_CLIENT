#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDestructiblePartsSystemData_PartData.hpp"
#include "source2sdk/client/HitGroup_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x48
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MModelGameData
        // static metadata: MFgdHelper
        #pragma pack(push, 1)
        class CDestructiblePartsSystemData_HitGroupInfoAndPartData
        {
        public:
            // metadata: MPropertySuppressField
            CGlobalSymbol m_DebugName; // 0x0            
            // metadata: MPropertyStartGroup "+Hitgroup"
            // metadata: MPropertyDescription "The hitgroup this is related to."
            source2sdk::client::HitGroup_t m_nHitGroup; // 0x8            
            // metadata: MPropertyDescription "Do we disable the hitgroup and physics bodies tagged with said hitgroup when all sub parts are destroyed?"
            // metadata: MPropertyFriendlyName "Disable Hit Group & Remove Tagged Physics Bodies When Destroyed"
            bool m_bDisableHitGroupWhenDestroyed; // 0xc            
            uint8_t _pad000d[0x3]; // 0xd
            // metadata: MPropertyDescription "Other hitgroups to destroy when this one is fully destroyed.  Useful for chaining destructibles like blowing up the lower arm when the upper arm dies."
            // m_nOtherHitgroupsToDestroyWhenFullyDestructed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HitGroup_t> m_nOtherHitgroupsToDestroyWhenFullyDestructed;
            char m_nOtherHitgroupsToDestroyWhenFullyDestructed[0x18]; // 0x10            
            // metadata: MPropertyStartGroup "+Gibbing"
            // metadata: MPropertyDescription "Only allow this part to be destroyed when gibbing.  Useful for special case gibbing breakables like torsos."
            bool m_bOnlyDestroyWhenGibbing; // 0x28            
            uint8_t _pad0029[0x7]; // 0x29
            // metadata: MPropertyStartGroup "+Damage Levels"
            // metadata: MPropertyDescription "The various damage levels for this hitgroup."
            // metadata: MPropertyFriendlyName "Damage Levels"
            // metadata: MPropertyAutoExpandSelf
            // m_PartsData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDestructiblePartsSystemData_PartData> m_PartsData;
            char m_PartsData[0x18]; // 0x30            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndPartData, m_DebugName) == 0x0);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndPartData, m_nHitGroup) == 0x8);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndPartData, m_bDisableHitGroupWhenDestroyed) == 0xc);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndPartData, m_nOtherHitgroupsToDestroyWhenFullyDestructed) == 0x10);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndPartData, m_bOnlyDestroyWhenGibbing) == 0x28);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndPartData, m_PartsData) == 0x30);
        
        static_assert(sizeof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndPartData) == 0x48);
    };
};
