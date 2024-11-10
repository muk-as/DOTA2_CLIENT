#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Marci_Unleash_Flurry : public client::CDOTA_Buff
    {
    public:
        int32_t flurry_bonus_attack_speed; // 0x1708        
        float time_between_flurries; // 0x170c        
        float debuff_duration; // 0x1710        
        float max_time_window_per_hit; // 0x1714        
        bool m_bBonusSpeed; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x3]; // 0x1719
        client::ParticleIndex_t m_nFXStackIndex; // 0x171c        
        bool m_bIsDoingFlurryAttack; // 0x1720        
        bool m_bIsDoingFlurryPulseAttack; // 0x1721        
        [[maybe_unused]] std::uint8_t pad_0x1722[0x2]; // 0x1722
        entity2::GameTime_t m_fLastAttackTime; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Unleash_Flurry because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Marci_Unleash_Flurry) == 0x1728);
};
