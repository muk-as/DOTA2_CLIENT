#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleControlPointAxis_t.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
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
    // Size: 0x238
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_NormalAlignToCP : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "input"
        particleslib::CParticleTransformInput m_transformInput; // 0x1c8        
        // metadata: MPropertyFriendlyName "control point axis"
        particles::ParticleControlPointAxis_t m_nControlPointAxis; // 0x230        
        [[maybe_unused]] std::uint8_t pad_0x234[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_NormalAlignToCP because it is not a standard-layout class
    static_assert(sizeof(C_INIT_NormalAlignToCP) == 0x238);
};
