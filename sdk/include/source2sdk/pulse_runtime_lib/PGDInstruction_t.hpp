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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PGDInstruction_t
        {
        public:
            source2sdk::pulse_runtime_lib::PulseInstructionCode_t m_nCode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::pulse_runtime_lib::PulseRuntimeVarIndex_t m_nVar; // 0x_            
            source2sdk::pulse_runtime_lib::PulseRuntimeRegisterIndex_t m_nReg0; // 0x_            
            source2sdk::pulse_runtime_lib::PulseRuntimeRegisterIndex_t m_nReg1; // 0x_            
            source2sdk::pulse_runtime_lib::PulseRuntimeRegisterIndex_t m_nReg2; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::pulse_runtime_lib::PulseRuntimeInvokeIndex_t m_nInvokeBindingIndex; // 0x_            
            source2sdk::pulse_runtime_lib::PulseRuntimeChunkIndex_t m_nChunk; // 0x_            
            std::int32_t m_nDestInstruction; // 0x_            
            source2sdk::pulse_runtime_lib::PulseRuntimeCallInfoIndex_t m_nCallInfoIndex; // 0x_            
            source2sdk::pulse_runtime_lib::PulseRuntimeConstantIndex_t m_nConstIdx; // 0x_            
            source2sdk::pulse_runtime_lib::PulseRuntimeDomainValueIndex_t m_nDomainValueIdx; // 0x_            
            source2sdk::pulse_runtime_lib::PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReferenceIdx; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nCode) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nVar) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nReg0) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nReg1) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nReg2) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nInvokeBindingIndex) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nChunk) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nDestInstruction) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nCallInfoIndex) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nConstIdx) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nDomainValueIdx) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::PGDInstruction_t, m_nBlackboardReferenceIdx) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::PGDInstruction_t) == 0x_);
    };
};
