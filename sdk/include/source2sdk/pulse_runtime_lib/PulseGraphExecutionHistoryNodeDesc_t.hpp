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
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PulseGraphExecutionHistoryNodeDesc_t
        {
        public:
            CBufferString strCellDesc; // 0x0            
            PulseSymbol_t strBindingName; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryNodeDesc_t, strCellDesc) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryNodeDesc_t, strBindingName) == 0x10);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::PulseGraphExecutionHistoryNodeDesc_t) == 0x20);
    };
};
