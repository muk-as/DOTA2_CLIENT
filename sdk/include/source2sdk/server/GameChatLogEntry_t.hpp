#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        struct GameChatLogEntry_t
        {
        public:
            std::int32_t m_nTeam; // 0x_            
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x_            
            CUtlString m_sText; // 0x_            
            source2sdk::entity2::GameTime_t m_flGameTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::GameChatLogEntry_t, m_nTeam) == 0x_);
        static_assert(offsetof(source2sdk::server::GameChatLogEntry_t, m_nPlayerID) == 0x_);
        static_assert(offsetof(source2sdk::server::GameChatLogEntry_t, m_sText) == 0x_);
        static_assert(offsetof(source2sdk::server::GameChatLogEntry_t, m_flGameTime) == 0x_);
        
        static_assert(sizeof(source2sdk::server::GameChatLogEntry_t) == 0x_);
    };
};
