#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_system/CPulseGraphInstance_TestDomain.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_system
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CPulseGraphInstance_TestDomain_Derived : public source2sdk::pulse_system::CPulseGraphInstance_TestDomain
        {
        public:
            std::int32_t m_nInstanceValueX; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseGraphInstance_TestDomain_Derived because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseGraphInstance_TestDomain_Derived) == 0x_);
    };
};
