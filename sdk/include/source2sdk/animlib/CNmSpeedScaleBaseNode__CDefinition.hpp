#pragma once
#include "source2sdk/animlib/CNmPassthroughNode__CDefinition.hpp"
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
    class CNmSpeedScaleBaseNode__CDefinition : public animlib::CNmPassthroughNode__CDefinition
    {
    public:
        int16_t m_nInputValueNodeIdx; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1a[0x2]; // 0x1a
        float m_flDefaultInputValue; // 0x1c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmSpeedScaleBaseNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmSpeedScaleBaseNode__CDefinition) == 0x20);
};