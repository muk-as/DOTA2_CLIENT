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
    // Size: 0x1758
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Medusa_SplitShot : public client::CDOTA_Buff
    {
    public:
        int32_t damage_modifier; // 0x1708        
        int32_t range; // 0x170c        
        int32_t arrow_count; // 0x1710        
        int32_t projectile_speed; // 0x1714        
        client::ParticleIndex_t m_nSplitShotBowFXIndex; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Medusa_SplitShot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Medusa_SplitShot) == 0x1758);
};
