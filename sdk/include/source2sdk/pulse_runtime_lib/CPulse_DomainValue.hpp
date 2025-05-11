#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/PulseDomainValueType_t.hpp"

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
        class CPulse_DomainValue
        {
        public:
            source2sdk::pulse_runtime_lib::PulseDomainValueType_t m_nType; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            CGlobalSymbolCaseSensitive m_Value; // 0x8            
            CPulseValueFullType m_RequiredRuntimeType; // 0x10            
            uint8_t _pad0028[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_DomainValue, m_nType) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_DomainValue, m_Value) == 0x8);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_DomainValue, m_RequiredRuntimeType) == 0x10);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulse_DomainValue) == 0x30);
    };
};
