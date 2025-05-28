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
        // Size: 0x1908
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_CrystalMaiden_FreezingField : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1888            
            std::int32_t damage; // 0x188c            
            std::int32_t bonus_armor; // 0x1890            
            float explosion_interval; // 0x1894            
            float shard_bonus_explosion; // 0x1898            
            float explosion_radius; // 0x189c            
            float slow_duration; // 0x18a0            
            std::int32_t explosion_min_dist; // 0x18a4            
            float explosion_max_dist; // 0x18a8            
            float frostbite_delay; // 0x18ac            
            source2sdk::entity2::GameTime_t m_fLastTick; // 0x18b0            
            float m_fTimeAccumulator; // 0x18b4            
            std::int32_t m_iExplosionCount; // 0x18b8            
            std::int32_t m_iExplosionTotalCount; // 0x18bc            
            std::int32_t m_iExplosionQuadrant; // 0x18c0            
            std::int32_t m_iExplosionDistance; // 0x18c4            
            std::int32_t shard_self_movement_speed_slow_pct; // 0x18c8            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18cc            
            uint8_t _pad18d0[0x18]; // 0x18d0
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x18e8            
            std::int32_t can_move; // 0x1900            
            uint8_t _pad1904[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_CrystalMaiden_FreezingField because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_CrystalMaiden_FreezingField) == 0x1908);
    };
};
