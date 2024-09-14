#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleVRHandChoiceList_t.hpp"
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
    // Size: 0x380
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderVRHapticEvent : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyFriendlyName "haptic hand"
        particles::ParticleVRHandChoiceList_t m_nHand; // 0x210        
        // metadata: MPropertyFriendlyName "hand control point number"
        int32_t m_nOutputHandCP; // 0x214        
        // metadata: MPropertyFriendlyName "cp field"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        int32_t m_nOutputField; // 0x218        
        [[maybe_unused]] std::uint8_t pad_0x21c[0x4]; // 0x21c
        // metadata: MPropertyFriendlyName "amplitude"
        particleslib::CPerParticleFloatInput m_flAmplitude; // 0x220        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderVRHapticEvent because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderVRHapticEvent) == 0x380);
};
