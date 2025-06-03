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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_IceWall_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_per_second; // 0x1878            
            Vector m_vWallDirection; // 0x187c            
            Vector m_vWallStart; // 0x1888            
            float wall_total_length; // 0x1894            
            float wall_width; // 0x1898            
            float slow_duration; // 0x189c            
            std::int32_t slow; // 0x18a0            
            float root_damage; // 0x18a4            
            float root_duration; // 0x18a8            
            float tick_interval; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_IceWall_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Invoker_IceWall_Thinker) == 0x18b0);
    };
};
