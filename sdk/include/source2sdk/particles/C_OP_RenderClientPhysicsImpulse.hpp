#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
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
    // Size: 0x4d8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderClientPhysicsImpulse : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyFriendlyName "radius"
        particleslib::CPerParticleFloatInput m_flRadius; // 0x210        
        // metadata: MPropertyFriendlyName "magnitude"
        particleslib::CPerParticleFloatInput m_flMagnitude; // 0x370        
        // metadata: MPropertyFriendlyName "filter explosion to single simulation id"
        int32_t m_nSimIdFilter; // 0x4d0        
        [[maybe_unused]] std::uint8_t pad_0x4d4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderClientPhysicsImpulse because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderClientPhysicsImpulse) == 0x4d8);
};
