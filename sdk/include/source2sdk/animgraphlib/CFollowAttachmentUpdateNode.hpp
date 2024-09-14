#pragma once
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/FollowAttachmentSettings_t.hpp"
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
    // Standard-layout class: false
    // Size: 0x110
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFollowAttachmentUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x68[0x8]; // 0x68
        animgraphlib::FollowAttachmentSettings_t m_opFixedData; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x100[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFollowAttachmentUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CFollowAttachmentUpdateNode) == 0x110);
};
