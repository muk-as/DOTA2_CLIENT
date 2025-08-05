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
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0xe8
        // Has VTable
        // 
        // static metadata: MPulseLibraryBindings
        // static metadata: MPulseInternal_IsCursor
        #pragma pack(push, 1)
        class CPulseTurtleGraphicsCursor : public source2sdk::pulse_runtime_lib::CPulseExecCursor
        {
        public:
            Color m_Color; // 0xd0            
            Vector2D m_vPos; // 0xd4            
            float m_flHeadingDeg; // 0xdc            
            bool m_bPenUp; // 0xe0            
            uint8_t _pad00e1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseTurtleGraphicsCursor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseTurtleGraphicsCursor) == 0xe8);
    };
};
