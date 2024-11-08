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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Medusa_ManaShield : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_mana; // 0x1708        
        float absorption_pct; // 0x170c        
        float damage_per_mana; // 0x1710        
        float damage_per_mana_per_level; // 0x1714        
        float illusion_percentage; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Medusa_ManaShield because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Medusa_ManaShield) == 0x1720);
};
