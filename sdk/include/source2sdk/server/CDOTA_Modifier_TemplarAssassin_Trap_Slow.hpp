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
        class CDOTA_Modifier_TemplarAssassin_Trap_Slow : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t movement_speed_min; // 0x1878            
            std::int32_t movement_speed_max; // 0x187c            
            std::int32_t extra_damage; // 0x1880            
            float trap_max_charge_duration; // 0x1884            
            float min_silence_duration; // 0x1888            
            float max_silence_duration; // 0x188c            
            float stage; // 0x1890            
            float flDamagePerTick; // 0x1894            
            bool bExtraDamage; // 0x1898            
            uint8_t _pad1899[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_TemplarAssassin_Trap_Slow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_TemplarAssassin_Trap_Slow) == 0x18a0);
    };
};
