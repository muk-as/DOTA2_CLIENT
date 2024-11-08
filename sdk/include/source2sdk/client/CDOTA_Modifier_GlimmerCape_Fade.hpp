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
    class CDOTA_Modifier_GlimmerCape_Fade : public client::CDOTA_Buff
    {
    public:
        int32_t active_movement_speed; // 0x1708        
        int32_t barrier_block; // 0x170c        
        int32_t barrier_amount; // 0x1710        
        float initial_fade_delay; // 0x1714        
        float secondary_fade_delay; // 0x1718        
        float m_flFadeTime; // 0x171c        
        float m_flCurentFadeDelay; // 0x1720        
        entity2::GameTime_t m_flLastActionTime; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_GlimmerCape_Fade because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_GlimmerCape_Fade) == 0x1728);
};
