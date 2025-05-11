#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/CRandomNumberGeneratorParameters.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"

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
        // Size: 0x1190
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_VelocityRandom : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x1c8            
            uint8_t _pad01cc[0x4]; // 0x1cc
            // metadata: MPropertyFriendlyName "random speed min"
            source2sdk::particleslib::CPerParticleFloatInput m_fSpeedMin; // 0x1d0            
            // metadata: MPropertyFriendlyName "random speed max"
            source2sdk::particleslib::CPerParticleFloatInput m_fSpeedMax; // 0x330            
            // metadata: MPropertyFriendlyName "speed in local coordinate system min"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x490            
            // metadata: MPropertyFriendlyName "speed in local coordinate system max"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0xb08            
            // metadata: MPropertyFriendlyName "Ignore delta time (RenderTrails)"
            bool m_bIgnoreDT; // 0x1180            
            uint8_t _pad1181[0x3]; // 0x1181
            // metadata: MPropertyFriendlyName "Random number generator controls"
            source2sdk::particles::CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1184            
            uint8_t _pad118c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_VelocityRandom because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_VelocityRandom) == 0x1190);
    };
};
