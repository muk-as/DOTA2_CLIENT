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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bristleback_Active_ConicalQuillSpray : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t activation_num_quill_sprays; // 0x_            
            float activation_spray_interval; // 0x_            
            std::int32_t activation_angle; // 0x_            
            std::int32_t cast_range_bonus; // 0x_            
            std::int32_t activation_movement_speed_pct; // 0x_            
            std::int32_t activation_turn_rate_pct; // 0x_            
            std::int32_t activation_disable_turning; // 0x_            
            std::int32_t activation_ignore_cast_angle; // 0x_            
            std::int32_t activation_turn_rate; // 0x_            
            float activation_delay; // 0x_            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x_            
            bool bDelayFinished; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flFacingTarget; // 0x_            
            Vector m_vFacing; // 0x_            
            std::int32_t m_nNumSprays; // 0x_            
            std::int32_t m_nPoseParameterWE; // 0x_            
            std::int32_t m_nPoseParameterNS; // 0x_            
            float m_flLastPoseX; // 0x_            
            float m_flLastPoseY; // 0x_            
            std::int32_t m_nLastMaxDirection; // 0x_            
            Vector m_vLastOrigin; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastGameTime; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_Active_ConicalQuillSpray because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Bristleback_Active_ConicalQuillSpray) == 0x_);
    };
};
