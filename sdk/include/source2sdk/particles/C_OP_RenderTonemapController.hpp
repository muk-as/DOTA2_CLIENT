#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"

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
        // Size: 0x220
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderTonemapController : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "tonemap level scale"
            float m_flTonemapLevel; // 0x210            
            // metadata: MPropertyFriendlyName "tonemap weight scale"
            float m_flTonemapWeight; // 0x214            
            // metadata: MPropertyFriendlyName "tonemap level"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nTonemapLevelField; // 0x218            
            // metadata: MPropertyFriendlyName "tonemap weight"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nTonemapWeightField; // 0x21c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderTonemapController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderTonemapController) == 0x220);
    };
};
