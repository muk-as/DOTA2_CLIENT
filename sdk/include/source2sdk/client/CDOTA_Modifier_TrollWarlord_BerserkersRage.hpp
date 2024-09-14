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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_TrollWarlord_BerserkersRage : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_move_speed; // 0x16e8        
        int32_t bonus_hp_pct; // 0x16ec        
        int32_t bonus_armor; // 0x16f0        
        int32_t ensnare_chance; // 0x16f4        
        float ensnare_duration; // 0x16f8        
        int32_t maim_chance; // 0x16fc        
        int32_t maim_damage; // 0x1700        
        float maim_duration; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_TrollWarlord_BerserkersRage because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_TrollWarlord_BerserkersRage) == 0x1708);
};
