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
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Tenderizer : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_strength; // 0x16e8        
        int32_t bonus_agility; // 0x16ec        
        int32_t bash_chance_melee; // 0x16f0        
        int32_t bash_chance_ranged; // 0x16f4        
        float bash_duration; // 0x16f8        
        float bash_cooldown; // 0x16fc        
        int32_t bonus_chance_damage; // 0x1700        
        int32_t bonus_damage; // 0x1704        
        int32_t weaken_per_hit; // 0x1708        
        float weaken_duration; // 0x170c        
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1710        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Tenderizer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Tenderizer) == 0x1728);
};
