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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Sniper_Shrapnel_Slow : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t slow_movement_speed; // 0x1878            
            float shrapnel_damage; // 0x187c            
            std::int32_t fast_tick; // 0x1880            
            std::int32_t m_nTracker; // 0x1884            
            bool bFirst; // 0x1888            
            uint8_t _pad1889[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Sniper_Shrapnel_Slow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Sniper_Shrapnel_Slow) == 0x1890);
    };
};
