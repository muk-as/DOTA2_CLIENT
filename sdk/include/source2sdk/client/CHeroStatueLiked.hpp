#pragma once
#include "source2sdk/client/PlayerID_t.hpp"
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
    // Size: 0x38
    // Has VTable
    // MNetworkNoBase
    // 
    // static metadata: MNetworkVarNames "PlayerID_t m_iPlayerIDLiker"
    // static metadata: MNetworkVarNames "PlayerID_t m_iPlayerIDLiked"
    #pragma pack(push, 1)
    class CHeroStatueLiked
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        client::PlayerID_t m_iPlayerIDLiker; // 0x30        
        // metadata: MNetworkEnable
        client::PlayerID_t m_iPlayerIDLiked; // 0x34        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CHeroStatueLiked, m_iPlayerIDLiker) == 0x30);
    static_assert(offsetof(CHeroStatueLiked, m_iPlayerIDLiked) == 0x34);
    
    static_assert(sizeof(CHeroStatueLiked) == 0x38);
};
