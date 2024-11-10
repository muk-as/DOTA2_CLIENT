#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Seasonal_TI11_RockPaperScissors : public client::CDOTA_Buff
    {
    public:
        float challenge_duration; // 0x1708        
        float reveal_duration; // 0x170c        
        float reveal_delay; // 0x1710        
        float completed_cooldown; // 0x1714        
        float think_interval; // 0x1718        
        float acknowledge_range; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x1720[0x4]; // 0x1720
        entity2::GameTime_t m_flRevealTime; // 0x1724        
        client::ParticleIndex_t m_nOverheadFXIndex; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI11_RockPaperScissors because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_TI11_RockPaperScissors) == 0x1730);
};
