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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulse_CallInfo
        {
        public:
            PulseSymbol_t m_PortName; // 0x_            
            source2sdk::pulse_runtime_lib::PulseDocNodeID_t m_nEditorNodeID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::pulse_runtime_lib::PulseRegisterMap_t m_RegisterMap; // 0x_            
            source2sdk::pulse_runtime_lib::PulseDocNodeID_t m_CallMethodID; // 0x_            
            source2sdk::pulse_runtime_lib::PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x_            
            std::int32_t m_nSrcInstruction; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_CallInfo, m_PortName) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_CallInfo, m_nEditorNodeID) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_CallInfo, m_RegisterMap) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_CallInfo, m_CallMethodID) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_CallInfo, m_nSrcChunk) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_CallInfo, m_nSrcInstruction) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulse_CallInfo) == 0x_);
    };
};
