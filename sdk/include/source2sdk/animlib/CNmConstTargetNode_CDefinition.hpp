#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmTarget.hpp"
#include "source2sdk/animlib/CNmTargetValueNode_CDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x40
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmConstTargetNode_CDefinition : public source2sdk::animlib::CNmTargetValueNode_CDefinition
        {
        public:
            source2sdk::animlib::CNmTarget m_value; // 0x10            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmConstTargetNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmConstTargetNode_CDefinition) == 0x40);
    };
};
