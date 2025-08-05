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
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x108
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MPulseInstanceDomainInfo
        // static metadata: MPulseDomainHiddenInTool
        #pragma pack(push, 1)
        class CBasePulseGraphInstance
        {
        public:
            uint8_t _pad0000[0x108];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CBasePulseGraphInstance) == 0x108);
    };
};
