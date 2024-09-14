#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Enigma_BlackHole_Pull : public client::CDOTA_Buff
    {
    public:
        int32_t pull_speed; // 0x16e8        
        int32_t radius; // 0x16ec        
        int32_t damage; // 0x16f0        
        float tick_rate; // 0x16f4        
        float pull_rotate_speed; // 0x16f8        
        float animation_rate; // 0x16fc        
        float scepter_pct_damage; // 0x1700        
        entity2::GameTime_t m_flDamageTick; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_BlackHole_Pull because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Enigma_BlackHole_Pull) == 0x1708);
};
