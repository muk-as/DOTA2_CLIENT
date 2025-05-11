#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x10
        #pragma pack(push, 1)
        struct IKBoneNameAndIndex_t
        {
        public:
            // metadata: MPropertyAttributeChoiceName "Bone"
            CUtlString m_Name; // 0x0            
            uint8_t _pad0008[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::IKBoneNameAndIndex_t, m_Name) == 0x0);
        
        static_assert(sizeof(source2sdk::animgraphlib::IKBoneNameAndIndex_t) == 0x10);
    };
};
