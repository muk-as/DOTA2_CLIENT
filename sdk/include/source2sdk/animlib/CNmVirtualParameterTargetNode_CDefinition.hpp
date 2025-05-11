#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmTargetValueNode_CDefinition.hpp"

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
        // Size: 0x18
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmVirtualParameterTargetNode_CDefinition : public source2sdk::animlib::CNmTargetValueNode_CDefinition
        {
        public:
            std::int16_t m_nChildNodeIdx; // 0x10            
            uint8_t _pad0012[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmVirtualParameterTargetNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmVirtualParameterTargetNode_CDefinition) == 0x18);
    };
};
