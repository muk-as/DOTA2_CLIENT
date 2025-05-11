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
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Slark_Pounce : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTime; // 0x17f8            
            float m_flInitialVelocity; // 0x17fc            
            Vector m_vStartPosition; // 0x1800            
            Vector m_vTargetHorizontalDirection; // 0x180c            
            float m_flCurrentTimeHoriz; // 0x1818            
            float m_flCurrentTimeVert; // 0x181c            
            bool m_bInterrupted; // 0x1820            
            bool m_bFoundUnit; // 0x1821            
            uint8_t _pad1822[0x2]; // 0x1822
            std::int32_t pounce_distance; // 0x1824            
            std::int32_t pounce_distance_scepter; // 0x1828            
            float pounce_speed; // 0x182c            
            float pounce_acceleration; // 0x1830            
            std::int32_t pounce_radius; // 0x1834            
            std::int32_t pounce_damage; // 0x1838            
            float leash_duration; // 0x183c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Slark_Pounce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Slark_Pounce) == 0x1840);
    };
};
