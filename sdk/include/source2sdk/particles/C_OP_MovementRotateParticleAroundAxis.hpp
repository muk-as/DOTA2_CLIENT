#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"

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
        // Size: 0xa08
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_MovementRotateParticleAroundAxis : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "rotation axis"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CParticleCollectionVecInput m_vecRotAxis; // 0x1c0            
            // metadata: MPropertyFriendlyName "rotation rate"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRotRate; // 0x838            
            // metadata: MPropertyFriendlyName "transform input"
            source2sdk::particleslib::CParticleTransformInput m_TransformInput; // 0x998            
            // metadata: MPropertyFriendlyName "use local space"
            bool m_bLocalSpace; // 0xa00            
            uint8_t _pad0a01[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_MovementRotateParticleAroundAxis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_MovementRotateParticleAroundAxis) == 0xa08);
    };
};
