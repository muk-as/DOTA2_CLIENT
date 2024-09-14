#pragma once
#include "source2sdk/pulse_runtime_lib/CPulse_BlackboardReference.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_Constant.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_DomainValue.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_PublicOutput.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_Variable.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    class CPulseCell_Base;
};

namespace source2sdk::pulse_runtime_lib
{
    class CPulse_CallInfo;
};

namespace source2sdk::pulse_runtime_lib
{
    class CPulse_Chunk;
};

namespace source2sdk::pulse_runtime_lib
{
    class CPulse_InvokeBinding;
};

namespace source2sdk::pulse_runtime_lib
{
    class CPulse_OutputConnection;
};

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x178
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPulseGraphDef
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        CUtlSymbolLarge m_DomainIdentifier; // 0x8        
        CUtlSymbolLarge m_ParentMapName; // 0x10        
        CUtlSymbolLarge m_ParentXmlName; // 0x18        
        // m_vecGameBlackboards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlSymbolLarge> m_vecGameBlackboards;
        char m_vecGameBlackboards[0x18]; // 0x20        
        // m_Chunks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<pulse_runtime_lib::CPulse_Chunk*> m_Chunks;
        char m_Chunks[0x18]; // 0x38        
        // m_Cells has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<pulse_runtime_lib::CPulseCell_Base*> m_Cells;
        char m_Cells[0x18]; // 0x50        
        // m_Vars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<pulse_runtime_lib::CPulse_Variable> m_Vars;
        char m_Vars[0x18]; // 0x68        
        // m_PublicOutputs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<pulse_runtime_lib::CPulse_PublicOutput> m_PublicOutputs;
        char m_PublicOutputs[0x18]; // 0x80        
        // m_InvokeBindings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<pulse_runtime_lib::CPulse_InvokeBinding*> m_InvokeBindings;
        char m_InvokeBindings[0x18]; // 0x98        
        // m_CallInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<pulse_runtime_lib::CPulse_CallInfo*> m_CallInfos;
        char m_CallInfos[0x18]; // 0xb0        
        // m_Constants has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<pulse_runtime_lib::CPulse_Constant> m_Constants;
        char m_Constants[0x18]; // 0xc8        
        // m_DomainValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<pulse_runtime_lib::CPulse_DomainValue> m_DomainValues;
        char m_DomainValues[0x18]; // 0xe0        
        // m_BlackboardReferences has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<pulse_runtime_lib::CPulse_BlackboardReference> m_BlackboardReferences;
        char m_BlackboardReferences[0x18]; // 0xf8        
        // m_OutputConnections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<pulse_runtime_lib::CPulse_OutputConnection*> m_OutputConnections;
        char m_OutputConnections[0x18]; // 0x110        
        [[maybe_unused]] std::uint8_t pad_0x128[0x50];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulseGraphDef, m_DomainIdentifier) == 0x8);
    static_assert(offsetof(CPulseGraphDef, m_ParentMapName) == 0x10);
    static_assert(offsetof(CPulseGraphDef, m_ParentXmlName) == 0x18);
    static_assert(offsetof(CPulseGraphDef, m_vecGameBlackboards) == 0x20);
    static_assert(offsetof(CPulseGraphDef, m_Chunks) == 0x38);
    static_assert(offsetof(CPulseGraphDef, m_Cells) == 0x50);
    static_assert(offsetof(CPulseGraphDef, m_Vars) == 0x68);
    static_assert(offsetof(CPulseGraphDef, m_PublicOutputs) == 0x80);
    static_assert(offsetof(CPulseGraphDef, m_InvokeBindings) == 0x98);
    static_assert(offsetof(CPulseGraphDef, m_CallInfos) == 0xb0);
    static_assert(offsetof(CPulseGraphDef, m_Constants) == 0xc8);
    static_assert(offsetof(CPulseGraphDef, m_DomainValues) == 0xe0);
    static_assert(offsetof(CPulseGraphDef, m_BlackboardReferences) == 0xf8);
    static_assert(offsetof(CPulseGraphDef, m_OutputConnections) == 0x110);
    
    static_assert(sizeof(CPulseGraphDef) == 0x178);
};
