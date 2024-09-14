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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Orb_of_Pestilence : public client::CDOTA_Buff_Item
    {
    public:
        int32_t poison_movement_speed_melee; // 0x16e8        
        int32_t poison_movement_speed_range; // 0x16ec        
        float poison_duration; // 0x16f0        
        float poison_damage; // 0x16f4        
        int32_t armor; // 0x16f8        
        float hp_regen; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Orb_of_Pestilence because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Orb_of_Pestilence) == 0x1700);
};
