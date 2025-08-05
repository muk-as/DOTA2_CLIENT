#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"

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
        // Standard-layout class: false
        // Size: 0x98
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPulseEditorCanvasItemSpecKV3
        #pragma pack(push, 1)
        class CPulseCell_WaitForCursorsWithTagBase : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            // metadata: MPropertyDescription "Any extra waiting cursors will be terminated. -1 for infinite cursors."
            std::int32_t m_nCursorsAllowedToWait; // 0x48            
            uint8_t _pad004c[0x4]; // 0x4c
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_WaitComplete; // 0x50            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_WaitForCursorsWithTagBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_WaitForCursorsWithTagBase) == 0x98);
    };
};
