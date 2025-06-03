#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bIsBuffedAttack; // 0x1878            
            uint8_t _pad1879[0x3]; // 0x1879
            std::int32_t heal_pct; // 0x187c            
            std::int32_t bonus_damage; // 0x1880            
            float heal_radius; // 0x1884            
            std::int32_t heal_from_creeps; // 0x1888            
            std::int32_t allied_healing_pct; // 0x188c            
            bool triggered_by_celestial_hammer; // 0x1890            
            uint8_t _pad1891[0x7]; // 0x1891
            // hTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hTargets;
            char hTargets[0x18]; // 0x1898            
            float m_flTotalToHeal; // 0x18b0            
            bool m_bHasProccedCooldownReduction; // 0x18b4            
            uint8_t _pad18b5[0x3]; // 0x18b5
            float cooldown_reduction; // 0x18b8            
            float movespeed_bonus_duration; // 0x18bc            
            float movespeed_bonus_from_creeps; // 0x18c0            
            uint8_t _pad18c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff) == 0x18c8);
    };
};
