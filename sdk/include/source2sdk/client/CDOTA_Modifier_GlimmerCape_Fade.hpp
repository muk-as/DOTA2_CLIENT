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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_GlimmerCape_Fade : public client::CDOTA_Buff
    {
    public:
        int32_t active_movement_speed; // 0x16e8        
        int32_t barrier_block; // 0x16ec        
        int32_t barrier_amount; // 0x16f0        
        float initial_fade_delay; // 0x16f4        
        float secondary_fade_delay; // 0x16f8        
        float m_flFadeTime; // 0x16fc        
        float m_flCurentFadeDelay; // 0x1700        
        entity2::GameTime_t m_flLastActionTime; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_GlimmerCape_Fade because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_GlimmerCape_Fade) == 0x1708);
};
