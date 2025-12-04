#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseExecCursor.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_system
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CPulseTurtleGraphicsCursor : public source2sdk::pulse_runtime_lib::CPulseExecCursor
        {
        public:
            Color m_Color; // 0x_            
            Vector2D m_vPos; // 0x_            
            float m_flHeadingDeg; // 0x_            
            bool m_bPenUp; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseTurtleGraphicsCursor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseTurtleGraphicsCursor) == 0x_);
    };
};
