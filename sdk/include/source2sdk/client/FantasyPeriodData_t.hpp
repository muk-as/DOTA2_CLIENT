#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/FantasyPeriod_t.hpp"

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
        // Size: 0x8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct FantasyPeriodData_t
        {
        public:
            // metadata: MPropertyDescription "What Fantasy Period this data is for"
            source2sdk::client::FantasyPeriod_t m_unPeriod; // 0x0            
            // metadata: MPropertyDescription "What level are fantasy tablets when this is the active crafting period?"
            std::int32_t m_nTabletLevel; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FantasyPeriodData_t, m_unPeriod) == 0x0);
        static_assert(offsetof(source2sdk::client::FantasyPeriodData_t, m_nTabletLevel) == 0x4);
        
        static_assert(sizeof(source2sdk::client::FantasyPeriodData_t) == 0x8);
    };
};
