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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulseGraphDef
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            PulseSymbol_t m_DomainIdentifier; // 0x_            
            CPulseValueFullType m_DomainSubType; // 0x_            
            PulseSymbol_t m_ParentMapName; // 0x_            
            PulseSymbol_t m_ParentXmlName; // 0x_            
            // m_Chunks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_Chunk*> m_Chunks;
            char m_Chunks[0x_]; // 0x_            
            // m_Cells has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulseCell_Base*> m_Cells;
            char m_Cells[0x_]; // 0x_            
            // m_Vars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_Variable> m_Vars;
            char m_Vars[0x_]; // 0x_            
            // m_PublicOutputs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_PublicOutput> m_PublicOutputs;
            char m_PublicOutputs[0x_]; // 0x_            
            // m_InvokeBindings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_InvokeBinding*> m_InvokeBindings;
            char m_InvokeBindings[0x_]; // 0x_            
            // m_CallInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_CallInfo*> m_CallInfos;
            char m_CallInfos[0x_]; // 0x_            
            // m_Constants has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_Constant> m_Constants;
            char m_Constants[0x_]; // 0x_            
            // m_DomainValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_DomainValue> m_DomainValues;
            char m_DomainValues[0x_]; // 0x_            
            // m_BlackboardReferences has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_BlackboardReference> m_BlackboardReferences;
            char m_BlackboardReferences[0x_]; // 0x_            
            // m_OutputConnections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::CPulse_OutputConnection*> m_OutputConnections;
            char m_OutputConnections[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_DomainIdentifier) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_DomainSubType) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_ParentMapName) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_ParentXmlName) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_Chunks) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_Cells) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_Vars) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_PublicOutputs) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_InvokeBindings) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_CallInfos) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_Constants) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_DomainValues) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_BlackboardReferences) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseGraphDef, m_OutputConnections) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseGraphDef) == 0x_);
    };
};
