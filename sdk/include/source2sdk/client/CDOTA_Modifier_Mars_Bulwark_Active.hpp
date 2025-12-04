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
        class CDOTA_Modifier_Mars_Bulwark_Active : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t redirect_chance; // 0x_            
            float redirect_range; // 0x_            
            float forward_angle; // 0x_            
            float side_angle; // 0x_            
            float redirect_speed_penatly; // 0x_            
            float redirect_close_range; // 0x_            
            std::int32_t attack_redirection_grace_distance; // 0x_            
            std::int32_t m_nPoseParameterWE; // 0x_            
            std::int32_t m_nPoseParameterNS; // 0x_            
            float m_flLastPoseX; // 0x_            
            float m_flLastPoseY; // 0x_            
            std::int32_t m_nLastMaxDirection; // 0x_            
            Vector m_vLastOrigin; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastGameTime; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Bulwark_Active because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Mars_Bulwark_Active) == 0x_);
    };
};
