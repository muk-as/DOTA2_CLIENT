#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_RingWave : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "input transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformInput; // 0x_            
            // metadata: MPropertyFriendlyName "even distribution count"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flParticlesPerOrbit; // 0x_            
            // metadata: MPropertyFriendlyName "initial radius"
            source2sdk::particleslib::CPerParticleFloatInput m_flInitialRadius; // 0x_            
            // metadata: MPropertyFriendlyName "thickness"
            source2sdk::particleslib::CPerParticleFloatInput m_flThickness; // 0x_            
            // metadata: MPropertyFriendlyName "min initial speed"
            source2sdk::particleslib::CPerParticleFloatInput m_flInitialSpeedMin; // 0x_            
            // metadata: MPropertyFriendlyName "max initial speed"
            source2sdk::particleslib::CPerParticleFloatInput m_flInitialSpeedMax; // 0x_            
            // metadata: MPropertyFriendlyName "roll"
            source2sdk::particleslib::CPerParticleFloatInput m_flRoll; // 0x_            
            // metadata: MPropertyFriendlyName "pitch"
            source2sdk::particleslib::CPerParticleFloatInput m_flPitch; // 0x_            
            // metadata: MPropertyFriendlyName "yaw"
            source2sdk::particleslib::CPerParticleFloatInput m_flYaw; // 0x_            
            // metadata: MPropertyFriendlyName "even distribution"
            bool m_bEvenDistribution; // 0x_            
            // metadata: MPropertyFriendlyName "XY velocity only"
            bool m_bXYVelocityOnly; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RingWave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RingWave) == 0x_);
    };
};
