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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class FollowAttachmentData
        {
        public:
            std::int32_t m_boneIndex; // 0x_            
            source2sdk::modellib::AttachmentHandle_t m_attachmentHandle; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::FollowAttachmentData, m_boneIndex) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::FollowAttachmentData, m_attachmentHandle) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::FollowAttachmentData) == 0x_);
    };
};
