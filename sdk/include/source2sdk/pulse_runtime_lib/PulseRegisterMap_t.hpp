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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x30
        #pragma pack(push, 1)
        struct PulseRegisterMap_t
        {
        public:
            KeyValues3 m_Inparams; // 0x0            
            CKV3MemberNameSet m_InparamsWhichCanBeMoved; // 0x10            
            KeyValues3 m_Outparams; // 0x20            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseRegisterMap_t, m_Inparams) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseRegisterMap_t, m_InparamsWhichCanBeMoved) == 0x10);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseRegisterMap_t, m_Outparams) == 0x20);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::PulseRegisterMap_t) == 0x30);
    };
};
