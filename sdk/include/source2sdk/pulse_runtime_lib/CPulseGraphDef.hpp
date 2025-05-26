#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulse_BlackboardReference.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_Constant.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_DomainValue.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_PublicOutput.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_Variable.hpp"
namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        struct CPulseCell_Base;
    };
};
namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        struct CPulse_CallInfo;
    };
};
namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        struct CPulse_Chunk;
    };
};
namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        struct CPulse_InvokeBinding;
    };
};
namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        struct CPulse_OutputConnection;
    };
};

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
        // Size: 0x190
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulseGraphDef
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            PulseSymbol_t m_DomainIdentifier; // 0x8            
            CPulseValueFullType m_DomainSubType; // 0x18            
            PulseSymbol_t m_ParentMapName; // 0x30            
            PulseSymbol_t m_ParentXmlName; // 0x40            
            // m_Chunks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_Chunk*> m_Chunks;
            char m_Chunks[0x18]; // 0x50            
            // m_Cells has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulseCell_Base*> m_Cells;
            char m_Cells[0x18]; // 0x68            
            // m_Vars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_Variable> m_Vars;
            char m_Vars[0x18]; // 0x80            
            // m_PublicOutputs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_PublicOutput> m_PublicOutputs;
            char m_PublicOutputs[0x18]; // 0x98            
            // m_InvokeBindings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_InvokeBinding*> m_InvokeBindings;
            char m_InvokeBindings[0x18]; // 0xb0            
            // m_CallInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_CallInfo*> m_CallInfos;
            char m_CallInfos[0x18]; // 0xc8            
            // m_Constants has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_Constant> m_Constants;
            char m_Constants[0x18]; // 0xe0            
            // m_DomainValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_DomainValue> m_DomainValues;
            char m_DomainValues[0x18]; // 0xf8            
            // m_BlackboardReferences has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_BlackboardReference> m_BlackboardReferences;
            char m_BlackboardReferences[0x18]; // 0x110            
            // m_OutputConnections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_OutputConnection*> m_OutputConnections;
            char m_OutputConnections[0x18]; // 0x128            
            uint8_t _pad0140[0x50];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_DomainIdentifier) == 0x8);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_DomainSubType) == 0x18);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_ParentMapName) == 0x30);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_ParentXmlName) == 0x40);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_Chunks) == 0x50);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_Cells) == 0x68);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_Vars) == 0x80);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_PublicOutputs) == 0x98);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_InvokeBindings) == 0xb0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_CallInfos) == 0xc8);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_Constants) == 0xe0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_DomainValues) == 0xf8);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_BlackboardReferences) == 0x110);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_OutputConnections) == 0x128);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseGraphDef) == 0x190);
    };
};
