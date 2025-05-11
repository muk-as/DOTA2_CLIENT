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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Sniper_TakeAim_Bonus : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t slow; // 0x17f8            
            std::int32_t active_attack_range_bonus; // 0x17fc            
            std::int32_t does_root; // 0x1800            
            bool no_reveal; // 0x1804            
            uint8_t _pad1805[0x3]; // 0x1805
            std::int32_t bonus_armor; // 0x1808            
            std::int32_t attack_speed; // 0x180c            
            uint8_t _pad1810[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Sniper_TakeAim_Bonus because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Sniper_TakeAim_Bonus) == 0x1818);
    };
};
