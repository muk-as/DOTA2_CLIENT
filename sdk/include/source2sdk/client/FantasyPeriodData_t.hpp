#pragma once
#include "source2sdk/client/FantasyPeriod_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
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
        client::FantasyPeriod_t m_unPeriod; // 0x0        
        // metadata: MPropertyDescription "What level are fantasy tablets when this is the active crafting period?"
        int32_t m_nTabletLevel; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FantasyPeriodData_t, m_unPeriod) == 0x0);
    static_assert(offsetof(FantasyPeriodData_t, m_nTabletLevel) == 0x4);
    
    static_assert(sizeof(FantasyPeriodData_t) == 0x8);
};
