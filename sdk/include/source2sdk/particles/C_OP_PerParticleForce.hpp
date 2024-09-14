#pragma once
#include "source2sdk/particles/CParticleFunctionForce.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
    // Size: 0x9b0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_PerParticleForce : public particles::CParticleFunctionForce
    {
    public:
        // metadata: MPropertyFriendlyName "force scale"
        particleslib::CPerParticleFloatInput m_flForceScale; // 0x1d0        
        // metadata: MPropertyFriendlyName "force to apply"
        // metadata: MVectorIsCoordinate
        particleslib::CPerParticleVecInput m_vForce; // 0x330        
        // metadata: MPropertyFriendlyName "local space control point"
        int32_t m_nCP; // 0x9a8        
        [[maybe_unused]] std::uint8_t pad_0x9ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_PerParticleForce because it is not a standard-layout class
    static_assert(sizeof(C_OP_PerParticleForce) == 0x9b0);
};
