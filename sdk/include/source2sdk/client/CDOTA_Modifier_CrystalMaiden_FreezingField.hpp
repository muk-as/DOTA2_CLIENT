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
        // Size: 0x1868
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_CrystalMaiden_FreezingField : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x17f8            
            std::int32_t damage; // 0x17fc            
            std::int32_t bonus_armor; // 0x1800            
            float explosion_interval; // 0x1804            
            float shard_bonus_explosion; // 0x1808            
            float explosion_radius; // 0x180c            
            float slow_duration; // 0x1810            
            std::int32_t explosion_min_dist; // 0x1814            
            float explosion_max_dist; // 0x1818            
            float frostbite_delay; // 0x181c            
            source2sdk::entity2::GameTime_t m_fLastTick; // 0x1820            
            float m_fTimeAccumulator; // 0x1824            
            std::int32_t m_iExplosionCount; // 0x1828            
            std::int32_t m_iExplosionTotalCount; // 0x182c            
            std::int32_t m_iExplosionQuadrant; // 0x1830            
            std::int32_t m_iExplosionDistance; // 0x1834            
            std::int32_t shard_self_movement_speed_slow_pct; // 0x1838            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x183c            
            uint8_t _pad1840[0x8]; // 0x1840
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x1848            
            std::int32_t can_move; // 0x1860            
            uint8_t _pad1864[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_CrystalMaiden_FreezingField because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_CrystalMaiden_FreezingField) == 0x1868);
    };
};
