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
        class CDOTA_Modifier_Magnataur_Horn_Toss : public source2sdk::client::CDOTA_Buff
        {
        public:
            float air_duration; // 0x1888            
            std::int32_t air_height; // 0x188c            
            std::int32_t travel_distance; // 0x1890            
            Vector m_vDestination; // 0x1894            
            float m_flStartZ; // 0x18a0            
            float m_flCurTime; // 0x18a4            
            float m_flJumpDuration; // 0x18a8            
            float m_flJumpHeight; // 0x18ac            
            Vector m_vTargetHorizontalDirection; // 0x18b0            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Horn_Toss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Magnataur_Horn_Toss) == 0x18c0);
    };
};
