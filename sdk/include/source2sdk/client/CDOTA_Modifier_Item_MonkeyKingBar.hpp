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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_MonkeyKingBar : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_attack_speed; // 0x16e8        
        int32_t bonus_chance; // 0x16ec        
        int32_t bonus_chance_damage; // 0x16f0        
        int32_t bonus_damage; // 0x16f4        
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x16f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_MonkeyKingBar because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_MonkeyKingBar) == 0x1710);
};
