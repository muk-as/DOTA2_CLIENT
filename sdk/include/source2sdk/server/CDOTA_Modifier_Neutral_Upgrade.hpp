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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Neutral_Upgrade : public source2sdk::client::CDOTA_Buff
        {
        public:
            float increase_time; // 0x17f8            
            std::int32_t increase_damage; // 0x17fc            
            std::int32_t increase_health; // 0x1800            
            float increase_armor; // 0x1804            
            std::int32_t increase_aspd; // 0x1808            
            std::int32_t increase_gold; // 0x180c            
            std::int32_t increase_xp; // 0x1810            
            std::int32_t current_level; // 0x1814            
            std::int32_t max_level; // 0x1818            
            uint8_t _pad181c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Neutral_Upgrade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Neutral_Upgrade) == 0x1820);
    };
};
