#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_InitialVelocityNoise : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "absolute value"
            // metadata: MVectorIsCoordinate
            Vector m_vecAbsVal; // 0x_            
            // metadata: MPropertyFriendlyName "invert abs value"
            // metadata: MVectorIsCoordinate
            Vector m_vecAbsValInv; // 0x_            
            // metadata: MPropertyFriendlyName "spatial coordinate offset"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_vecOffsetLoc; // 0x_            
            // metadata: MPropertyFriendlyName "time coordinate offset"
            source2sdk::particleslib::CPerParticleFloatInput m_flOffset; // 0x_            
            // metadata: MPropertyFriendlyName "output minimum"
            source2sdk::particleslib::CPerParticleVecInput m_vecOutputMin; // 0x_            
            // metadata: MPropertyFriendlyName "output maximum"
            source2sdk::particleslib::CPerParticleVecInput m_vecOutputMax; // 0x_            
            // metadata: MPropertyFriendlyName "time noise coordinate scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flNoiseScale; // 0x_            
            // metadata: MPropertyFriendlyName "spatial noise coordinate scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flNoiseScaleLoc; // 0x_            
            // metadata: MPropertyFriendlyName "input local space velocity (optional)"
            // metadata: MParticleInputOptional
            source2sdk::particleslib::CParticleTransformInput m_TransformInput; // 0x_            
            // metadata: MPropertyFriendlyName "ignore delta time"
            bool m_bIgnoreDt; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_InitialVelocityNoise because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_InitialVelocityNoise) == 0x_);
    };
};
