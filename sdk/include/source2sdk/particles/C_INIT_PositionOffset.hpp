#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/CRandomNumberGeneratorParameters.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"
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
    // Size: 0xf30
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_PositionOffset : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "offset min"
        // metadata: MVectorIsCoordinate
        particleslib::CPerParticleVecInput m_OffsetMin; // 0x1c8        
        // metadata: MPropertyFriendlyName "offset max"
        // metadata: MVectorIsCoordinate
        particleslib::CPerParticleVecInput m_OffsetMax; // 0x840        
        // metadata: MPropertyFriendlyName "transform input"
        particleslib::CParticleTransformInput m_TransformInput; // 0xeb8        
        // metadata: MPropertyFriendlyName "offset in local space 0/1"
        bool m_bLocalCoords; // 0xf20        
        // metadata: MPropertyFriendlyName "offset proportional to radius 0/1"
        bool m_bProportional; // 0xf21        
        [[maybe_unused]] std::uint8_t pad_0xf22[0x2]; // 0xf22
        // metadata: MPropertyFriendlyName "Random number generator controls"
        particles::CRandomNumberGeneratorParameters m_randomnessParameters; // 0xf24        
        [[maybe_unused]] std::uint8_t pad_0xf2c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_PositionOffset because it is not a standard-layout class
    static_assert(sizeof(C_INIT_PositionOffset) == 0xf30);
};
