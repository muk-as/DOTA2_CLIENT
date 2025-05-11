#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
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
        class C_INIT_VelocityRadialRandom : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x1c8            
            uint8_t _pad01cc[0x4]; // 0x1cc
            // metadata: MPropertyFriendlyName "random speed min"
            source2sdk::particleslib::CPerParticleFloatInput m_fSpeedMin; // 0x1d0            
            // metadata: MPropertyFriendlyName "random speed max"
            source2sdk::particleslib::CPerParticleFloatInput m_fSpeedMax; // 0x330            
            // metadata: MPropertyFriendlyName "local space scale"
            Vector m_vecLocalCoordinateSystemSpeedScale; // 0x490            
            uint8_t _pad049c[0x1]; // 0x49c
            // metadata: MPropertyFriendlyName "ignore delta time"
            bool m_bIgnoreDelta; // 0x49d            
            uint8_t _pad049e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_VelocityRadialRandom because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_VelocityRadialRandom) == 0x4a0);
    };
};
