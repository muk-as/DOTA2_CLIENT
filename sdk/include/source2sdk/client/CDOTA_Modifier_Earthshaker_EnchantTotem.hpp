#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Earthshaker_EnchantTotem : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_attack_range; // 0x16e8        
        int32_t totem_damage_percentage; // 0x16ec        
        int32_t scepter_cleave_pct; // 0x16f0        
        float scepter_cleave_starting_width; // 0x16f4        
        float scepter_cleave_ending_width; // 0x16f8        
        float scepter_cleave_distance; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Earthshaker_EnchantTotem because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Earthshaker_EnchantTotem) == 0x1700);
};
