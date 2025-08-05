#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particleslib/CParticleRemapFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x4b0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ScreenSpaceDistanceToEdge : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0            
            uint8_t _pad01c4[0x4]; // 0x1c4
            // metadata: MPropertyFriendlyName "max distance from edge"
            source2sdk::particleslib::CPerParticleFloatInput m_flMaxDistFromEdge; // 0x1c8            
            // metadata: MPropertyFriendlyName "output"
            source2sdk::particleslib::CParticleRemapFloatInput m_flOutputRemap; // 0x328            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x488            
            uint8_t _pad048c[0x24];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ScreenSpaceDistanceToEdge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ScreenSpaceDistanceToEdge) == 0x4b0);
    };
};
