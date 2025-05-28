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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AncientApparition_IceVortex : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t movement_speed_pct; // 0x1888            
            std::int32_t spell_resist_pct; // 0x188c            
            std::int32_t drag_speed; // 0x1890            
            float aura_origin_x; // 0x1894            
            float aura_origin_y; // 0x1898            
            std::int32_t shard_dps; // 0x189c            
            std::int32_t shard_attack_speed_reduction; // 0x18a0            
            std::int32_t frost_stacks; // 0x18a4            
            Vector m_vCenter; // 0x18a8            
            uint8_t _pad18b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AncientApparition_IceVortex because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AncientApparition_IceVortex) == 0x18b8);
    };
};
