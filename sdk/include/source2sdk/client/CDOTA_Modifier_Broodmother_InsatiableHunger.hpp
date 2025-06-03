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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Broodmother_InsatiableHunger : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_damage; // 0x1878            
            std::int32_t lifesteal_pct; // 0x187c            
            float slow_duration; // 0x1880            
            float bat_bonus; // 0x1884            
            float shard_damage_tick_interval; // 0x1888            
            std::int32_t damage_tick_count; // 0x188c            
            std::int32_t shard_damage_per_tick; // 0x1890            
            std::int32_t m_nTotalBonusDamage; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Broodmother_InsatiableHunger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Broodmother_InsatiableHunger) == 0x1898);
    };
};
