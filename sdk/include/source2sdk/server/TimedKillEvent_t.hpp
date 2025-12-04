#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"

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
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct TimedKillEvent_t
        {
        public:
            std::int32_t m_nKillTime; // 0x_            
            float m_flKillValue; // 0x_            
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::TimedKillEvent_t, m_nKillTime) == 0x_);
        static_assert(offsetof(source2sdk::server::TimedKillEvent_t, m_flKillValue) == 0x_);
        static_assert(offsetof(source2sdk::server::TimedKillEvent_t, m_nPlayerID) == 0x_);
        
        static_assert(sizeof(source2sdk::server::TimedKillEvent_t) == 0x_);
    };
};
