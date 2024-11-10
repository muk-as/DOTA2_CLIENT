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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_ArcWarden_MagneticField_Evasion : public client::CDOTA_Buff
    {
    public:
        int32_t evasion_chance; // 0x1708        
        float radius; // 0x170c        
        int32_t shard_magic_resist; // 0x1710        
        int32_t shard_slow_pct; // 0x1714        
        float aura_origin_x; // 0x1718        
        float aura_origin_y; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_MagneticField_Evasion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ArcWarden_MagneticField_Evasion) == 0x1720);
};
