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
    // Size: 0x1740
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Mjollnir : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_damage; // 0x16e8        
        int32_t bonus_attack_speed; // 0x16ec        
        int32_t chain_chance; // 0x16f0        
        int32_t chain_strikes; // 0x16f4        
        int32_t chain_damage; // 0x16f8        
        int32_t chain_radius; // 0x16fc        
        int32_t chain_damage_per_charge; // 0x1700        
        int32_t max_charges; // 0x1704        
        float chain_cooldown; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4]; // 0x170c
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1710        
        server::CountdownTimer m_ChainTimer; // 0x1728        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Mjollnir because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Mjollnir) == 0x1740);
};
