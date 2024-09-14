#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
    // Size: 0x7c0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_CreateInEpitrochoid : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "first dimension 0-2 (-1 disables)"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        int32_t m_nComponent1; // 0x1c8        
        // metadata: MPropertyFriendlyName "second dimension 0-2 (-1 disables)"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        int32_t m_nComponent2; // 0x1cc        
        // metadata: MPropertyFriendlyName "input transform"
        particleslib::CParticleTransformInput m_TransformInput; // 0x1d0        
        // metadata: MPropertyFriendlyName "particle density"
        particleslib::CPerParticleFloatInput m_flParticleDensity; // 0x238        
        // metadata: MPropertyFriendlyName "point offset"
        particleslib::CPerParticleFloatInput m_flOffset; // 0x398        
        // metadata: MPropertyFriendlyName "radius 1"
        particleslib::CPerParticleFloatInput m_flRadius1; // 0x4f8        
        // metadata: MPropertyFriendlyName "radius 2"
        particleslib::CPerParticleFloatInput m_flRadius2; // 0x658        
        // metadata: MPropertyFriendlyName "use particle count instead of creation time"
        bool m_bUseCount; // 0x7b8        
        // metadata: MPropertyFriendlyName "local space"
        bool m_bUseLocalCoords; // 0x7b9        
        // metadata: MPropertyFriendlyName "offset from existing position"
        bool m_bOffsetExistingPos; // 0x7ba        
        [[maybe_unused]] std::uint8_t pad_0x7bb[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_CreateInEpitrochoid because it is not a standard-layout class
    static_assert(sizeof(C_INIT_CreateInEpitrochoid) == 0x7c0);
};
