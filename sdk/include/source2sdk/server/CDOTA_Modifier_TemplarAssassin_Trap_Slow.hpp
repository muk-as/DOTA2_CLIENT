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
        class CDOTA_Modifier_TemplarAssassin_Trap_Slow : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t movement_speed_min; // 0x1888            
            std::int32_t movement_speed_max; // 0x188c            
            std::int32_t extra_damage; // 0x1890            
            float trap_max_charge_duration; // 0x1894            
            float min_silence_duration; // 0x1898            
            float max_silence_duration; // 0x189c            
            float stage; // 0x18a0            
            float flDamagePerTick; // 0x18a4            
            bool bExtraDamage; // 0x18a8            
            uint8_t _pad18a9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_TemplarAssassin_Trap_Slow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_TemplarAssassin_Trap_Slow) == 0x18b0);
    };
};
