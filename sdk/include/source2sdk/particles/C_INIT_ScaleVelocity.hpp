#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
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
    // Size: 0x840
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_ScaleVelocity : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "velocity scale"
        // metadata: MVectorIsCoordinate
        particleslib::CParticleCollectionVecInput m_vecScale; // 0x1c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_ScaleVelocity because it is not a standard-layout class
    static_assert(sizeof(C_INIT_ScaleVelocity) == 0x840);
};
