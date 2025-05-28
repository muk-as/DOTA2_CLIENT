#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_Hexed.hpp"

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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ShadowShaman_Voodoo : public source2sdk::server::CDOTA_Modifier_Hexed
        {
        public:
            std::int32_t movespeed; // 0x1888            
            std::int32_t damage_amp; // 0x188c            
            std::int32_t ally_chicken_movement_speed_bonus_pct; // 0x1890            
            std::int32_t m_bIsAlly; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ShadowShaman_Voodoo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_ShadowShaman_Voodoo) == 0x1898);
    };
};
