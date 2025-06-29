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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Crystal_Maiden_Crystal_Clone : public source2sdk::client::CDOTA_Buff
        {
        public:
            float hop_duration; // 0x1878            
            std::int32_t hop_distance; // 0x187c            
            float m_flCurTime; // 0x1880            
            float m_flEndTime; // 0x1884            
            float target_x; // 0x1888            
            float target_y; // 0x188c            
            Vector m_vTargetHorizontalDirection; // 0x1890            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Crystal_Maiden_Crystal_Clone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Crystal_Maiden_Crystal_Clone) == 0x18a0);
    };
};
