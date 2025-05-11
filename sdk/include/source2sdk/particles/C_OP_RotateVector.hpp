#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
        // Size: 0x348
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RotateVector : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0            
            // metadata: MPropertyFriendlyName "rotation axis min"
            // metadata: MVectorIsCoordinate
            Vector m_vecRotAxisMin; // 0x1c4            
            // metadata: MPropertyFriendlyName "rotation axis max"
            // metadata: MVectorIsCoordinate
            Vector m_vecRotAxisMax; // 0x1d0            
            // metadata: MPropertyFriendlyName "rotation rate min"
            float m_flRotRateMin; // 0x1dc            
            // metadata: MPropertyFriendlyName "rotation rate max"
            float m_flRotRateMax; // 0x1e0            
            // metadata: MPropertyFriendlyName "normalize output"
            bool m_bNormalize; // 0x1e4            
            uint8_t _pad01e5[0x3]; // 0x1e5
            // metadata: MPropertyFriendlyName "per particle scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flScale; // 0x1e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RotateVector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RotateVector) == 0x348);
    };
};
