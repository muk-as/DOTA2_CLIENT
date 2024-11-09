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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_TrollWarlord_BerserkersRage : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_move_speed; // 0x1708        
        int32_t bonus_hp_pct; // 0x170c        
        int32_t bonus_armor; // 0x1710        
        int32_t ensnare_chance; // 0x1714        
        float ensnare_duration; // 0x1718        
        int32_t maim_chance; // 0x171c        
        int32_t maim_damage; // 0x1720        
        float maim_duration; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_TrollWarlord_BerserkersRage because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_TrollWarlord_BerserkersRage) == 0x1728);
};
