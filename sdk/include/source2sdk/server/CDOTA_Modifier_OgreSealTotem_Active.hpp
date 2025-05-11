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
        // Size: 0x1858
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_OgreSealTotem_Active : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTime; // 0x17f8            
            float m_flInitialVelocity; // 0x17fc            
            Vector m_vStartPosition; // 0x1800            
            Vector m_vTargetHorizontalDirection; // 0x180c            
            float m_flCurrentTimeHoriz; // 0x1818            
            float m_flCurrentTimeVert; // 0x181c            
            bool m_bInterrupted; // 0x1820            
            uint8_t _pad1821[0x3]; // 0x1821
            Vector m_vLastOrderPos; // 0x1824            
            bool m_bIssuedOrder; // 0x1830            
            uint8_t _pad1831[0x3]; // 0x1831
            std::int32_t m_nCurrentBounce; // 0x1834            
            std::int32_t leap_distance; // 0x1838            
            float leap_speed; // 0x183c            
            float leap_acceleration; // 0x1840            
            std::int32_t leap_radius; // 0x1844            
            float leap_bonus_duration; // 0x1848            
            bool m_bLaunched; // 0x184c            
            uint8_t _pad184d[0x3]; // 0x184d
            float m_flFacingTarget; // 0x1850            
            float movement_turn_rate; // 0x1854            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_OgreSealTotem_Active because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_OgreSealTotem_Active) == 0x1858);
    };
};
