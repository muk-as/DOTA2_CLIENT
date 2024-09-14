#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    class CDOTA_Modifier_Item_Mjollnir_Static : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x16e8[0x8]; // 0x16e8
        int32_t static_chance; // 0x16f0        
        int32_t static_strikes; // 0x16f4        
        int32_t static_damage; // 0x16f8        
        int32_t static_primary_radius; // 0x16fc        
        int32_t static_seconary_radius; // 0x1700        
        int32_t static_radius; // 0x1704        
        float static_cooldown; // 0x1708        
        int32_t chain_damage_per_charge; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Mjollnir_Static because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Mjollnir_Static) == 0x1710);
};
