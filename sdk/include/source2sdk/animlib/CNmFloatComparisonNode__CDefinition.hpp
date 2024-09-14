#pragma once
#include "source2sdk/animlib/CNmBoolValueNode__CDefinition.hpp"
#include "source2sdk/animlib/CNmFloatComparisonNode__Comparison_t.hpp"
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
    class CNmFloatComparisonNode__CDefinition : public animlib::CNmBoolValueNode__CDefinition
    {
    public:
        int16_t m_nInputValueNodeIdx; // 0x10        
        int16_t m_nComparandValueNodeIdx; // 0x12        
        animlib::CNmFloatComparisonNode__Comparison_t m_comparison; // 0x14        
        [[maybe_unused]] std::uint8_t pad_0x15[0x3]; // 0x15
        float m_flEpsilon; // 0x18        
        float m_flComparisonValue; // 0x1c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmFloatComparisonNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmFloatComparisonNode__CDefinition) == 0x20);
};
