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
        class CDOTA_Modifier_Mars_Bulwark_Active : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t redirect_chance; // 0x1888            
            float redirect_range; // 0x188c            
            float forward_angle; // 0x1890            
            float side_angle; // 0x1894            
            float redirect_speed_penatly; // 0x1898            
            float redirect_close_range; // 0x189c            
            std::int32_t attack_redirection_grace_distance; // 0x18a0            
            std::int32_t m_nPoseParameterWE; // 0x18a4            
            std::int32_t m_nPoseParameterNS; // 0x18a8            
            float m_flLastPoseX; // 0x18ac            
            float m_flLastPoseY; // 0x18b0            
            std::int32_t m_nLastMaxDirection; // 0x18b4            
            Vector m_vLastOrigin; // 0x18b8            
            source2sdk::entity2::GameTime_t m_flLastGameTime; // 0x18c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Bulwark_Active because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Mars_Bulwark_Active) == 0x18c8);
    };
};
