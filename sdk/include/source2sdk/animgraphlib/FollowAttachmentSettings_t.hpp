#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/modellib/CAnimAttachment.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x90
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FollowAttachmentSettings_t
        {
        public:
            source2sdk::modellib::CAnimAttachment m_attachment; // 0x0            
            std::int32_t m_boneIndex; // 0x80            
            source2sdk::modellib::AttachmentHandle_t m_attachmentHandle; // 0x84            
            bool m_bMatchTranslation; // 0x85            
            bool m_bMatchRotation; // 0x86            
            uint8_t _pad0087[0x9];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::FollowAttachmentSettings_t, m_attachment) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::FollowAttachmentSettings_t, m_boneIndex) == 0x80);
        static_assert(offsetof(source2sdk::animgraphlib::FollowAttachmentSettings_t, m_attachmentHandle) == 0x84);
        static_assert(offsetof(source2sdk::animgraphlib::FollowAttachmentSettings_t, m_bMatchTranslation) == 0x85);
        static_assert(offsetof(source2sdk::animgraphlib::FollowAttachmentSettings_t, m_bMatchRotation) == 0x86);
        
        static_assert(sizeof(source2sdk::animgraphlib::FollowAttachmentSettings_t) == 0x90);
    };
};
