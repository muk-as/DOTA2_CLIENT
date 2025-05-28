#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Clinkz_BurningBarrage : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_iArrowCount; // 0x1888            
            Vector m_vOriginalTarget; // 0x188c            
            std::int32_t arrow_width; // 0x1898            
            float arrow_speed; // 0x189c            
            float arrow_range_multiplier; // 0x18a0            
            std::int32_t wave_count; // 0x18a4            
            std::int32_t arrow_count_per_wave; // 0x18a8            
            std::int32_t arrow_angle; // 0x18ac            
            std::int32_t m_iLoopCount; // 0x18b0            
            float m_flInterval; // 0x18b4            
            float m_flCycleDelay; // 0x18b8            
            float m_flTimeWaste; // 0x18bc            
            source2sdk::entity2::GameTime_t m_flExpectedTime; // 0x18c0            
            uint8_t _pad18c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Clinkz_BurningBarrage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Clinkz_BurningBarrage) == 0x18c8);
    };
};
