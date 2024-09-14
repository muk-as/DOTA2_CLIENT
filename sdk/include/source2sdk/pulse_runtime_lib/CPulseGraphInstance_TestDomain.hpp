#pragma once
#include "source2sdk/pulse_runtime_lib/CBasePulseGraphInstance.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x120
    // Has VTable
    // 
    // static metadata: MPulseInstanceDomainInfo
    // static metadata: MPulseDomainHookInfo
    // static metadata: MPulseLibraryBindings
    // static metadata: MPulseDomainOptInFeatureTag
    #pragma pack(push, 1)
    class CPulseGraphInstance_TestDomain : public pulse_runtime_lib::CBasePulseGraphInstance
    {
    public:
        bool m_bIsRunningUnitTests; // 0xf8        
        bool m_bExplicitTimeStepping; // 0xf9        
        bool m_bExpectingToDestroyWithYieldedCursors; // 0xfa        
        [[maybe_unused]] std::uint8_t pad_0xfb[0x1]; // 0xfb
        int32_t m_nNextValidateIndex; // 0xfc        
        // m_Tracepoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_Tracepoints;
        char m_Tracepoints[0x18]; // 0x100        
        bool m_bTestYesOrNoPath; // 0x118        
        [[maybe_unused]] std::uint8_t pad_0x119[0x7];
        
        // Static fields:
        static double &Get_s_flExplicitCurTime() {return *reinterpret_cast<double*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CPulseGraphInstance_TestDomain")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseGraphInstance_TestDomain because it is not a standard-layout class
    static_assert(sizeof(CPulseGraphInstance_TestDomain) == 0x120);
};
