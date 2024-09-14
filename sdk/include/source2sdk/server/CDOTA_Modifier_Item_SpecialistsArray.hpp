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
    // Size: 0x1738
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_SpecialistsArray : public server::CDOTA_Buff_Item
    {
    public:
        int32_t all_stats; // 0x16e8        
        int32_t bonus_damage; // 0x16ec        
        int32_t proc_bonus_damage; // 0x16f0        
        int32_t count; // 0x16f4        
        int32_t secondary_target_range_bonus; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_SpecialistsArray because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_SpecialistsArray) == 0x1738);
};
