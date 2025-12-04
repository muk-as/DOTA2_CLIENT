#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ETrackedStatAggregate.hpp"

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
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct TrackedStatAggregateData_t
        {
        public:
            // metadata: MPropertyDescription "The stat to aggregate"
            CUtlString m_strIndividualStat; // 0x_            
            // metadata: MPropertyDescription "The aggregate function"
            source2sdk::client::ETrackedStatAggregate m_eAggregate; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::TrackedStatAggregateData_t, m_strIndividualStat) == 0x_);
        static_assert(offsetof(source2sdk::client::TrackedStatAggregateData_t, m_eAggregate) == 0x_);
        
        static_assert(sizeof(source2sdk::client::TrackedStatAggregateData_t) == 0x_);
    };
};
