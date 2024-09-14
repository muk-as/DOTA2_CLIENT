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
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Bloodthorn : public client::CDOTA_Buff_Item
    {
    public:
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x16e8        
        int32_t bonus_intellect; // 0x1700        
        float bonus_mana_regen; // 0x1704        
        int32_t bonus_damage; // 0x1708        
        int32_t bonus_attack_speed; // 0x170c        
        int32_t spell_amp; // 0x1710        
        int32_t mana_regen_multiplier; // 0x1714        
        int32_t bonus_magic_resist; // 0x1718        
        float duration; // 0x171c        
        int32_t passive_proc_damage; // 0x1720        
        int32_t proc_chance; // 0x1724        
        float bonus_health_regen; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Bloodthorn because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Bloodthorn) == 0x1730);
};
