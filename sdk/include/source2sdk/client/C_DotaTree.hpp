#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x30
    // Has VTable
    // Is Abstract
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DotaTree
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x2c]; // 0x0
        uint32_t m_unOccluderID; // 0x2c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(C_DotaTree, m_unOccluderID) == 0x2c);
    
    static_assert(sizeof(C_DotaTree) == 0x30);
};
