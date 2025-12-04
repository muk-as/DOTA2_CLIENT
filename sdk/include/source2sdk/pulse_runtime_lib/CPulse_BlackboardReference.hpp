#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/PulseDocNodeID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIPulseGraphDef.hpp"

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
        class CPulse_BlackboardReference
        {
        public:
            // m_hBlackboardResource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIPulseGraphDef> m_hBlackboardResource;
            char m_hBlackboardResource[0x_]; // 0x_            
            PulseSymbol_t m_BlackboardResource; // 0x_            
            source2sdk::pulse_runtime_lib::PulseDocNodeID_t m_nNodeID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CGlobalSymbol m_NodeName; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_BlackboardReference, m_hBlackboardResource) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_BlackboardReference, m_BlackboardResource) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_BlackboardReference, m_nNodeID) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_BlackboardReference, m_NodeName) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulse_BlackboardReference) == 0x_);
    };
};
