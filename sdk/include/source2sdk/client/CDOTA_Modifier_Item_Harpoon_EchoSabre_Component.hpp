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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Harpoon_EchoSabre_Component : public client::CDOTA_Buff_Item
    {
    public:
        float slow_duration; // 0x1708        
        int32_t bonus_attack_speed; // 0x170c        
        bool bonus_speed; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x3]; // 0x1711
        float passive_cooldown; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Harpoon_EchoSabre_Component because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Harpoon_EchoSabre_Component) == 0x1718);
};
