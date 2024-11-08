#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Enigma_BlackHole_Pull : public client::CDOTA_Buff
    {
    public:
        int32_t pull_speed; // 0x1708        
        int32_t radius; // 0x170c        
        int32_t damage; // 0x1710        
        float tick_rate; // 0x1714        
        float pull_rotate_speed; // 0x1718        
        float animation_rate; // 0x171c        
        float scepter_pct_damage; // 0x1720        
        entity2::GameTime_t m_flDamageTick; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_BlackHole_Pull because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Enigma_BlackHole_Pull) == 0x1728);
};
