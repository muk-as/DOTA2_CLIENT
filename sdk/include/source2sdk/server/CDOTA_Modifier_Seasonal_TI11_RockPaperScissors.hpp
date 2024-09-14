#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Seasonal_TI11_RockPaperScissors : public client::CDOTA_Buff
    {
    public:
        float challenge_duration; // 0x16e8        
        float reveal_duration; // 0x16ec        
        float reveal_delay; // 0x16f0        
        float completed_cooldown; // 0x16f4        
        float think_interval; // 0x16f8        
        float acknowledge_range; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x1700[0x4]; // 0x1700
        entity2::GameTime_t m_flRevealTime; // 0x1704        
        bool m_bFirstThink; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        client::PlayerID_t m_nRevealOpponentPlayerID; // 0x170c        
        [[maybe_unused]] std::uint8_t pad_0x1710[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI11_RockPaperScissors because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_TI11_RockPaperScissors) == 0x1718);
};
