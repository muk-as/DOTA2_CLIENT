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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_AncientGuardian : public client::CDOTA_Buff_Item
    {
    public:
        int32_t actual_bonus_damage; // 0x16e8        
        int32_t extra_bonus_damage; // 0x16ec        
        int32_t bonus_damage; // 0x16f0        
        float radius; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_AncientGuardian because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_AncientGuardian) == 0x16f8);
};