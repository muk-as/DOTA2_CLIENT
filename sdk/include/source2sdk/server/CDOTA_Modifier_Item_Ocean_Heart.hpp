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
    class CDOTA_Modifier_Item_Ocean_Heart : public server::CDOTA_Buff_Item
    {
    public:
        float water_hp_regen; // 0x16e8        
        float water_mp_regen; // 0x16ec        
        int32_t all_stats; // 0x16f0        
        bool m_bInRiver; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Ocean_Heart because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Ocean_Heart) == 0x16f8);
};
