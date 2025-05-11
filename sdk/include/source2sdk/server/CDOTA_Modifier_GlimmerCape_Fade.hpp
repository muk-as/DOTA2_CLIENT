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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_GlimmerCape_Fade : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t active_movement_speed; // 0x17f8            
            std::int32_t barrier_block; // 0x17fc            
            std::int32_t barrier_amount; // 0x1800            
            float initial_fade_delay; // 0x1804            
            float secondary_fade_delay; // 0x1808            
            float m_flFadeTime; // 0x180c            
            float m_flCurentFadeDelay; // 0x1810            
            source2sdk::entity2::GameTime_t m_flLastActionTime; // 0x1814            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_GlimmerCape_Fade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_GlimmerCape_Fade) == 0x1818);
    };
};
