#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x30
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulse_Constant
        {
        public:
            CPulseValueFullType m_Type; // 0x0            
            KeyValues3 m_Value; // 0x18            
            uint8_t _pad0028[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Constant, m_Type) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Constant, m_Value) == 0x18);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulse_Constant) == 0x30);
    };
};
