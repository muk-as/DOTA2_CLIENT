#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CBasePulseGraphInstance.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_system
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CPulseGraphInstance_TestDomain : public source2sdk::pulse_runtime_lib::CBasePulseGraphInstance
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            bool m_bIsRunningUnitTests; // 0x_            
            bool m_bExplicitTimeStepping; // 0x_            
            bool m_bExpectingToDestroyWithYieldedCursors; // 0x_            
            bool m_bQuietTracepoints; // 0x_            
            bool m_bExpectingCursorTerminatedDueToMaxInstructions; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nCursorsTerminatedDueToMaxInstructions; // 0x_            
            std::int32_t m_nNextValidateIndex; // 0x_            
            // m_Tracepoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_Tracepoints;
            char m_Tracepoints[0x_]; // 0x_            
            bool m_bTestYesOrNoPath; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseGraphInstance_TestDomain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseGraphInstance_TestDomain) == 0x_);
    };
};
