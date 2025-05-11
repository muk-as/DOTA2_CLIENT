#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SurvivorsPickupID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSurvivorsLootTable_CLootEntry
        {
        public:
            source2sdk::client::SurvivorsPickupID_t m_unPickupID; // 0x0            
            std::int32_t m_nMinAmount; // 0x4            
            std::int32_t m_nMaxAmount; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsLootTable_CLootEntry, m_unPickupID) == 0x0);
        static_assert(offsetof(source2sdk::client::CSurvivorsLootTable_CLootEntry, m_nMinAmount) == 0x4);
        static_assert(offsetof(source2sdk::client::CSurvivorsLootTable_CLootEntry, m_nMaxAmount) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsLootTable_CLootEntry) == 0xc);
    };
};
