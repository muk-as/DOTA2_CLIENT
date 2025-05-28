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
        // Size: 0x18d8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bIsBuffedAttack; // 0x1888            
            uint8_t _pad1889[0x3]; // 0x1889
            std::int32_t heal_pct; // 0x188c            
            std::int32_t bonus_damage; // 0x1890            
            float heal_radius; // 0x1894            
            std::int32_t heal_from_creeps; // 0x1898            
            std::int32_t allied_healing_pct; // 0x189c            
            bool triggered_by_celestial_hammer; // 0x18a0            
            uint8_t _pad18a1[0x7]; // 0x18a1
            // hTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hTargets;
            char hTargets[0x18]; // 0x18a8            
            float m_flTotalToHeal; // 0x18c0            
            bool m_bHasProccedCooldownReduction; // 0x18c4            
            uint8_t _pad18c5[0x3]; // 0x18c5
            float cooldown_reduction; // 0x18c8            
            float movespeed_bonus_duration; // 0x18cc            
            float movespeed_bonus_from_creeps; // 0x18d0            
            uint8_t _pad18d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff) == 0x18d8);
    };
};
