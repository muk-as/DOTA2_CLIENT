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
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Harpoon : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_chance; // 0x16e8        
        int32_t bonus_chance_damage; // 0x16ec        
        int32_t bonus_strength; // 0x16f0        
        int32_t bonus_agility; // 0x16f4        
        int32_t bonus_intellect; // 0x16f8        
        float bonus_mana_regen; // 0x16fc        
        int32_t bonus_damage; // 0x1700        
        int32_t bonus_speed; // 0x1704        
        // m_InFlightProcAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightProcAttackRecords;
        char m_InFlightProcAttackRecords[0x18]; // 0x1708        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Harpoon because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Harpoon) == 0x1720);
};
