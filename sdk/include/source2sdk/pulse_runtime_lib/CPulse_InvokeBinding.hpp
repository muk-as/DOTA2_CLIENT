#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/PulseRegisterMap_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseRuntimeCellIndex_t.hpp"
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
        class CPulse_InvokeBinding
        {
        public:
            source2sdk::pulse_runtime_lib::PulseRegisterMap_t m_RegisterMap; // 0x_            
            PulseSymbol_t m_FuncName; // 0x_            
            source2sdk::pulse_runtime_lib::PulseRuntimeCellIndex_t m_nCellIndex; // 0x_            
            source2sdk::pulse_runtime_lib::PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x_            
            std::int32_t m_nSrcInstruction; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_InvokeBinding, m_RegisterMap) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_InvokeBinding, m_FuncName) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_InvokeBinding, m_nCellIndex) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_InvokeBinding, m_nSrcChunk) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_InvokeBinding, m_nSrcInstruction) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulse_InvokeBinding) == 0x_);
    };
};
