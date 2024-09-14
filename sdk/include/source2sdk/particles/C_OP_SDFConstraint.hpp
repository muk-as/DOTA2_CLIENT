#pragma once
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"
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
    // Size: 0x488
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SDFConstraint : public particles::CParticleFunctionConstraint
    {
    public:
        // metadata: MPropertyFriendlyName "min dist to sdf"
        particleslib::CParticleCollectionFloatInput m_flMinDist; // 0x1c0        
        // metadata: MPropertyFriendlyName "max dist to sdf"
        particleslib::CParticleCollectionFloatInput m_flMaxDist; // 0x320        
        // metadata: MPropertyFriendlyName "Max # of iterations"
        int32_t m_nMaxIterations; // 0x480        
        [[maybe_unused]] std::uint8_t pad_0x484[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SDFConstraint because it is not a standard-layout class
    static_assert(sizeof(C_OP_SDFConstraint) == 0x488);
};
