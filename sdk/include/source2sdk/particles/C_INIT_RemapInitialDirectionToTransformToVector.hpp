#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x250
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_RemapInitialDirectionToTransformToVector : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "transform input"
        particleslib::CParticleTransformInput m_TransformInput; // 0x1c8        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x230        
        // metadata: MPropertyFriendlyName "scale factor"
        float m_flScale; // 0x234        
        // metadata: MPropertyFriendlyName "offset rotation"
        float m_flOffsetRot; // 0x238        
        // metadata: MPropertyFriendlyName "offset axis"
        // metadata: MVectorIsCoordinate
        Vector m_vecOffsetAxis; // 0x23c        
        // metadata: MPropertyFriendlyName "normalize"
        bool m_bNormalize; // 0x248        
        [[maybe_unused]] std::uint8_t pad_0x249[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_RemapInitialDirectionToTransformToVector because it is not a standard-layout class
    static_assert(sizeof(C_INIT_RemapInitialDirectionToTransformToVector) == 0x250);
};
