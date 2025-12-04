#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particleslib/ParticleNamedValueConfiguration_t.hpp"

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
        struct ParticleNamedValueSource_t
        {
        public:
            CUtlString m_Name; // 0x_            
            bool m_IsPublic; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MFgdFromSchemaCompletelySkipField
            CPulseValueFullType m_ValueType; // 0x_            
            // metadata: MFgdFromSchemaCompletelySkipField
            source2sdk::particleslib::ParticleNamedValueConfiguration_t m_DefaultConfig; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueSource_t, m_Name) == 0x_);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueSource_t, m_IsPublic) == 0x_);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueSource_t, m_ValueType) == 0x_);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueSource_t, m_DefaultConfig) == 0x_);
        
        static_assert(sizeof(source2sdk::particleslib::ParticleNamedValueSource_t) == 0x_);
    };
};
