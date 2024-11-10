#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_ShadowShaman_Shackles : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t nShackleFXIndex; // 0x1708        
        float tick_interval; // 0x170c        
        float total_damage; // 0x1710        
        float channel_time; // 0x1714        
        float heal_percentage; // 0x1718        
        bool bApplyHeal; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0xb];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ShadowShaman_Shackles because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ShadowShaman_Shackles) == 0x1728);
};
