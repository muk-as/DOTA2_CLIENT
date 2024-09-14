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
    // Size: 0x1d8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_RandomRadius : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "radius min"
        // metadata: MPropertyAttributeRange "biased 0 500"
        float m_flRadiusMin; // 0x1c8        
        // metadata: MPropertyFriendlyName "radius max"
        // metadata: MPropertyAttributeRange "biased 0 500"
        float m_flRadiusMax; // 0x1cc        
        // metadata: MPropertyFriendlyName "radius random exponent"
        // metadata: MPropertyAttributeRange "-2 2"
        float m_flRadiusRandExponent; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1d4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_RandomRadius because it is not a standard-layout class
    static_assert(sizeof(C_INIT_RandomRadius) == 0x1d8);
};
