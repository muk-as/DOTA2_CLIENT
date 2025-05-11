#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/PulseInstructionCode_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseRuntimeBlackboardReferenceIndex_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseRuntimeCallInfoIndex_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseRuntimeChunkIndex_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseRuntimeConstantIndex_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseRuntimeDomainValueIndex_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseRuntimeInvokeIndex_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseRuntimeRegisterIndex_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseRuntimeVarIndex_t.hpp"

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
        // Size: 0x38
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PGDInstruction_t
        {
        public:
            source2sdk::pulse_runtime_lib::PulseInstructionCode_t m_nCode; // 0x0            
            uint8_t _pad0002[0x2]; // 0x2
            source2sdk::pulse_runtime_lib::PulseRuntimeVarIndex_t m_nVar; // 0x4            
            source2sdk::pulse_runtime_lib::PulseRuntimeRegisterIndex_t m_nReg0; // 0x8            
            source2sdk::pulse_runtime_lib::PulseRuntimeRegisterIndex_t m_nReg1; // 0xa            
            source2sdk::pulse_runtime_lib::PulseRuntimeRegisterIndex_t m_nReg2; // 0xc            
            uint8_t _pad000e[0x2]; // 0xe
            source2sdk::pulse_runtime_lib::PulseRuntimeInvokeIndex_t m_nInvokeBindingIndex; // 0x10            
            source2sdk::pulse_runtime_lib::PulseRuntimeChunkIndex_t m_nChunk; // 0x14            
            std::int32_t m_nDestInstruction; // 0x18            
            source2sdk::pulse_runtime_lib::PulseRuntimeCallInfoIndex_t m_nCallInfoIndex; // 0x1c            
            source2sdk::pulse_runtime_lib::PulseRuntimeConstantIndex_t m_nConstIdx; // 0x20            
            source2sdk::pulse_runtime_lib::PulseRuntimeDomainValueIndex_t m_nDomainValueIdx; // 0x22            
            source2sdk::pulse_runtime_lib::PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReferenceIdx; // 0x24            
            uint8_t _pad0026[0x12];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nCode) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nVar) == 0x4);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nReg0) == 0x8);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nReg1) == 0xa);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nReg2) == 0xc);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nInvokeBindingIndex) == 0x10);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nChunk) == 0x14);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nDestInstruction) == 0x18);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nCallInfoIndex) == 0x1c);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nConstIdx) == 0x20);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nDomainValueIdx) == 0x22);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nBlackboardReferenceIdx) == 0x24);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::PGDInstruction_t) == 0x38);
    };
};
