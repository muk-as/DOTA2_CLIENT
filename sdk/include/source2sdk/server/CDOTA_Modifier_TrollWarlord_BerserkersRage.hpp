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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_TrollWarlord_BerserkersRage : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_move_speed; // 0x1878            
            std::int32_t bonus_hp_pct; // 0x187c            
            std::int32_t bonus_armor; // 0x1880            
            std::int32_t ensnare_chance; // 0x1884            
            float ensnare_duration; // 0x1888            
            std::int32_t maim_chance; // 0x188c            
            std::int32_t maim_damage; // 0x1890            
            float maim_duration; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_TrollWarlord_BerserkersRage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_TrollWarlord_BerserkersRage) == 0x1898);
    };
};
