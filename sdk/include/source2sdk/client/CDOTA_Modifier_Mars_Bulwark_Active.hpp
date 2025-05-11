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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mars_Bulwark_Active : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t redirect_chance; // 0x17f8            
            float redirect_range; // 0x17fc            
            float forward_angle; // 0x1800            
            float side_angle; // 0x1804            
            float redirect_speed_penatly; // 0x1808            
            float redirect_close_range; // 0x180c            
            std::int32_t attack_redirection_grace_distance; // 0x1810            
            std::int32_t m_nPoseParameterWE; // 0x1814            
            std::int32_t m_nPoseParameterNS; // 0x1818            
            float m_flLastPoseX; // 0x181c            
            float m_flLastPoseY; // 0x1820            
            std::int32_t m_nLastMaxDirection; // 0x1824            
            Vector m_vLastOrigin; // 0x1828            
            source2sdk::entity2::GameTime_t m_flLastGameTime; // 0x1834            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Bulwark_Active because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Mars_Bulwark_Active) == 0x1838);
    };
};
