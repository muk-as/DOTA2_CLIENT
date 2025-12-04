#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmFloatRemapNode_RemapRange_t.hpp"
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
        class CNmFloatRemapNode_CDefinition : public source2sdk::animlib::CNmFloatValueNode_CDefinition
        {
        public:
            std::int16_t m_nInputValueNodeIdx; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animlib::CNmFloatRemapNode_RemapRange_t m_inputRange; // 0x_            
            source2sdk::animlib::CNmFloatRemapNode_RemapRange_t m_outputRange; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmFloatRemapNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmFloatRemapNode_CDefinition) == 0x_);
    };
};
