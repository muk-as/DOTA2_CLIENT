#pragma once
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
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
        int32_t m_boneIndex; // 0x0        
        modellib::AttachmentHandle_t m_attachmentHandle; // 0x4        
        [[maybe_unused]] std::uint8_t pad_0x05[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FollowAttachmentData, m_boneIndex) == 0x0);
    static_assert(offsetof(FollowAttachmentData, m_attachmentHandle) == 0x4);
    
    static_assert(sizeof(FollowAttachmentData) == 0x8);
};
