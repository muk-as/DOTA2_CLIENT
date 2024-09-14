#pragma once
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    #pragma pack(push, 1)
    struct GameChatLogEntry_t
    {
    public:
        int32_t m_nTeam; // 0x0        
        client::PlayerID_t m_nPlayerID; // 0x4        
        CUtlString m_sText; // 0x8        
        entity2::GameTime_t m_flGameTime; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(GameChatLogEntry_t, m_nTeam) == 0x0);
    static_assert(offsetof(GameChatLogEntry_t, m_nPlayerID) == 0x4);
    static_assert(offsetof(GameChatLogEntry_t, m_sText) == 0x8);
    static_assert(offsetof(GameChatLogEntry_t, m_flGameTime) == 0x10);
    
    static_assert(sizeof(GameChatLogEntry_t) == 0x18);
};
