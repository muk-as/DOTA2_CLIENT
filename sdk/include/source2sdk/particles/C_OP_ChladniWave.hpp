#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
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
        // Size: 0x1448
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ChladniWave : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0            
            uint8_t _pad01c4[0x4]; // 0x1c4
            // metadata: MPropertyFriendlyName "wave minimum"
            source2sdk::particleslib::CPerParticleFloatInput m_flInputMin; // 0x1c8            
            // metadata: MPropertyFriendlyName "wave maximum"
            source2sdk::particleslib::CPerParticleFloatInput m_flInputMax; // 0x328            
            // metadata: MPropertyFriendlyName "output minimum"
            source2sdk::particleslib::CPerParticleFloatInput m_flOutputMin; // 0x488            
            // metadata: MPropertyFriendlyName "output maximum"
            source2sdk::particleslib::CPerParticleFloatInput m_flOutputMax; // 0x5e8            
            // metadata: MPropertyFriendlyName "wave length"
            source2sdk::particleslib::CPerParticleVecInput m_vecWaveLength; // 0x748            
            // metadata: MPropertyFriendlyName "harmonics"
            source2sdk::particleslib::CPerParticleVecInput m_vecHarmonics; // 0xdc0            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x1438            
            // metadata: MPropertyFriendlyName "local space control point"
            std::int32_t m_nLocalSpaceControlPoint; // 0x143c            
            // metadata: MPropertyFriendlyName "3D"
            bool m_b3D; // 0x1440            
            uint8_t _pad1441[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ChladniWave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ChladniWave) == 0x1448);
    };
};
