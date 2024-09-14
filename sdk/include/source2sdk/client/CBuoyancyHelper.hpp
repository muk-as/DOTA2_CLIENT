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
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x20
    // Has VTable
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CBuoyancyHelper
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x18]; // 0x0
        float m_flFluidDensity; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
        
        // Datamap fields:
        // void m_pController; // 0x8
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CBuoyancyHelper, m_flFluidDensity) == 0x18);
    
    static_assert(sizeof(CBuoyancyHelper) == 0x20);
};
