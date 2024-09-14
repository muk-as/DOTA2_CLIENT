#pragma once
#include "source2sdk/animlib/CNmFloatMathNode__Operator_t.hpp"
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
    // Size: 0x20
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmFloatMathNode__CDefinition : public animlib::CNmFloatValueNode__CDefinition
    {
    public:
        int16_t m_nInputValueNodeIdxA; // 0x10        
        int16_t m_nInputValueNodeIdxB; // 0x12        
        bool m_bReturnAbsoluteResult; // 0x14        
        animlib::CNmFloatMathNode__Operator_t m_operator; // 0x15        
        [[maybe_unused]] std::uint8_t pad_0x16[0x2]; // 0x16
        float m_flValueB; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmFloatMathNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmFloatMathNode__CDefinition) == 0x20);
};
