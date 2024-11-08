#pragma once
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
    // Size: 0x1758
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Maelstrom : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_damage; // 0x1708        
        int32_t bonus_attack_speed; // 0x170c        
        int32_t chain_chance; // 0x1710        
        int32_t chain_strikes; // 0x1714        
        int32_t chain_damage; // 0x1718        
        int32_t chain_radius; // 0x171c        
        float chain_cooldown; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4]; // 0x1724
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1728        
        client::CountdownTimer m_ChainTimer; // 0x1740        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Maelstrom because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Maelstrom) == 0x1758);
};
