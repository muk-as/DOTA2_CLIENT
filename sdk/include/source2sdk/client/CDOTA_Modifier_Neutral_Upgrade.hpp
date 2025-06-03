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
        class CDOTA_Modifier_Neutral_Upgrade : public source2sdk::client::CDOTA_Buff
        {
        public:
            float increase_time; // 0x1878            
            std::int32_t increase_damage; // 0x187c            
            std::int32_t increase_health; // 0x1880            
            float increase_armor; // 0x1884            
            std::int32_t increase_aspd; // 0x1888            
            std::int32_t increase_gold; // 0x188c            
            std::int32_t increase_xp; // 0x1890            
            std::int32_t current_level; // 0x1894            
            std::int32_t max_level; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Neutral_Upgrade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Neutral_Upgrade) == 0x18a0);
    };
};
