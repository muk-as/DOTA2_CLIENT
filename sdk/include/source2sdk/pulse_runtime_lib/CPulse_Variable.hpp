#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/PulseDocNodeID_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseVariableKeysSource_t.hpp"

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
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulse_Variable
        {
        public:
            PulseSymbol_t m_Name; // 0x0            
            CUtlString m_Description; // 0x10            
            CPulseValueFullType m_Type; // 0x18            
            KeyValues3 m_DefaultValue; // 0x30            
            uint8_t _pad0040[0x4]; // 0x40
            source2sdk::pulse_runtime_lib::PulseVariableKeysSource_t m_nKeysSource; // 0x44            
            bool m_bIsPublicBlackboardVariable; // 0x48            
            bool m_bIsObservable; // 0x49            
            uint8_t _pad004a[0x2]; // 0x4a
            source2sdk::pulse_runtime_lib::PulseDocNodeID_t m_nEditorNodeID; // 0x4c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_Name) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_Description) == 0x10);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_Type) == 0x18);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_DefaultValue) == 0x30);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_nKeysSource) == 0x44);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_bIsPublicBlackboardVariable) == 0x48);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_bIsObservable) == 0x49);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_nEditorNodeID) == 0x4c);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulse_Variable) == 0x50);
    };
};
