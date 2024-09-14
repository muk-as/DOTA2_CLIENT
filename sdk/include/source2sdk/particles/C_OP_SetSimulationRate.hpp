#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
    // Size: 0x328
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetSimulationRate : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "simulation timescale"
        particleslib::CParticleCollectionFloatInput m_flSimulationScale; // 0x1c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetSimulationRate because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetSimulationRate) == 0x328);
};
