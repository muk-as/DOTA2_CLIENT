#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Viper_Nose_Dive : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vTargetPos; // 0x1888            
            Vector m_vStart; // 0x1894            
            float m_flZDelta; // 0x18a0            
            float radius; // 0x18a4            
            float corrosive_radius; // 0x18a8            
            float effect_duration; // 0x18ac            
            float dive_speed; // 0x18b0            
            float start_height; // 0x18b4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Viper_Nose_Dive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Viper_Nose_Dive) == 0x18b8);
    };
};
