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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AntiMage_Mana_Thirst : public client::CDOTA_Buff
    {
    public:
        int32_t thirst_enabled; // 0x16e8        
        int32_t threshold_pct; // 0x16ec        
        int32_t bonus_attack_damage; // 0x16f0        
        float linger_duration; // 0x16f4        
        int32_t min_bonus_pct; // 0x16f8        
        int32_t max_bonus_pct; // 0x16fc        
        float thirst_range; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AntiMage_Mana_Thirst because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AntiMage_Mana_Thirst) == 0x1708);
};
