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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_Tornado_Twister : public source2sdk::client::CDOTA_Buff
        {
        public:
            float twister_radius; // 0x1888            
            std::int32_t twister_damage; // 0x188c            
            float twister_tick_rate; // 0x1890            
            uint8_t _pad1894[0x14]; // 0x1894
            std::int32_t m_nTickCounter; // 0x18a8            
            Vector m_vDirection; // 0x18ac            
            Vector m_vSpawnPosition; // 0x18b8            
            uint8_t _pad18c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_Tornado_Twister because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Invoker_Tornado_Twister) == 0x18c8);
    };
};
