#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"

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
        // Size: 0x9a8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_MovementLoopInsideSphere : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "control point"
            std::int32_t m_nCP; // 0x1c0            
            uint8_t _pad01c4[0x4]; // 0x1c4
            // metadata: MPropertyFriendlyName "distance maximum"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flDistance; // 0x1c8            
            // metadata: MPropertyFriendlyName "component scale"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecScale; // 0x328            
            // metadata: MPropertyFriendlyName "distance squared output attribute"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nDistSqrAttr; // 0x9a0            
            uint8_t _pad09a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_MovementLoopInsideSphere because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_MovementLoopInsideSphere) == 0x9a8);
    };
};
