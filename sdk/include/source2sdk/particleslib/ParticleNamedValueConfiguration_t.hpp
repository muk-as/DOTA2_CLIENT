#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/ParticleAttachment_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ParticleNamedValueConfiguration_t
        {
        public:
            CUtlString m_ConfigName; // 0x_            
            KeyValues3 m_ConfigValue; // 0x_            
            CUtlString m_BoundValuePath; // 0x_            
            source2sdk::animationsystem::ParticleAttachment_t m_iAttachType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strEntityScope; // 0x_            
            CUtlString m_strAttachmentName; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueConfiguration_t, m_ConfigName) == 0x_);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueConfiguration_t, m_ConfigValue) == 0x_);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueConfiguration_t, m_BoundValuePath) == 0x_);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueConfiguration_t, m_iAttachType) == 0x_);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueConfiguration_t, m_strEntityScope) == 0x_);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueConfiguration_t, m_strAttachmentName) == 0x_);
        
        static_assert(sizeof(source2sdk::particleslib::ParticleNamedValueConfiguration_t) == 0x_);
    };
};
