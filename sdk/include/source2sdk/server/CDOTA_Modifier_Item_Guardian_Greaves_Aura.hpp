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
    class CDOTA_Modifier_Item_Guardian_Greaves_Aura : public client::CDOTA_Buff
    {
    public:
        float aura_health_regen; // 0x1708        
        float aura_armor; // 0x170c        
        float aura_health_regen_bonus; // 0x1710        
        float aura_armor_bonus; // 0x1714        
        float aura_mana_regen; // 0x1718        
        float aura_mana_regen_bonus; // 0x171c        
        int32_t aura_bonus_threshold; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Guardian_Greaves_Aura because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Guardian_Greaves_Aura) == 0x1728);
};
