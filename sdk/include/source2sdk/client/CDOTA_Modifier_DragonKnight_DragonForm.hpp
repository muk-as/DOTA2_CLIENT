#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        class CDOTA_Modifier_DragonKnight_DragonForm : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_movement_speed; // 0x_            
            std::int32_t bonus_attack_damage; // 0x_            
            std::int32_t bonus_attack_range; // 0x_            
            std::int32_t attack_projectile_speed_bonus; // 0x_            
            std::int32_t magic_resistance; // 0x_            
            std::int32_t model_scale; // 0x_            
            std::int32_t iLevel; // 0x_            
            std::int32_t m_iOriginalAttackCapabilities; // 0x_            
            CUtlSymbolLarge m_iszRangedAttackEffect; // 0x_            
            std::int32_t bonus_slow_resistance; // 0x_            
            std::int32_t is_green_dragon; // 0x_            
            std::int32_t is_red_dragon; // 0x_            
            std::int32_t is_blue_dragon; // 0x_            
            std::int32_t iAssetIndex; // 0x_            
            float ranged_splash_radius; // 0x_            
            float ranged_splash_damage_pct; // 0x_            
            source2sdk::client::ParticleIndex_t m_nAmbientParticleFX; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DragonKnight_DragonForm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DragonKnight_DragonForm) == 0x_);
    };
};
