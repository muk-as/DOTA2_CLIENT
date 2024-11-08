#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tiny_Grow : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_armor; // 0x1708        
        int32_t attack_speed_reduction; // 0x170c        
        int32_t bonus_damage; // 0x1710        
        float tree_bonus_damage_pct; // 0x1714        
        float move_speed; // 0x1718        
        client::ParticleIndex_t m_nFXIndex; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tiny_Grow because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tiny_Grow) == 0x1720);
};
