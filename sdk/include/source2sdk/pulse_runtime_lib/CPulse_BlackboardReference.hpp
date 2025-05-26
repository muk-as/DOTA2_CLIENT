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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulse_BlackboardReference
        {
        public:
            // m_hBlackboardResource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIPulseGraphDef> m_hBlackboardResource;
            char m_hBlackboardResource[0x8]; // 0x0            
            PulseSymbol_t m_BlackboardResource; // 0x8            
            source2sdk::pulse_runtime_lib::PulseDocNodeID_t m_nNodeID; // 0x18            
            uint8_t _pad001c[0x4]; // 0x1c
            CGlobalSymbol m_NodeName; // 0x20            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_BlackboardReference, m_hBlackboardResource) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_BlackboardReference, m_BlackboardResource) == 0x8);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_BlackboardReference, m_nNodeID) == 0x18);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulse_BlackboardReference, m_NodeName) == 0x20);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulse_BlackboardReference) == 0x28);
    };
};
