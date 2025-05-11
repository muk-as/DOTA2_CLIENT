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
        class C_OP_RenderFlattenGrass : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "flattening strength"
            float m_flFlattenStrength; // 0x210            
            // metadata: MPropertyFriendlyName "strength field override"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nStrengthFieldOverride; // 0x214            
            // metadata: MPropertyFriendlyName "radius scale"
            float m_flRadiusScale; // 0x218            
            uint8_t _pad021c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderFlattenGrass because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderFlattenGrass) == 0x220);
    };
};
