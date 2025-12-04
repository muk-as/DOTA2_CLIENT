#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/PulseRuntimeRegisterIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulse_RegisterInfo
        {
        public:
            source2sdk::pulse_runtime_lib::PulseRuntimeRegisterIndex_t m_nReg; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CPulseValueFullType m_Type; // 0x_            
            CKV3MemberNameWithStorage m_OriginName; // 0x_            
            std::int32_t m_nWrittenByInstruction; // 0x_            
            std::int32_t m_nLastReadByInstruction; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_RegisterInfo, m_nReg) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_RegisterInfo, m_Type) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_RegisterInfo, m_OriginName) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_RegisterInfo, m_nWrittenByInstruction) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_RegisterInfo, m_nLastReadByInstruction) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulse_RegisterInfo) == 0x_);
    };
};
