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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Earthshaker_EnchantTotem : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_attack_range; // 0x1708        
        int32_t totem_damage_percentage; // 0x170c        
        int32_t scepter_cleave_pct; // 0x1710        
        float scepter_cleave_starting_width; // 0x1714        
        float scepter_cleave_ending_width; // 0x1718        
        float scepter_cleave_distance; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x1720[0x8]; // 0x1720
        bool bActive; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1729[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Earthshaker_EnchantTotem because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Earthshaker_EnchantTotem) == 0x1730);
};
