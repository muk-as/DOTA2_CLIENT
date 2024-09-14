#pragma once
#include "source2sdk/animlib/CNmBoolValueNode__CDefinition.hpp"
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
    class CNmFloatRangeComparisonNode__CDefinition : public animlib::CNmBoolValueNode__CDefinition
    {
    public:
        Range_t m_range; // 0x10        
        int16_t m_nInputValueNodeIdx; // 0x18        
        bool m_bIsInclusiveCheck; // 0x1a        
        [[maybe_unused]] std::uint8_t pad_0x1b[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmFloatRangeComparisonNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmFloatRangeComparisonNode__CDefinition) == 0x20);
};
