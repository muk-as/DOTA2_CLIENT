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
    // Size: 0x8
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct C_EnvWindShared__WindVariationEvent_t
    {
    public:
        float m_flWindAngleVariation; // 0x0        
        float m_flWindSpeedVariation; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(C_EnvWindShared__WindVariationEvent_t, m_flWindAngleVariation) == 0x0);
    static_assert(offsetof(C_EnvWindShared__WindVariationEvent_t, m_flWindSpeedVariation) == 0x4);
    
    static_assert(sizeof(C_EnvWindShared__WindVariationEvent_t) == 0x8);
};
