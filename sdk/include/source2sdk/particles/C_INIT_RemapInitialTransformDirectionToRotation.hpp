#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
        // Size: 0x240
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_RemapInitialTransformDirectionToRotation : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "transform input"
            source2sdk::particleslib::CParticleTransformInput m_TransformInput; // 0x1c8            
            // metadata: MPropertyFriendlyName "rotation field"
            // metadata: MPropertyAttributeChoiceName "particlefield_rotation"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x230            
            // metadata: MPropertyFriendlyName "offset rotation"
            float m_flOffsetRot; // 0x234            
            // metadata: MPropertyFriendlyName "control point axis"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
            std::int32_t m_nComponent; // 0x238            
            uint8_t _pad023c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RemapInitialTransformDirectionToRotation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RemapInitialTransformDirectionToRotation) == 0x240);
    };
};
