#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "BaseDomain"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo
    // static metadata: MPulseCellWithCustomDocNode
    #pragma pack(push, 1)
    class CPulseCell_FireCursors : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow
    {
    public:
        // m_Outflows has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<pulse_runtime_lib::CPulse_OutflowConnection> m_Outflows;
        char m_Outflows[0x18]; // 0x48        
        bool m_bWaitForChildOutflows; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x61[0x7]; // 0x61
        pulse_runtime_lib::CPulse_ResumePoint m_OnFinished; // 0x68        
        pulse_runtime_lib::CPulse_ResumePoint m_OnCanceled; // 0x98        
        
        // Static fields:
        static char* &Get_m_pTagName() {return *reinterpret_cast<char**>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CPulseCell_FireCursors")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_FireCursors because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_FireCursors) == 0xc8);
};
