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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bIsBuffedAttack; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t heal_pct; // 0x_            
            std::int32_t bonus_damage; // 0x_            
            float heal_radius; // 0x_            
            std::int32_t heal_from_creeps; // 0x_            
            std::int32_t allied_healing_pct; // 0x_            
            bool triggered_by_celestial_hammer; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // hTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hTargets;
            char hTargets[0x_]; // 0x_            
            float m_flTotalToHeal; // 0x_            
            bool m_bHasProccedCooldownReduction; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float cooldown_reduction; // 0x_            
            float movespeed_bonus_duration; // 0x_            
            float movespeed_bonus_from_creeps; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff) == 0x_);
    };
};
