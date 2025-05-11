#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmFloatValueNode_CDefinition.hpp"
#include "source2sdk/animlib/CNmTargetInfoNode_Info_t.hpp"

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
        class CNmTargetInfoNode_CDefinition : public source2sdk::animlib::CNmFloatValueNode_CDefinition
        {
        public:
            std::int16_t m_nInputValueNodeIdx; // 0x10            
            uint8_t _pad0012[0x2]; // 0x12
            source2sdk::animlib::CNmTargetInfoNode_Info_t m_infoType; // 0x14            
            bool m_bIsWorldSpaceTarget; // 0x18            
            uint8_t _pad0019[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmTargetInfoNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmTargetInfoNode_CDefinition) == 0x20);
    };
};
