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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Harpoon_EchoSabre_Component : public server::CDOTA_Buff_Item
    {
    public:
        float slow_duration; // 0x16e8        
        int32_t bonus_attack_speed; // 0x16ec        
        bool bonus_speed; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f1[0x3]; // 0x16f1
        float passive_cooldown; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Harpoon_EchoSabre_Component because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Harpoon_EchoSabre_Component) == 0x16f8);
};
