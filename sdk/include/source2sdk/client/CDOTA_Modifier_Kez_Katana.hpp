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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_Katana : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t katana_attack_range; // 0x17f8            
            float katana_base_attack_time; // 0x17fc            
            std::int32_t katana_bonus_damage; // 0x1800            
            std::int32_t katana_bleed_attack_damage_pct; // 0x1804            
            float katana_bleed_duration; // 0x1808            
            std::int32_t katana_swap_bonus_damage; // 0x180c            
            std::int32_t m_nBonusPreAttackDamage; // 0x1810            
            bool m_bShardAttack; // 0x1814            
            uint8_t _pad1815[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_Katana because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Kez_Katana) == 0x1818);
    };
};
