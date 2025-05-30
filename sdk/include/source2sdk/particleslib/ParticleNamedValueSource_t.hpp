#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particleslib/ParticleNamedValueConfiguration_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseValueType_t.hpp"

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
        // Size: 0x60
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ParticleNamedValueSource_t
        {
        public:
            CUtlString m_Name; // 0x0            
            bool m_IsPublic; // 0x8            
            uint8_t _pad0009[0x3]; // 0x9
            // metadata: MPropertySuppressField
            source2sdk::pulse_runtime_lib::PulseValueType_t m_ValueType; // 0xc            
            // metadata: MPropertySuppressField
            source2sdk::particleslib::ParticleNamedValueConfiguration_t m_DefaultConfig; // 0x10            
            // metadata: MPropertySuppressField
            // m_NamedConfigs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particleslib::ParticleNamedValueConfiguration_t> m_NamedConfigs;
            char m_NamedConfigs[0x18]; // 0x48            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueSource_t, m_Name) == 0x0);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueSource_t, m_IsPublic) == 0x8);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueSource_t, m_ValueType) == 0xc);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueSource_t, m_DefaultConfig) == 0x10);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueSource_t, m_NamedConfigs) == 0x48);
        
        static_assert(sizeof(source2sdk::particleslib::ParticleNamedValueSource_t) == 0x60);
    };
};
