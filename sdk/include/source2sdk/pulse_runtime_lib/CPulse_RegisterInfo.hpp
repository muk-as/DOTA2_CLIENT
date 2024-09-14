#pragma once
#include "source2sdk/pulse_runtime_lib/PulseRuntimeRegisterIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x58
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPulse_RegisterInfo
    {
    public:
        pulse_runtime_lib::PulseRuntimeRegisterIndex_t m_nReg; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x02[0x6]; // 0x2
        CPulseValueFullType m_Type; // 0x8        
        CKV3MemberNameWithStorage m_OriginName; // 0x18        
        int32_t m_nWrittenByInstruction; // 0x50        
        int32_t m_nLastReadByInstruction; // 0x54        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulse_RegisterInfo, m_nReg) == 0x0);
    static_assert(offsetof(CPulse_RegisterInfo, m_Type) == 0x8);
    static_assert(offsetof(CPulse_RegisterInfo, m_OriginName) == 0x18);
    static_assert(offsetof(CPulse_RegisterInfo, m_nWrittenByInstruction) == 0x50);
    static_assert(offsetof(CPulse_RegisterInfo, m_nLastReadByInstruction) == 0x54);
    
    static_assert(sizeof(CPulse_RegisterInfo) == 0x58);
};
