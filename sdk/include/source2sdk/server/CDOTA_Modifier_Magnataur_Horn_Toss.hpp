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
        class CDOTA_Modifier_Magnataur_Horn_Toss : public source2sdk::client::CDOTA_Buff
        {
        public:
            float air_duration; // 0x_            
            std::int32_t air_height; // 0x_            
            std::int32_t travel_distance; // 0x_            
            Vector m_vDestination; // 0x_            
            float m_flStartZ; // 0x_            
            float m_flCurTime; // 0x_            
            float m_flJumpDuration; // 0x_            
            float m_flJumpHeight; // 0x_            
            Vector m_vTargetHorizontalDirection; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Horn_Toss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Magnataur_Horn_Toss) == 0x_);
    };
};
