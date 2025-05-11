#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x630
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Warlock_Upheaval : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vPosition; // 0x5b0            
            float aoe; // 0x5bc            
            std::int32_t slow_per_second; // 0x5c0            
            std::int32_t aspd_per_second; // 0x5c4            
            std::int32_t max_slow; // 0x5c8            
            std::int32_t base_damage; // 0x5cc            
            std::int32_t damage_per_second; // 0x5d0            
            std::int32_t max_damage; // 0x5d4            
            float damage_tick_interval; // 0x5d8            
            uint8_t _pad05dc[0x4]; // 0x5dc
            source2sdk::client::CountdownTimer m_timer; // 0x5e0            
            source2sdk::client::CountdownTimer m_shardTimer; // 0x5f8            
            float duration; // 0x610            
            source2sdk::entity2::GameTime_t m_flElapsedTime; // 0x614            
            float m_flCurrentSlow; // 0x618            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x61c            
            uint8_t _pad0620[0x8]; // 0x620
            bool m_bTargetCast; // 0x628            
            uint8_t _pad0629[0x3]; // 0x629
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x62c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Warlock_Upheaval because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Warlock_Upheaval) == 0x630);
    };
};
