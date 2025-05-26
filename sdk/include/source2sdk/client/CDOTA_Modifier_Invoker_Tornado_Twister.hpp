#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_Tornado_Twister : public source2sdk::client::CDOTA_Buff
        {
        public:
            float twister_radius; // 0x1878            
            std::int32_t twister_damage; // 0x187c            
            float twister_tick_rate; // 0x1880            
            uint8_t _pad1884[0x14]; // 0x1884
            std::int32_t m_nTickCounter; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_Tornado_Twister because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Invoker_Tornado_Twister) == 0x18a0);
    };
};
