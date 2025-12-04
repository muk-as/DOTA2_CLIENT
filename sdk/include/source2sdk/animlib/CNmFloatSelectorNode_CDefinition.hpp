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
        class CNmFloatSelectorNode_CDefinition : public source2sdk::animlib::CNmFloatValueNode_CDefinition
        {
        public:
            // m_conditionNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<std::int16_t,5> m_conditionNodeIndices;
            char m_conditionNodeIndices[0x_]; // 0x_            
            // m_values has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<float,5> m_values;
            char m_values[0x_]; // 0x_            
            float m_flDefaultValue; // 0x_            
            float m_flEaseTime; // 0x_            
            source2sdk::animlib::NmEasingOperation_t m_easingOp; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmFloatSelectorNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmFloatSelectorNode_CDefinition) == 0x_);
    };
};
