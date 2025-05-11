#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CBasePulseGraphInstance.hpp"

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
        // Standard-layout class: false
        // Size: 0x140
        // Has VTable
        // 
        // static metadata: MPulseInstanceDomainInfo
        // static metadata: MPulseDomainHookInfo
        // static metadata: MPulseLibraryBindings
        // static metadata: MPulseDomainOptInFeatureTag
        #pragma pack(push, 1)
        class CPulseGraphInstance_TestDomain : public source2sdk::pulse_runtime_lib::CBasePulseGraphInstance
        {
        public:
            bool m_bIsRunningUnitTests; // 0x110            
            bool m_bExplicitTimeStepping; // 0x111            
            bool m_bExpectingToDestroyWithYieldedCursors; // 0x112            
            bool m_bQuietTracepoints; // 0x113            
            bool m_bExpectingCursorTerminatedDueToMaxInstructions; // 0x114            
            uint8_t _pad0115[0x3]; // 0x115
            std::int32_t m_nCursorsTerminatedDueToMaxInstructions; // 0x118            
            std::int32_t m_nNextValidateIndex; // 0x11c            
            // m_Tracepoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_Tracepoints;
            char m_Tracepoints[0x18]; // 0x120            
            bool m_bTestYesOrNoPath; // 0x138            
            uint8_t _pad0139[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseGraphInstance_TestDomain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseGraphInstance_TestDomain) == 0x140);
    };
};
