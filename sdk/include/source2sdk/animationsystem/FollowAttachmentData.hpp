#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/AttachmentHandle_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class FollowAttachmentData
        {
        public:
            std::int32_t m_boneIndex; // 0x0            
            source2sdk::modellib::AttachmentHandle_t m_attachmentHandle; // 0x4            
            uint8_t _pad0005[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::FollowAttachmentData, m_boneIndex) == 0x0);
        static_assert(offsetof(source2sdk::animationsystem::FollowAttachmentData, m_attachmentHandle) == 0x4);
        
        static_assert(sizeof(source2sdk::animationsystem::FollowAttachmentData) == 0x8);
    };
};
