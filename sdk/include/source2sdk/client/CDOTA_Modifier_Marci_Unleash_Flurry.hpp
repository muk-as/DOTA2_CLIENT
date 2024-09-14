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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Marci_Unleash_Flurry : public client::CDOTA_Buff
    {
    public:
        int32_t flurry_bonus_attack_speed; // 0x16e8        
        float time_between_flurries; // 0x16ec        
        float debuff_duration; // 0x16f0        
        float max_time_window_per_hit; // 0x16f4        
        bool m_bBonusSpeed; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16f9[0x3]; // 0x16f9
        client::ParticleIndex_t m_nFXStackIndex; // 0x16fc        
        bool m_bIsDoingFlurryAttack; // 0x1700        
        bool m_bIsDoingFlurryPulseAttack; // 0x1701        
        [[maybe_unused]] std::uint8_t pad_0x1702[0x2]; // 0x1702
        entity2::GameTime_t m_fLastAttackTime; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Unleash_Flurry because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Marci_Unleash_Flurry) == 0x1708);
};
