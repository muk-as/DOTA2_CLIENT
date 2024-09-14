#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1e8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_CreateFromPlaneCache : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "local offset min"
        // metadata: MVectorIsCoordinate
        Vector m_vecOffsetMin; // 0x1c8        
        // metadata: MPropertyFriendlyName "local offset max"
        // metadata: MVectorIsCoordinate
        Vector m_vecOffsetMax; // 0x1d4        
        [[maybe_unused]] std::uint8_t pad_0x1e0[0x1]; // 0x1e0
        // metadata: MPropertyFriendlyName "set normal"
        bool m_bUseNormal; // 0x1e1        
        [[maybe_unused]] std::uint8_t pad_0x1e2[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_CreateFromPlaneCache because it is not a standard-layout class
    static_assert(sizeof(C_INIT_CreateFromPlaneCache) == 0x1e8);
};
