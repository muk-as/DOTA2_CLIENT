#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particleslib/CParticleInput.hpp"
#include "source2sdk/particleslib/ParticleModelType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particleslib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyCustomEditor "ModelInput()"
        // static metadata: MClassIsParticleModel
        // static metadata: MParticleCustomFieldDefaultValue
        #pragma pack(push, 1)
        class CParticleModelInput : public source2sdk::particleslib::CParticleInput
        {
        public:
            source2sdk::particleslib::ParticleModelType_t m_nType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CParticleNamedValueRef m_NamedValue; // 0x_            
            std::int32_t m_nControlPoint; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CParticleModelInput because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particleslib::CParticleModelInput) == 0x_);
    };
};
