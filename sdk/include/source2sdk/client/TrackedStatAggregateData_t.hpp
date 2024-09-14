#pragma once
#include "source2sdk/client/ETrackedStatAggregate.hpp"
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
    // Size: 0x10
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct TrackedStatAggregateData_t
    {
    public:
        // metadata: MPropertyDescription "The stat to aggregate"
        CUtlString m_strIndividualStat; // 0x0        
        // metadata: MPropertyDescription "The aggregate function"
        client::ETrackedStatAggregate m_eAggregate; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(TrackedStatAggregateData_t, m_strIndividualStat) == 0x0);
    static_assert(offsetof(TrackedStatAggregateData_t, m_eAggregate) == 0x8);
    
    static_assert(sizeof(TrackedStatAggregateData_t) == 0x10);
};
