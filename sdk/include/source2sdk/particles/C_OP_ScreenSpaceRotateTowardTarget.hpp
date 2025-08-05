#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particleslib/CParticleRemapFloatInput.hpp"
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
        // Size: 0xb00
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ScreenSpaceRotateTowardTarget : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "target position"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_vecTargetPosition; // 0x1c0            
            // metadata: MPropertyFriendlyName "output"
            source2sdk::particleslib::CParticleRemapFloatInput m_flOutputRemap; // 0x838            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x998            
            uint8_t _pad099c[0x4]; // 0x99c
            // metadata: MPropertyFriendlyName "screen edge alignment distance"
            source2sdk::particleslib::CPerParticleFloatInput m_flScreenEdgeAlignmentDistance; // 0x9a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ScreenSpaceRotateTowardTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ScreenSpaceRotateTowardTarget) == 0xb00);
    };
};
