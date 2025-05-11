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
        // Size: 0x1860
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bristleback_Active_ConicalQuillSpray : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t activation_num_quill_sprays; // 0x17f8            
            float activation_spray_interval; // 0x17fc            
            std::int32_t activation_angle; // 0x1800            
            std::int32_t cast_range_bonus; // 0x1804            
            std::int32_t activation_movement_speed_pct; // 0x1808            
            std::int32_t activation_turn_rate_pct; // 0x180c            
            std::int32_t activation_disable_turning; // 0x1810            
            std::int32_t activation_ignore_cast_angle; // 0x1814            
            std::int32_t activation_turn_rate; // 0x1818            
            float activation_delay; // 0x181c            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1820            
            bool bDelayFinished; // 0x1824            
            uint8_t _pad1825[0x3]; // 0x1825
            float m_flFacingTarget; // 0x1828            
            Vector m_vFacing; // 0x182c            
            std::int32_t m_nNumSprays; // 0x1838            
            std::int32_t m_nPoseParameterWE; // 0x183c            
            std::int32_t m_nPoseParameterNS; // 0x1840            
            float m_flLastPoseX; // 0x1844            
            float m_flLastPoseY; // 0x1848            
            std::int32_t m_nLastMaxDirection; // 0x184c            
            Vector m_vLastOrigin; // 0x1850            
            source2sdk::entity2::GameTime_t m_flLastGameTime; // 0x185c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_Active_ConicalQuillSpray because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Bristleback_Active_ConicalQuillSpray) == 0x1860);
    };
};
