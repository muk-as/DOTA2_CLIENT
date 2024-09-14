#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseExecCursor.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0xc0
    // Has VTable
    // 
    // static metadata: MPulseLibraryBindings
    // static metadata: MPulseInternal_IsCursor
    #pragma pack(push, 1)
    class CPulseTurtleGraphicsCursor : public pulse_runtime_lib::CPulseExecCursor
    {
    public:
        Color m_Color; // 0xa8        
        Vector2D m_vPos; // 0xac        
        float m_flHeadingDeg; // 0xb4        
        bool m_bPenUp; // 0xb8        
        [[maybe_unused]] std::uint8_t pad_0xb9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseTurtleGraphicsCursor because it is not a standard-layout class
    static_assert(sizeof(CPulseTurtleGraphicsCursor) == 0xc0);
};
