#pragma once
#include "source2sdk/pulse_runtime_lib/PulseValueType_t.hpp"
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
        pulse_runtime_lib::PulseValueType_t m_variableType; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CParticleVariableRef, m_variableName) == 0x0);
    static_assert(offsetof(CParticleVariableRef, m_variableType) == 0x38);
    
    static_assert(sizeof(CParticleVariableRef) == 0x40);
};
