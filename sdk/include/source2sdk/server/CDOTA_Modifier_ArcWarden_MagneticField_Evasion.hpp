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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_ArcWarden_MagneticField_Evasion : public client::CDOTA_Buff
    {
    public:
        int32_t evasion_chance; // 0x16e8        
        float radius; // 0x16ec        
        int32_t shard_magic_resist; // 0x16f0        
        int32_t shard_slow_pct; // 0x16f4        
        float aura_origin_x; // 0x16f8        
        float aura_origin_y; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_MagneticField_Evasion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ArcWarden_MagneticField_Evasion) == 0x1700);
};
