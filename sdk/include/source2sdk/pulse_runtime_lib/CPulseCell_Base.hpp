#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/PulseDocNodeID_t.hpp"

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
        class CPulseCell_Base
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MFgdFromSchemaCompletelySkipField
            source2sdk::pulse_runtime_lib::PulseDocNodeID_t m_nEditorNodeID; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_Base, m_nEditorNodeID) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_Base) == 0x_);
    };
};
