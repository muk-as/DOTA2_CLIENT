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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulse_Constant
        {
        public:
            CPulseValueFullType m_Type; // 0x_            
            KeyValues3 m_Value; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Constant, m_Type) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Constant, m_Value) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulse_Constant) == 0x_);
    };
};
