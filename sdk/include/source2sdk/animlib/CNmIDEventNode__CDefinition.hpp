#pragma once
#include "source2sdk/animlib/CNmBitFlags.hpp"
#include "source2sdk/animlib/CNmIDValueNode__CDefinition.hpp"
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
    class CNmIDEventNode__CDefinition : public animlib::CNmIDValueNode__CDefinition
    {
    public:
        int16_t m_nSourceStateNodeIdx; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x12[0x2]; // 0x12
        animlib::CNmBitFlags m_eventConditionRules; // 0x14        
        CGlobalSymbol m_defaultValue; // 0x18        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmIDEventNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmIDEventNode__CDefinition) == 0x20);
};
