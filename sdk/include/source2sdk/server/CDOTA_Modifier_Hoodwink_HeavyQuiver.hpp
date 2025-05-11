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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Hoodwink_HeavyQuiver : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_projectile_speed_pct; // 0x17f8            
            std::int32_t bonus_attack_range; // 0x17fc            
            std::int32_t deadly_blow_multiplier; // 0x1800            
            float maim_duration; // 0x1804            
            std::int32_t m_nAttackRecord; // 0x1808            
            uint8_t _pad180c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_HeavyQuiver because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Hoodwink_HeavyQuiver) == 0x1810);
    };
};
