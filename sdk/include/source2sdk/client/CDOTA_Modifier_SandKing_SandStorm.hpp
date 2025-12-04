#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        class CDOTA_Modifier_SandKing_SandStorm : public source2sdk::client::CDOTA_Buff
        {
        public:
            float sand_storm_radius; // 0x_            
            std::int32_t sand_storm_damage; // 0x_            
            float damage_tick_rate; // 0x_            
            float blind_debuff_duration; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x_            
            source2sdk::client::ParticleIndex_t m_nSandStormParticleIndex1; // 0x_            
            source2sdk::client::ParticleIndex_t m_nSandStormParticleIndex2; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hThinker;
            char m_hThinker[0x_]; // 0x_            
            std::int32_t sand_storm_move_speed_pct; // 0x_            
            Vector vecSpawnPos; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_SandKing_SandStorm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_SandKing_SandStorm) == 0x_);
    };
};
