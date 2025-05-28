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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lich_FrostShield : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1888            
            float interval; // 0x188c            
            std::int32_t damage_reduction; // 0x1890            
            std::int32_t health_regen; // 0x1894            
            float bonus_duration_per_hero_killed; // 0x1898            
            float bonus_duration_per_creep_killed; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lich_FrostShield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Lich_FrostShield) == 0x18a0);
    };
};
