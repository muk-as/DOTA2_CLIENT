#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/PulseRegisterMap_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseRuntimeChunkIndex_t.hpp"

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
        // Size: 0x48
        #pragma pack(push, 1)
        class CPulse_OutflowConnection
        {
        public:
            PulseSymbol_t m_SourceOutflowName; // 0x0            
            source2sdk::pulse_runtime_lib::PulseRuntimeChunkIndex_t m_nDestChunk; // 0x10            
            std::int32_t m_nInstruction; // 0x14            
            source2sdk::pulse_runtime_lib::PulseRegisterMap_t m_OutflowRegisterMap; // 0x18            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_OutflowConnection, m_SourceOutflowName) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_OutflowConnection, m_nDestChunk) == 0x10);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_OutflowConnection, m_nInstruction) == 0x14);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_OutflowConnection, m_OutflowRegisterMap) == 0x18);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulse_OutflowConnection) == 0x48);
    };
};
