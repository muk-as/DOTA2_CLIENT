#pragma once
#include "source2sdk/client/CDOTA_Modifier_Hexed.hpp"
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
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_UnstableWand_Critter : public client::CDOTA_Modifier_Hexed
    {
    public:
        int32_t active_movespeed_pct; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_UnstableWand_Critter because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_UnstableWand_Critter) == 0x16f0);
};
