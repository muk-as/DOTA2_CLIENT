#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Buff_Item.hpp"

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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_DragonPotion : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t m_iOriginalAttackCapabilities; // 0x1888            
            uint8_t _pad188c[0x4]; // 0x188c
            CUtlSymbolLarge m_iszRangedAttackEffect; // 0x1890            
            std::int32_t bonus_movement_speed; // 0x1898            
            std::int32_t bonus_attack_damage; // 0x189c            
            std::int32_t bonus_attack_range; // 0x18a0            
            std::int32_t attack_projectile_speed; // 0x18a4            
            std::int32_t magic_resistance; // 0x18a8            
            std::int32_t model_scale; // 0x18ac            
            std::int32_t skin_number; // 0x18b0            
            bool flying_movement; // 0x18b4            
            uint8_t _pad18b5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_DragonPotion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_DragonPotion) == 0x18b8);
    };
};
