#pragma once
#include "source2sdk/particles/CParticleFunctionForce.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
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
    // Size: 0x518
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_AttractToControlPoint : public particles::CParticleFunctionForce
    {
    public:
        // metadata: MPropertyFriendlyName "component scale"
        // metadata: MVectorIsCoordinate
        Vector m_vecComponentScale; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1dc[0x4]; // 0x1dc
        // metadata: MPropertyFriendlyName "amount of force (or Max Force)"
        particleslib::CPerParticleFloatInput m_fForceAmount; // 0x1e0        
        // metadata: MPropertyFriendlyName "falloff power"
        float m_fFalloffPower; // 0x340        
        [[maybe_unused]] std::uint8_t pad_0x344[0x4]; // 0x344
        // metadata: MPropertyFriendlyName "input position transform"
        particleslib::CParticleTransformInput m_TransformInput; // 0x348        
        // metadata: MPropertyFriendlyName "Min Pullforce"
        particleslib::CPerParticleFloatInput m_fForceAmountMin; // 0x3b0        
        // metadata: MPropertyFriendlyName "Apply Min Pullforce"
        bool m_bApplyMinForce; // 0x510        
        [[maybe_unused]] std::uint8_t pad_0x511[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_AttractToControlPoint because it is not a standard-layout class
    static_assert(sizeof(C_OP_AttractToControlPoint) == 0x518);
};
