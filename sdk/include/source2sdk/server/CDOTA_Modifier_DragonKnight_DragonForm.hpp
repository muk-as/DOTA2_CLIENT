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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DragonKnight_DragonForm : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_movement_speed; // 0x1878            
            std::int32_t bonus_attack_damage; // 0x187c            
            std::int32_t bonus_attack_range; // 0x1880            
            std::int32_t attack_projectile_speed_bonus; // 0x1884            
            std::int32_t magic_resistance; // 0x1888            
            std::int32_t model_scale; // 0x188c            
            std::int32_t iLevel; // 0x1890            
            std::int32_t m_iOriginalAttackCapabilities; // 0x1894            
            CUtlSymbolLarge m_iszRangedAttackEffect; // 0x1898            
            std::int32_t bonus_slow_resistance; // 0x18a0            
            std::int32_t is_green_dragon; // 0x18a4            
            std::int32_t is_red_dragon; // 0x18a8            
            std::int32_t is_blue_dragon; // 0x18ac            
            std::int32_t iAssetIndex; // 0x18b0            
            float ranged_splash_radius; // 0x18b4            
            float ranged_splash_damage_pct; // 0x18b8            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DragonKnight_DragonForm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DragonKnight_DragonForm) == 0x18c0);
    };
};
