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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulse_Variable
        {
        public:
            PulseSymbol_t m_Name; // 0x_            
            CUtlString m_Description; // 0x_            
            CPulseValueFullType m_Type; // 0x_            
            KeyValues3 m_DefaultValue; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::pulse_runtime_lib::PulseVariableKeysSource_t m_nKeysSource; // 0x_            
            bool m_bIsPublicBlackboardVariable; // 0x_            
            bool m_bIsObservable; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::pulse_runtime_lib::PulseDocNodeID_t m_nEditorNodeID; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_Name) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_Description) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_Type) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_DefaultValue) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_nKeysSource) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_bIsPublicBlackboardVariable) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_bIsObservable) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_Variable, m_nEditorNodeID) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulse_Variable) == 0x_);
    };
};
