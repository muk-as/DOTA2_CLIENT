#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmFloatMathNode_Operator_t.hpp"
#include "source2sdk/animlib/CNmFloatValueNode_CDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmFloatMathNode_CDefinition : public source2sdk::animlib::CNmFloatValueNode_CDefinition
        {
        public:
            std::int16_t m_nInputValueNodeIdxA; // 0x_            
            std::int16_t m_nInputValueNodeIdxB; // 0x_            
            bool m_bReturnAbsoluteResult; // 0x_            
            bool m_bReturnNegatedResult; // 0x_            
            source2sdk::animlib::CNmFloatMathNode_Operator_t m_operator; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flValueB; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmFloatMathNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmFloatMathNode_CDefinition) == 0x_);
    };
};
