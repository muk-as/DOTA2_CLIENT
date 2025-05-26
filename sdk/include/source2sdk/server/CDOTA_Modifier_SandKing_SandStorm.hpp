#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        class CDOTA_Modifier_SandKing_SandStorm : public source2sdk::client::CDOTA_Buff
        {
        public:
            float sand_storm_radius; // 0x1878            
            std::int32_t sand_storm_damage; // 0x187c            
            float damage_tick_rate; // 0x1880            
            float blind_debuff_duration; // 0x1884            
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x1888            
            source2sdk::client::ParticleIndex_t m_nSandStormParticleIndex1; // 0x188c            
            source2sdk::client::ParticleIndex_t m_nSandStormParticleIndex2; // 0x1890            
            uint8_t _pad1894[0x14]; // 0x1894
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x18a8            
            std::int32_t sand_storm_move_speed_pct; // 0x18ac            
            Vector vecSpawnPos; // 0x18b0            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_SandKing_SandStorm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_SandKing_SandStorm) == 0x18c0);
    };
};
