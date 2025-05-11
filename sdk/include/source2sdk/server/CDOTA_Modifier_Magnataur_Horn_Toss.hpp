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
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Magnataur_Horn_Toss : public source2sdk::client::CDOTA_Buff
        {
        public:
            float air_duration; // 0x17f8            
            std::int32_t air_height; // 0x17fc            
            std::int32_t travel_distance; // 0x1800            
            Vector m_vDestination; // 0x1804            
            float m_flStartZ; // 0x1810            
            float m_flCurTime; // 0x1814            
            float m_flJumpDuration; // 0x1818            
            float m_flJumpHeight; // 0x181c            
            Vector m_vTargetHorizontalDirection; // 0x1820            
            uint8_t _pad182c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Horn_Toss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Magnataur_Horn_Toss) == 0x1830);
    };
};
