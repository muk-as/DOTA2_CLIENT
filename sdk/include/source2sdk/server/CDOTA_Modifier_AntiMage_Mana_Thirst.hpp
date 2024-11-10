#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    class CDOTA_Modifier_AntiMage_Mana_Thirst : public client::CDOTA_Buff
    {
    public:
        int32_t thirst_enabled; // 0x1708        
        int32_t threshold_pct; // 0x170c        
        int32_t bonus_attack_damage; // 0x1710        
        float linger_duration; // 0x1714        
        int32_t min_bonus_pct; // 0x1718        
        int32_t max_bonus_pct; // 0x171c        
        float thirst_range; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AntiMage_Mana_Thirst because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AntiMage_Mana_Thirst) == 0x1728);
};
