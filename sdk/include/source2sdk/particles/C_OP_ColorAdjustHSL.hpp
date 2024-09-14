#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_ColorAdjustHSL : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "hue adjust"
        particleslib::CPerParticleFloatInput m_flHueAdjust; // 0x1c0        
        // metadata: MPropertyFriendlyName "saturation adjust"
        particleslib::CPerParticleFloatInput m_flSaturationAdjust; // 0x320        
        // metadata: MPropertyFriendlyName "lightness adjust"
        particleslib::CPerParticleFloatInput m_flLightnessAdjust; // 0x480        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_ColorAdjustHSL because it is not a standard-layout class
    static_assert(sizeof(C_OP_ColorAdjustHSL) == 0x5e0);
};
