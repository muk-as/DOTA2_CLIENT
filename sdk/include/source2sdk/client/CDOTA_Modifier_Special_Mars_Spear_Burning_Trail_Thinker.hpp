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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Special_Mars_Spear_Burning_Trail_Thinker : public client::CDOTA_Buff
    {
    public:
        Vector m_vPathDir; // 0x16e8        
        int32_t shard_trail_radius; // 0x16f4        
        float shard_debuff_linger_duration; // 0x16f8        
        float shard_interval; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Special_Mars_Spear_Burning_Trail_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Special_Mars_Spear_Burning_Trail_Thinker) == 0x1700);
};
