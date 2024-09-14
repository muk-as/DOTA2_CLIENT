#pragma once
#include "source2sdk/modellib/CAnimAttachment.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
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
        modellib::CAnimAttachment m_attachment; // 0x0        
        int32_t m_boneIndex; // 0x80        
        bool m_bMatchTranslation; // 0x84        
        bool m_bMatchRotation; // 0x85        
        [[maybe_unused]] std::uint8_t pad_0x86[0xa];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FollowAttachmentSettings_t, m_attachment) == 0x0);
    static_assert(offsetof(FollowAttachmentSettings_t, m_boneIndex) == 0x80);
    static_assert(offsetof(FollowAttachmentSettings_t, m_bMatchTranslation) == 0x84);
    static_assert(offsetof(FollowAttachmentSettings_t, m_bMatchRotation) == 0x85);
    
    static_assert(sizeof(FollowAttachmentSettings_t) == 0x90);
};
