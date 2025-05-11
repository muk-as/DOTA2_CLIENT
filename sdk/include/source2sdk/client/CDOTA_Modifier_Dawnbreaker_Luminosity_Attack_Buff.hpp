#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1848
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bIsBuffedAttack; // 0x17f8            
            uint8_t _pad17f9[0x3]; // 0x17f9
            std::int32_t heal_pct; // 0x17fc            
            std::int32_t bonus_damage; // 0x1800            
            float heal_radius; // 0x1804            
            std::int32_t heal_from_creeps; // 0x1808            
            std::int32_t allied_healing_pct; // 0x180c            
            bool triggered_by_celestial_hammer; // 0x1810            
            uint8_t _pad1811[0x7]; // 0x1811
            // hTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> hTargets;
            char hTargets[0x18]; // 0x1818            
            float m_flTotalToHeal; // 0x1830            
            bool m_bHasProccedCooldownReduction; // 0x1834            
            uint8_t _pad1835[0x3]; // 0x1835
            float cooldown_reduction; // 0x1838            
            float movespeed_bonus_duration; // 0x183c            
            float movespeed_bonus_from_creeps; // 0x1840            
            uint8_t _pad1844[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff) == 0x1848);
    };
};
