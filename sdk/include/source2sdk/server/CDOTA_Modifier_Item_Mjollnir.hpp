#pragma once
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x1760
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Mjollnir : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_damage; // 0x1708        
        int32_t bonus_attack_speed; // 0x170c        
        int32_t chain_chance; // 0x1710        
        int32_t chain_strikes; // 0x1714        
        int32_t chain_damage; // 0x1718        
        int32_t chain_radius; // 0x171c        
        int32_t chain_damage_per_charge; // 0x1720        
        int32_t max_charges; // 0x1724        
        float chain_cooldown; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4]; // 0x172c
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1730        
        server::CountdownTimer m_ChainTimer; // 0x1748        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Mjollnir because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Mjollnir) == 0x1760);
};
