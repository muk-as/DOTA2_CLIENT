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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mars_ArenaOfBlood_Kill_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t arena_kill_buff_damage_pct; // 0x1878            
            std::int32_t arena_kill_buff_heal_pct; // 0x187c            
            std::int32_t allied_reduction_pct; // 0x1880            
            uint8_t _pad1884[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_ArenaOfBlood_Kill_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Mars_ArenaOfBlood_Kill_Buff) == 0x1888);
    };
};
