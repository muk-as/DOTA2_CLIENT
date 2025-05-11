#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x40
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyCustomEditor "ParticleVariableRef()"
        #pragma pack(push, 1)
        class CParticleVariableRef
        {
        public:
            CKV3MemberNameWithStorage m_variableName; // 0x0            
            source2sdk::pulse_runtime_lib::PulseValueType_t m_variableType; // 0x38            
            uint8_t _pad003c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particleslib::CParticleVariableRef, m_variableName) == 0x0);
        static_assert(offsetof(source2sdk::particleslib::CParticleVariableRef, m_variableType) == 0x38);
        
        static_assert(sizeof(source2sdk::particleslib::CParticleVariableRef) == 0x40);
    };
};
