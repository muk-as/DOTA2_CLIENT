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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Aghsfort_Aziyog_Underlord_Firestorm_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t wave_damage; // 0x1888            
            std::int32_t wave_count; // 0x188c            
            std::int32_t radius; // 0x1890            
            std::int32_t summon_count; // 0x1894            
            float wave_interval; // 0x1898            
            float burn_duration; // 0x189c            
            float first_wave_delay; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Aghsfort_Aziyog_Underlord_Firestorm_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Aghsfort_Aziyog_Underlord_Firestorm_Thinker) == 0x18a8);
    };
};
