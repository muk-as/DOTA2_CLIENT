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
    class CDOTA_Modifier_Item_CraniumBasher : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_strength; // 0x16e8        
        int32_t bash_chance_melee; // 0x16ec        
        int32_t bash_chance_ranged; // 0x16f0        
        float bash_duration; // 0x16f4        
        float bash_cooldown; // 0x16f8        
        int32_t bonus_chance_damage; // 0x16fc        
        int32_t bonus_damage; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4]; // 0x1704
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1708        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_CraniumBasher because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_CraniumBasher) == 0x1720);
};
