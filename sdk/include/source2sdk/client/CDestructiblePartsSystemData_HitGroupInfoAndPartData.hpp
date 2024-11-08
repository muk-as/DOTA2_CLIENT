#pragma once
#include "source2sdk/client/CDestructiblePartsSystemData_PartData.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
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
        // m_DestructiblePartsData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDestructiblePartsSystemData_PartData> m_DestructiblePartsData;
        char m_DestructiblePartsData[0x18]; // 0x0        
        // metadata: MPropertyStartGroup "+Hitgroup"
        // metadata: MPropertyDescription "The hitgroup this is related to."
        client::HitGroup_t m_nHitGroup; // 0x18        
        // metadata: MPropertyDescription "Do we disable the hitgroup and physics bodies tagged with said hitgroup when all sub parts are destroyed?"
        // metadata: MPropertyFriendlyName "Disable Hit Group & Remove Tagged Physics Bodies When Destroyed"
        bool m_bDisableHitGroupWhenDestroyed; // 0x1c        
        [[maybe_unused]] std::uint8_t pad_0x1d[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDestructiblePartsSystemData_HitGroupInfoAndPartData, m_DestructiblePartsData) == 0x0);
    static_assert(offsetof(CDestructiblePartsSystemData_HitGroupInfoAndPartData, m_nHitGroup) == 0x18);
    static_assert(offsetof(CDestructiblePartsSystemData_HitGroupInfoAndPartData, m_bDisableHitGroupWhenDestroyed) == 0x1c);
    
    static_assert(sizeof(CDestructiblePartsSystemData_HitGroupInfoAndPartData) == 0x20);
};
