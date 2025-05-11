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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ParticleNamedValueConfiguration_t
        {
        public:
            CUtlString m_ConfigName; // 0x0            
            KeyValues3 m_ConfigValue; // 0x8            
            source2sdk::animationsystem::ParticleAttachment_t m_iAttachType; // 0x18            
            uint8_t _pad001c[0x4]; // 0x1c
            CUtlString m_BoundEntityPath; // 0x20            
            CUtlString m_strEntityScope; // 0x28            
            CUtlString m_strAttachmentName; // 0x30            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueConfiguration_t, m_ConfigName) == 0x0);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueConfiguration_t, m_ConfigValue) == 0x8);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueConfiguration_t, m_iAttachType) == 0x18);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueConfiguration_t, m_BoundEntityPath) == 0x20);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueConfiguration_t, m_strEntityScope) == 0x28);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueConfiguration_t, m_strAttachmentName) == 0x30);
        
        static_assert(sizeof(source2sdk::particleslib::ParticleNamedValueConfiguration_t) == 0x38);
    };
};
