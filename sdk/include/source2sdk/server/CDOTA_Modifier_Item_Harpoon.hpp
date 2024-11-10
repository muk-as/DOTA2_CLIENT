#pragma once
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
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Harpoon : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_chance; // 0x1708        
        int32_t bonus_chance_damage; // 0x170c        
        int32_t bonus_strength; // 0x1710        
        int32_t bonus_agility; // 0x1714        
        int32_t bonus_intellect; // 0x1718        
        float bonus_mana_regen; // 0x171c        
        int32_t bonus_damage; // 0x1720        
        int32_t bonus_speed; // 0x1724        
        // m_InFlightProcAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightProcAttackRecords;
        char m_InFlightProcAttackRecords[0x18]; // 0x1728        
        int32_t m_nBonusProcAttackRecord; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Harpoon because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Harpoon) == 0x1748);
};
