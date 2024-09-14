#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Falcon_Blade : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_damage; // 0x16e8        
        int32_t bonus_damage_per_kill; // 0x16ec        
        int32_t bonus_damage_per_assist; // 0x16f0        
        int32_t bonus_health; // 0x16f4        
        int32_t max_damage; // 0x16f8        
        float bonus_mana_regen; // 0x16fc        
        int32_t stack_limit; // 0x1700        
        float stack_duration; // 0x1704        
        entity2::GameTime_t m_flStackDieTime; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Falcon_Blade because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Falcon_Blade) == 0x1710);
};
