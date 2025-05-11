#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/PulseDocNodeID_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x58
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulse_CallInfo
        {
        public:
            PulseSymbol_t m_PortName; // 0x0            
            source2sdk::pulse_runtime_lib::PulseDocNodeID_t m_nEditorNodeID; // 0x10            
            uint8_t _pad0014[0x4]; // 0x14
            source2sdk::pulse_runtime_lib::PulseRegisterMap_t m_RegisterMap; // 0x18            
            source2sdk::pulse_runtime_lib::PulseDocNodeID_t m_CallMethodID; // 0x48            
            source2sdk::pulse_runtime_lib::PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x4c            
            std::int32_t m_nSrcInstruction; // 0x50            
            uint8_t _pad0054[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_CallInfo, m_PortName) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_CallInfo, m_nEditorNodeID) == 0x10);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_CallInfo, m_RegisterMap) == 0x18);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_CallInfo, m_CallMethodID) == 0x48);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_CallInfo, m_nSrcChunk) == 0x4c);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_CallInfo, m_nSrcInstruction) == 0x50);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulse_CallInfo) == 0x58);
    };
};
