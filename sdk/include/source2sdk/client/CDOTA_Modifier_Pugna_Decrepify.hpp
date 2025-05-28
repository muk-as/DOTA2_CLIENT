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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pugna_Decrepify : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_spell_damage_pct; // 0x1888            
            std::int32_t bonus_heal_amp_pct_allies; // 0x188c            
            std::int32_t bonus_movement_speed; // 0x1890            
            std::int32_t bonus_movement_speed_allies; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pugna_Decrepify because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pugna_Decrepify) == 0x1898);
    };
};
