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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x40
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmTargetOffsetNode_CDefinition : public source2sdk::animlib::CNmTargetValueNode_CDefinition
        {
        public:
            std::int16_t m_nInputValueNodeIdx; // 0x10            
            bool m_bIsBoneSpaceOffset; // 0x12            
            uint8_t _pad0013[0xd]; // 0x13
            Quaternion m_rotationOffset; // 0x20            
            Vector m_translationOffset; // 0x30            
            uint8_t _pad003c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmTargetOffsetNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmTargetOffsetNode_CDefinition) == 0x40);
    };
};
