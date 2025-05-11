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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AntiMage_Mana_Thirst : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t thirst_enabled; // 0x17f8            
            std::int32_t threshold_pct; // 0x17fc            
            std::int32_t bonus_attack_damage; // 0x1800            
            float linger_duration; // 0x1804            
            std::int32_t min_bonus_pct; // 0x1808            
            std::int32_t max_bonus_pct; // 0x180c            
            float thirst_range; // 0x1810            
            uint8_t _pad1814[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AntiMage_Mana_Thirst because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AntiMage_Mana_Thirst) == 0x1818);
    };
};
