#pragma once
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
    // Size: 0x168
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FloatInputMaterialVariable_t
    {
    public:
        // metadata: MPropertyFriendlyName "material variable"
        CUtlString m_strVariable; // 0x0        
        // metadata: MPropertyFriendlyName "input"
        particleslib::CParticleCollectionFloatInput m_flInput; // 0x8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in FloatInputMaterialVariable_t because it is not a standard-layout class
    static_assert(sizeof(FloatInputMaterialVariable_t) == 0x168);
};
