#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmCurrentSyncEventNode_InfoType_t.hpp"
#include "source2sdk/animlib/CNmFloatValueNode_CDefinition.hpp"

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
        class CNmCurrentSyncEventNode_CDefinition : public source2sdk::animlib::CNmFloatValueNode_CDefinition
        {
        public:
            std::int16_t m_nSourceStateNodeIdx; // 0x10            
            source2sdk::animlib::CNmCurrentSyncEventNode_InfoType_t m_infoType; // 0x12            
            uint8_t _pad0013[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmCurrentSyncEventNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmCurrentSyncEventNode_CDefinition) == 0x18);
    };
};
