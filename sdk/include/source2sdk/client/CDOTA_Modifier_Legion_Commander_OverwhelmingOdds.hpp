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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Legion_Commander_OverwhelmingOdds : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_attack_speed_creeps; // 0x1878            
            std::int32_t bonus_attack_speed; // 0x187c            
            float armor_per_creep; // 0x1880            
            float armor_per_hero; // 0x1884            
            std::int32_t m_nTotalBonus; // 0x1888            
            float m_flBonusArmor; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Legion_Commander_OverwhelmingOdds because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Legion_Commander_OverwhelmingOdds) == 0x1890);
    };
};
