#pragma once
#include "source2sdk/particleslib/CParticleInput.hpp"
#include "source2sdk/particleslib/ParticleTransformType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x68
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyCustomEditor "TransformInput()"
    // static metadata: MClassIsParticleTransform
    // static metadata: MParticleCustomFieldDefaultValue
    #pragma pack(push, 1)
    class CParticleTransformInput : public particleslib::CParticleInput
    {
    public:
        particleslib::ParticleTransformType_t m_nType; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4]; // 0x14
        CParticleNamedValueRef m_NamedValue; // 0x18        
        bool m_bFollowNamedValue; // 0x58        
        bool m_bSupportsDisabled; // 0x59        
        bool m_bUseOrientation; // 0x5a        
        [[maybe_unused]] std::uint8_t pad_0x5b[0x1]; // 0x5b
        int32_t m_nControlPoint; // 0x5c        
        int32_t m_nControlPointRangeMax; // 0x60        
        float m_flEndCPGrowthTime; // 0x64        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CParticleTransformInput because it is not a standard-layout class
    static_assert(sizeof(CParticleTransformInput) == 0x68);
};
