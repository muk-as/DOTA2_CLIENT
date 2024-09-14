#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
    // Size: 0x220
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderFlattenGrass : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyFriendlyName "flattening strength"
        float m_flFlattenStrength; // 0x210        
        // metadata: MPropertyFriendlyName "strength field override"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nStrengthFieldOverride; // 0x214        
        // metadata: MPropertyFriendlyName "radius scale"
        float m_flRadiusScale; // 0x218        
        [[maybe_unused]] std::uint8_t pad_0x21c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderFlattenGrass because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderFlattenGrass) == 0x220);
};
