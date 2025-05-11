#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_TI11_RockPaperScissors : public source2sdk::client::CDOTA_Buff
        {
        public:
            float challenge_duration; // 0x17f8            
            float reveal_duration; // 0x17fc            
            float reveal_delay; // 0x1800            
            float completed_cooldown; // 0x1804            
            float think_interval; // 0x1808            
            float acknowledge_range; // 0x180c            
            uint8_t _pad1810[0x4]; // 0x1810
            source2sdk::entity2::GameTime_t m_flRevealTime; // 0x1814            
            bool m_bFirstThink; // 0x1818            
            uint8_t _pad1819[0x3]; // 0x1819
            source2sdk::client::PlayerID_t m_nRevealOpponentPlayerID; // 0x181c            
            uint8_t _pad1820[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI11_RockPaperScissors because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Seasonal_TI11_RockPaperScissors) == 0x1828);
    };
};
