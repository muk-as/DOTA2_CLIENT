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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x20
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmFloatRangeComparisonNode_CDefinition : public source2sdk::animlib::CNmBoolValueNode_CDefinition
        {
        public:
            Range_t m_range; // 0x10            
            std::int16_t m_nInputValueNodeIdx; // 0x18            
            bool m_bIsInclusiveCheck; // 0x1a            
            uint8_t _pad001b[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmFloatRangeComparisonNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmFloatRangeComparisonNode_CDefinition) == 0x20);
    };
};
