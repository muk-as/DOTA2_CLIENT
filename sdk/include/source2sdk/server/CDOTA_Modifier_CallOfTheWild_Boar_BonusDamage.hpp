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
        // Size: 0x1800
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_CallOfTheWild_Boar_BonusDamage : public source2sdk::client::CDOTA_Buff
        {
        public:
            float boar_bonus_damage; // 0x17f8            
            uint8_t _pad17fc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_CallOfTheWild_Boar_BonusDamage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_CallOfTheWild_Boar_BonusDamage) == 0x1800);
    };
};
