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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Slark_Pounce : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTime; // 0x1878            
            float m_flInitialVelocity; // 0x187c            
            Vector m_vStartPosition; // 0x1880            
            Vector m_vTargetHorizontalDirection; // 0x188c            
            float m_flCurrentTimeHoriz; // 0x1898            
            float m_flCurrentTimeVert; // 0x189c            
            bool m_bInterrupted; // 0x18a0            
            bool m_bFoundUnit; // 0x18a1            
            uint8_t _pad18a2[0x2]; // 0x18a2
            std::int32_t pounce_distance; // 0x18a4            
            std::int32_t pounce_distance_scepter; // 0x18a8            
            float pounce_speed; // 0x18ac            
            float pounce_acceleration; // 0x18b0            
            std::int32_t pounce_radius; // 0x18b4            
            std::int32_t pounce_damage; // 0x18b8            
            float leash_duration; // 0x18bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Slark_Pounce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Slark_Pounce) == 0x18c0);
    };
};
