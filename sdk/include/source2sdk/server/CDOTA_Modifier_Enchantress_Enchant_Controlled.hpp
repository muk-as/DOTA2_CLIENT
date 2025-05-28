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
        class CDOTA_Modifier_Enchantress_Enchant_Controlled : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_movement_speed; // 0x1888            
            std::int32_t enchant_health; // 0x188c            
            std::int32_t enchant_armor; // 0x1890            
            float enchant_damage; // 0x1894            
            std::int32_t attack_range_bonus; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Enchantress_Enchant_Controlled because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Enchantress_Enchant_Controlled) == 0x18a0);
    };
};
