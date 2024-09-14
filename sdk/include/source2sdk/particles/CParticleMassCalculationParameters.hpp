#pragma once
#include "source2sdk/particles/ParticleMassMode_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
    // Size: 0x428
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CParticleMassCalculationParameters
    {
    public:
        // metadata: MPropertyFriendlyName "Radius calculation mode"
        particles::ParticleMassMode_t m_nMassMode; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // metadata: MPropertyFriendlyName "Radius input"
        particleslib::CPerParticleFloatInput m_flRadius; // 0x8        
        // metadata: MPropertyFriendlyName "Nominal radius value"
        particleslib::CPerParticleFloatInput m_flNominalRadius; // 0x168        
        // metadata: MPropertyFriendlyName "Scale to apply to result"
        particleslib::CPerParticleFloatInput m_flScale; // 0x2c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CParticleMassCalculationParameters because it is not a standard-layout class
    static_assert(sizeof(CParticleMassCalculationParameters) == 0x428);
};
