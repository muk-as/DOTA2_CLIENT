#pragma once
#include "source2sdk/particleslib/CParticleInput.hpp"
#include "source2sdk/particleslib/ParticleModelType_t.hpp"
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
    // Size: 0x60
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyCustomEditor "ModelInput()"
    // static metadata: MClassIsParticleModel
    // static metadata: MParticleCustomFieldDefaultValue
    #pragma pack(push, 1)
    class CParticleModelInput : public particleslib::CParticleInput
    {
    public:
        particleslib::ParticleModelType_t m_nType; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4]; // 0x14
        CParticleNamedValueRef m_NamedValue; // 0x18        
        int32_t m_nControlPoint; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x5c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CParticleModelInput because it is not a standard-layout class
    static_assert(sizeof(CParticleModelInput) == 0x60);
};
