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
        class CDOTA_Modifier_Crystal_Maiden_Crystal_Clone : public source2sdk::client::CDOTA_Buff
        {
        public:
            float hop_duration; // 0x1888            
            std::int32_t hop_distance; // 0x188c            
            float m_flCurTime; // 0x1890            
            float m_flEndTime; // 0x1894            
            float target_x; // 0x1898            
            float target_y; // 0x189c            
            Vector m_vTargetHorizontalDirection; // 0x18a0            
            uint8_t _pad18ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Crystal_Maiden_Crystal_Clone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Crystal_Maiden_Crystal_Clone) == 0x18b0);
    };
};
