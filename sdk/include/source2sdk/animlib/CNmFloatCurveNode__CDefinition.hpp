#pragma once
#include "source2sdk/animlib/CNmFloatValueNode__CDefinition.hpp"
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
    // Size: 0x58
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmFloatCurveNode__CDefinition : public animlib::CNmFloatValueNode__CDefinition
    {
    public:
        int16_t m_nInputValueNodeIdx; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x12[0x6]; // 0x12
        CPiecewiseCurve m_curve; // 0x18        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmFloatCurveNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmFloatCurveNode__CDefinition) == 0x58);
};
