#pragma once
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Witch_Blade : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_intellect; // 0x16e8        
        int32_t bonus_attack_speed; // 0x16ec        
        int32_t bonus_armor; // 0x16f0        
        float slow_duration; // 0x16f4        
        float bonus_mana_regen; // 0x16f8        
        int32_t projectile_speed; // 0x16fc        
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1700        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Witch_Blade because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Witch_Blade) == 0x1718);
};
