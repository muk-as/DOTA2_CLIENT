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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSurvivorsLootTable_CLootEntry
        {
        public:
            source2sdk::client::SurvivorsPickupID_t m_unPickupID; // 0x_            
            std::int32_t m_nMinAmount; // 0x_            
            std::int32_t m_nMaxAmount; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsLootTable_CLootEntry, m_unPickupID) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsLootTable_CLootEntry, m_nMinAmount) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsLootTable_CLootEntry, m_nMaxAmount) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsLootTable_CLootEntry) == 0x_);
    };
};
