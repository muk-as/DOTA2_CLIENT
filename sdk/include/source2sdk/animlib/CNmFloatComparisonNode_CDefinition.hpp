#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmBoolValueNode_CDefinition.hpp"
#include "source2sdk/animlib/CNmFloatComparisonNode_Comparison_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
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
        class CNmFloatComparisonNode_CDefinition : public source2sdk::animlib::CNmBoolValueNode_CDefinition
        {
        public:
            std::int16_t m_nInputValueNodeIdx; // 0x10            
            std::int16_t m_nComparandValueNodeIdx; // 0x12            
            source2sdk::animlib::CNmFloatComparisonNode_Comparison_t m_comparison; // 0x14            
            uint8_t _pad0015[0x3]; // 0x15
            float m_flEpsilon; // 0x18            
            float m_flComparisonValue; // 0x1c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmFloatComparisonNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmFloatComparisonNode_CDefinition) == 0x20);
    };
};
