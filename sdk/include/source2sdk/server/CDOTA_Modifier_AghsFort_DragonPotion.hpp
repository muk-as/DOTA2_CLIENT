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
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_DragonPotion : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t m_iOriginalAttackCapabilities; // 0x17f8            
            uint8_t _pad17fc[0x4]; // 0x17fc
            CUtlSymbolLarge m_iszRangedAttackEffect; // 0x1800            
            std::int32_t bonus_movement_speed; // 0x1808            
            std::int32_t bonus_attack_damage; // 0x180c            
            std::int32_t bonus_attack_range; // 0x1810            
            std::int32_t attack_projectile_speed; // 0x1814            
            std::int32_t magic_resistance; // 0x1818            
            std::int32_t model_scale; // 0x181c            
            std::int32_t skin_number; // 0x1820            
            bool flying_movement; // 0x1824            
            uint8_t _pad1825[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_DragonPotion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_DragonPotion) == 0x1828);
    };
};
