#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
    // Size: 0x4a0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_VelocityRadialRandom : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1cc[0x4]; // 0x1cc
        // metadata: MPropertyFriendlyName "random speed min"
        particleslib::CPerParticleFloatInput m_fSpeedMin; // 0x1d0        
        // metadata: MPropertyFriendlyName "random speed max"
        particleslib::CPerParticleFloatInput m_fSpeedMax; // 0x330        
        // metadata: MPropertyFriendlyName "local space scale"
        Vector m_vecLocalCoordinateSystemSpeedScale; // 0x490        
        [[maybe_unused]] std::uint8_t pad_0x49c[0x1]; // 0x49c
        // metadata: MPropertyFriendlyName "ignore delta time"
        bool m_bIgnoreDelta; // 0x49d        
        [[maybe_unused]] std::uint8_t pad_0x49e[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_VelocityRadialRandom because it is not a standard-layout class
    static_assert(sizeof(C_INIT_VelocityRadialRandom) == 0x4a0);
};
