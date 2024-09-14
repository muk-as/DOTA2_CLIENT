#pragma once
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"
#include "source2sdk/particles/CPathParameters.hpp"
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
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x220
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_ConstrainDistanceToPath : public particles::CParticleFunctionConstraint
    {
    public:
        // metadata: MPropertyFriendlyName "minimum distance"
        float m_fMinDistance; // 0x1c0        
        // metadata: MPropertyFriendlyName "maximum distance"
        float m_flMaxDistance0; // 0x1c4        
        // metadata: MPropertyFriendlyName "maximum distance middle"
        float m_flMaxDistanceMid; // 0x1c8        
        // metadata: MPropertyFriendlyName "maximum distance end"
        float m_flMaxDistance1; // 0x1cc        
        particles::CPathParameters m_PathParameters; // 0x1d0        
        // metadata: MPropertyFriendlyName "travel time"
        float m_flTravelTime; // 0x210        
        // metadata: MPropertyFriendlyName "travel time scale field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldScale; // 0x214        
        // metadata: MPropertyFriendlyName "manual time placement field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nManualTField; // 0x218        
        [[maybe_unused]] std::uint8_t pad_0x21c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_ConstrainDistanceToPath because it is not a standard-layout class
    static_assert(sizeof(C_OP_ConstrainDistanceToPath) == 0x220);
};
