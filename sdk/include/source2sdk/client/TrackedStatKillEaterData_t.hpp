#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct TrackedStatKillEaterData_t
        {
        public:
            // metadata: MPropertyDescription "the kill eater id"
            std::uint32_t unKillEaterEvent; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::TrackedStatKillEaterData_t, unKillEaterEvent) == 0x_);
        
        static_assert(sizeof(source2sdk::client::TrackedStatKillEaterData_t) == 0x_);
    };
};
