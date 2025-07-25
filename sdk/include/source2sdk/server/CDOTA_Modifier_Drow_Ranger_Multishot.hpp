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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Drow_Ranger_Multishot : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_iArrowCount; // 0x1878            
            Vector m_vOriginalTarget; // 0x187c            
            std::int32_t arrow_width; // 0x1888            
            float arrow_speed; // 0x188c            
            float arrow_range_multiplier; // 0x1890            
            std::int32_t wave_count; // 0x1894            
            std::int32_t arrow_count_per_wave; // 0x1898            
            std::int32_t arrow_angle; // 0x189c            
            std::int32_t m_iLoopCount; // 0x18a0            
            float m_flInterval; // 0x18a4            
            float m_flCycleDelay; // 0x18a8            
            float m_flTimeWaste; // 0x18ac            
            source2sdk::entity2::GameTime_t m_flExpectedTime; // 0x18b0            
            uint8_t _pad18b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Drow_Ranger_Multishot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Drow_Ranger_Multishot) == 0x18b8);
    };
};
