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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Life_Stealer_Feast : public source2sdk::client::CDOTA_Buff
        {
        public:
            float hp_leech_percent; // 0x_            
            float hp_damage_percent; // 0x_            
            std::int32_t creep_deny_percent; // 0x_            
            std::int32_t bonus_hp_per_creep; // 0x_            
            std::int32_t bonus_hp_per_hero; // 0x_            
            std::int32_t m_nTotalBonusHP; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Life_Stealer_Feast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Life_Stealer_Feast) == 0x_);
    };
};
