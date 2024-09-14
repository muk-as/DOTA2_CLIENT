#pragma once
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
    // Size: 0x4
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
        uint32_t unKillEaterEvent; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(TrackedStatKillEaterData_t, unKillEaterEvent) == 0x0);
    
    static_assert(sizeof(TrackedStatKillEaterData_t) == 0x4);
};
