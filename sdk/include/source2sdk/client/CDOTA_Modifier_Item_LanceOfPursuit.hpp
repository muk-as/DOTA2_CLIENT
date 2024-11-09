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
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_LanceOfPursuit : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_mana; // 0x1708        
        int32_t bonus_strength; // 0x170c        
        int32_t backstab_damage; // 0x1710        
        int32_t backstab_angle; // 0x1714        
        float slow_duration; // 0x1718        
        bool m_bBackstab; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_LanceOfPursuit because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_LanceOfPursuit) == 0x1720);
};
