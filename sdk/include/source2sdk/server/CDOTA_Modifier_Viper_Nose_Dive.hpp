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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Viper_Nose_Dive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flPredictedTotalTime; // 0x1878            
            float m_flCurrentTimeVert; // 0x187c            
            Vector m_vTargetPos; // 0x1880            
            Vector m_vStart; // 0x188c            
            float m_flZDelta; // 0x1898            
            float radius; // 0x189c            
            float corrosive_radius; // 0x18a0            
            float effect_duration; // 0x18a4            
            float dive_speed; // 0x18a8            
            float start_height; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Viper_Nose_Dive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Viper_Nose_Dive) == 0x18b0);
    };
};
