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
        class CDOTA_Modifier_Sniper_Assassinate_Crit : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t scepter_crit_damage; // 0x1878            
            std::int32_t scatter_damage_pct; // 0x187c            
            bool is_secondary; // 0x1880            
            uint8_t _pad1881[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Sniper_Assassinate_Crit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Sniper_Assassinate_Crit) == 0x1888);
    };
};
