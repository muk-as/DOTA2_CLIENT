#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsLootTable_CLootEntry.hpp"

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
        #pragma pack(push, 1)
        class CSurvivorsLootTable_CLootEntryCollection
        {
        public:
            float m_flChance; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecLootEntries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsLootTable_CLootEntry> m_vecLootEntries;
            char m_vecLootEntries[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsLootTable_CLootEntryCollection, m_flChance) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsLootTable_CLootEntryCollection, m_vecLootEntries) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsLootTable_CLootEntryCollection) == 0x_);
    };
};
