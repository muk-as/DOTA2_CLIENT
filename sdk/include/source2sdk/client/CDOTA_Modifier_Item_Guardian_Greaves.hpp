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
    class CDOTA_Modifier_Item_Guardian_Greaves : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_movement; // 0x16e8        
        int32_t bonus_mana; // 0x16ec        
        int32_t bonus_mres; // 0x16f0        
        int32_t bonus_armor; // 0x16f4        
        float aura_radius; // 0x16f8        
        float mana_regen; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Guardian_Greaves because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Guardian_Greaves) == 0x1700);
};
