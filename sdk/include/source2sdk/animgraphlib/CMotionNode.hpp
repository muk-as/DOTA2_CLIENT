#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/AnimNodeID.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMotionNode
        {
        public:
            uint8_t _pad0000[0x18]; // 0x0
            CUtlString m_name; // 0x18            
            source2sdk::modellib::AnimNodeID m_id; // 0x20            
            uint8_t _pad0024[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CMotionNode, m_name) == 0x18);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionNode, m_id) == 0x20);
        
        static_assert(sizeof(source2sdk::animgraphlib::CMotionNode) == 0x28);
    };
};
