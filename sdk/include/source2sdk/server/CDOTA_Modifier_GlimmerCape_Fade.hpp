#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_GlimmerCape_Fade : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t active_movement_speed; // 0x1878            
            std::int32_t barrier_block; // 0x187c            
            std::int32_t barrier_amount; // 0x1880            
            float initial_fade_delay; // 0x1884            
            float secondary_fade_delay; // 0x1888            
            float m_flFadeTime; // 0x188c            
            float m_flCurentFadeDelay; // 0x1890            
            source2sdk::entity2::GameTime_t m_flLastActionTime; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_GlimmerCape_Fade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_GlimmerCape_Fade) == 0x1898);
    };
};
