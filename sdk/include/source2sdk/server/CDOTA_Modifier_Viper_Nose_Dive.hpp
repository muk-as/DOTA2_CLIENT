#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Viper_Nose_Dive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flPredictedTotalTime; // 0x_            
            float m_flCurrentTimeVert; // 0x_            
            Vector m_vTargetPos; // 0x_            
            Vector m_vStart; // 0x_            
            float m_flZDelta; // 0x_            
            float radius; // 0x_            
            float corrosive_radius; // 0x_            
            float effect_duration; // 0x_            
            float dive_speed; // 0x_            
            float start_height; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Viper_Nose_Dive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Viper_Nose_Dive) == 0x_);
    };
};
