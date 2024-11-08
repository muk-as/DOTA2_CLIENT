#pragma once
#include "source2sdk/client/CSurvivorsLootTable__CLootEntry.hpp"
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
    #pragma pack(push, 1)
    class CSurvivorsLootTable__CLootEntryCollection
    {
    public:
        float m_flChance; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // m_vecLootEntries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CSurvivorsLootTable__CLootEntry> m_vecLootEntries;
        char m_vecLootEntries[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsLootTable__CLootEntryCollection, m_flChance) == 0x0);
    static_assert(offsetof(CSurvivorsLootTable__CLootEntryCollection, m_vecLootEntries) == 0x8);
    
    static_assert(sizeof(CSurvivorsLootTable__CLootEntryCollection) == 0x20);
};
