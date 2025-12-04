#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionForce.hpp"
#include "source2sdk/particles/ParticleDirectionNoiseType_t.hpp"
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
        class C_OP_CurlNoiseForce : public source2sdk::particles::CParticleFunctionForce
        {
        public:
            // metadata: MPropertyFriendlyName "noise type"
            source2sdk::particles::ParticleDirectionNoiseType_t m_nNoiseType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "noise frequency"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_vecNoiseFreq; // 0x_            
            // metadata: MPropertyFriendlyName "noise amplitude"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_vecNoiseScale; // 0x_            
            // metadata: MPropertyFriendlyName "offset"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_vecOffset; // 0x_            
            // metadata: MPropertyFriendlyName "offset rate"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_vecOffsetRate; // 0x_            
            // metadata: MPropertyFriendlyName "worley seed"
            source2sdk::particleslib::CPerParticleFloatInput m_flWorleySeed; // 0x_            
            // metadata: MPropertyFriendlyName "worley jitter"
            source2sdk::particleslib::CPerParticleFloatInput m_flWorleyJitter; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_CurlNoiseForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_CurlNoiseForce) == 0x_);
    };
};
