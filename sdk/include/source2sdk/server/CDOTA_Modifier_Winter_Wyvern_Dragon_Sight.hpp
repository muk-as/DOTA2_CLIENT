#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Winter_Wyvern_Dragon_Sight : public client::CDOTA_Buff
    {
    public:
        int32_t attack_range_per_damage; // 0x16e8        
        int32_t attack_range_min; // 0x16ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Winter_Wyvern_Dragon_Sight because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Winter_Wyvern_Dragon_Sight) == 0x16f0);
};
