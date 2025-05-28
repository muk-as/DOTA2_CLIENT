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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_TranquilBoots : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_movement_speed; // 0x1888            
            std::int32_t broken_movement_speed; // 0x188c            
            std::int32_t bonus_armor; // 0x1890            
            std::int32_t bonus_health_regen; // 0x1894            
            std::int32_t break_threshold; // 0x1898            
            std::int32_t break_time; // 0x189c            
            std::int32_t break_count; // 0x18a0            
            float m_flResetTime; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_TranquilBoots because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_TranquilBoots) == 0x18a8);
    };
};
