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
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Tenderizer : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_strength; // 0x1708        
        int32_t bonus_agility; // 0x170c        
        int32_t bash_chance_melee; // 0x1710        
        int32_t bash_chance_ranged; // 0x1714        
        float bash_duration; // 0x1718        
        float bash_cooldown; // 0x171c        
        int32_t bonus_chance_damage; // 0x1720        
        int32_t bonus_damage; // 0x1724        
        int32_t weaken_per_hit; // 0x1728        
        float weaken_duration; // 0x172c        
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1730        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Tenderizer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Tenderizer) == 0x1748);
};
