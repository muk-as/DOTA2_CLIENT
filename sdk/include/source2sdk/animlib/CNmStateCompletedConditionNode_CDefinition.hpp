#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmBoolValueNode_CDefinition.hpp"

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
        class CNmStateCompletedConditionNode_CDefinition : public source2sdk::animlib::CNmBoolValueNode_CDefinition
        {
        public:
            std::int16_t m_nSourceStateNodeIdx; // 0x_            
            std::int16_t m_nTransitionDurationOverrideNodeIdx; // 0x_            
            float m_flTransitionDurationSeconds; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmStateCompletedConditionNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmStateCompletedConditionNode_CDefinition) == 0x_);
    };
};
