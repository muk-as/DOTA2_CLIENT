#pragma once
#include "source2sdk/animlib/CNmFloatValueNode__CDefinition.hpp"
#include "source2sdk/animlib/NmEasingOperation_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x20
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmFloatEaseNode__CDefinition : public animlib::CNmFloatValueNode__CDefinition
    {
    public:
        float m_flEaseTime; // 0x10        
        float m_flStartValue; // 0x14        
        int16_t m_nInputValueNodeIdx; // 0x18        
        animlib::NmEasingOperation_t m_easingOp; // 0x1a        
        bool m_bUseStartValue; // 0x1b        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmFloatEaseNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmFloatEaseNode__CDefinition) == 0x20);
};
