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
    class CDOTA_Modifier_Item_Devastator : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_armor; // 0x16e8        
        int32_t projectile_speed; // 0x16ec        
        int32_t bonus_intellect; // 0x16f0        
        int32_t bonus_attack_speed; // 0x16f4        
        float bonus_mana_regen; // 0x16f8        
        int32_t mana_cost; // 0x16fc        
        int32_t slow_duration; // 0x1700        
        int32_t spell_amp_duration; // 0x1704        
        int32_t damage_penalty; // 0x1708        
        int32_t passive_cooldown; // 0x170c        
        // m_InFlightWitchBladeAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightWitchBladeAttackRecords;
        char m_InFlightWitchBladeAttackRecords[0x18]; // 0x1710        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Devastator because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Devastator) == 0x1728);
};
