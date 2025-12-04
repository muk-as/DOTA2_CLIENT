#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmVectorValueNode_CDefinition.hpp"

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
        class CNmVectorCreateNode_CDefinition : public source2sdk::animlib::CNmVectorValueNode_CDefinition
        {
        public:
            std::int16_t m_inputVectorValueNodeIdx; // 0x_            
            std::int16_t m_inputValueXNodeIdx; // 0x_            
            std::int16_t m_inputValueYNodeIdx; // 0x_            
            std::int16_t m_inputValueZNodeIdx; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmVectorCreateNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmVectorCreateNode_CDefinition) == 0x_);
    };
};
