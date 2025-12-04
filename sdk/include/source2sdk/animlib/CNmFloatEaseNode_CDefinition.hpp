#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmFloatValueNode_CDefinition.hpp"
#include "source2sdk/animlib/NmEasingOperation_t.hpp"

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
        class CNmFloatEaseNode_CDefinition : public source2sdk::animlib::CNmFloatValueNode_CDefinition
        {
        public:
            float m_flEaseTime; // 0x_            
            float m_flStartValue; // 0x_            
            std::int16_t m_nInputValueNodeIdx; // 0x_            
            source2sdk::animlib::NmEasingOperation_t m_easingOp; // 0x_            
            bool m_bUseStartValue; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmFloatEaseNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmFloatEaseNode_CDefinition) == 0x_);
    };
};
