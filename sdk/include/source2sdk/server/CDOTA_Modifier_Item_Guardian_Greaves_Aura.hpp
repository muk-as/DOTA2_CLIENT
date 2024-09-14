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
    class CDOTA_Modifier_Item_Guardian_Greaves_Aura : public client::CDOTA_Buff
    {
    public:
        float aura_health_regen; // 0x16e8        
        float aura_armor; // 0x16ec        
        float aura_health_regen_bonus; // 0x16f0        
        float aura_armor_bonus; // 0x16f4        
        float aura_mana_regen; // 0x16f8        
        float aura_mana_regen_bonus; // 0x16fc        
        int32_t aura_bonus_threshold; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Guardian_Greaves_Aura because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Guardian_Greaves_Aura) == 0x1708);
};
