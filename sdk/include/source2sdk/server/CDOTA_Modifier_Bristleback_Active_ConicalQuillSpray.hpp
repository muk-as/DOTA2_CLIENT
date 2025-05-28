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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bristleback_Active_ConicalQuillSpray : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t activation_num_quill_sprays; // 0x1888            
            float activation_spray_interval; // 0x188c            
            std::int32_t activation_angle; // 0x1890            
            std::int32_t cast_range_bonus; // 0x1894            
            std::int32_t activation_movement_speed_pct; // 0x1898            
            std::int32_t activation_turn_rate_pct; // 0x189c            
            std::int32_t activation_disable_turning; // 0x18a0            
            std::int32_t activation_ignore_cast_angle; // 0x18a4            
            std::int32_t activation_turn_rate; // 0x18a8            
            float activation_delay; // 0x18ac            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x18b0            
            bool bDelayFinished; // 0x18b4            
            uint8_t _pad18b5[0x3]; // 0x18b5
            float m_flFacingTarget; // 0x18b8            
            Vector m_vFacing; // 0x18bc            
            std::int32_t m_nNumSprays; // 0x18c8            
            uint8_t _pad18cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_Active_ConicalQuillSpray because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Bristleback_Active_ConicalQuillSpray) == 0x18d0);
    };
};
