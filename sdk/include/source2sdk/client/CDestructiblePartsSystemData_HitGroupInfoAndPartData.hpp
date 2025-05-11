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
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MModelGameData
        // static metadata: MFgdHelper
        #pragma pack(push, 1)
        class CDestructiblePartsSystemData_HitGroupInfoAndPartData
        {
        public:
            // metadata: MPropertyDescription "Data for this destructible part."
            // metadata: MPropertyAutoExpandSelf
            // m_PartsData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDestructiblePartsSystemData_PartData> m_PartsData;
            char m_PartsData[0x18]; // 0x0            
            // metadata: MPropertyStartGroup "+Hitgroup"
            // metadata: MPropertyDescription "The hitgroup this is related to."
            source2sdk::client::HitGroup_t m_nHitGroup; // 0x18            
            // metadata: MPropertyDescription "Do we disable the hitgroup and physics bodies tagged with said hitgroup when all sub parts are destroyed?"
            // metadata: MPropertyFriendlyName "Disable Hit Group & Remove Tagged Physics Bodies When Destroyed"
            bool m_bDisableHitGroupWhenDestroyed; // 0x1c            
            uint8_t _pad001d[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndPartData, m_PartsData) == 0x0);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndPartData, m_nHitGroup) == 0x18);
        static_assert(offsetof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndPartData, m_bDisableHitGroupWhenDestroyed) == 0x1c);
        
        static_assert(sizeof(source2sdk::client::CDestructiblePartsSystemData_HitGroupInfoAndPartData) == 0x20);
    };
};
