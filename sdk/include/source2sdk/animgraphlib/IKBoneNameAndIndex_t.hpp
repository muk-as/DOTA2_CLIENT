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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        struct IKBoneNameAndIndex_t
        {
        public:
            // metadata: MPropertyAttributeChoiceName "Bone"
            CUtlString m_Name; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::IKBoneNameAndIndex_t, m_Name) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::IKBoneNameAndIndex_t) == 0x_);
    };
};
