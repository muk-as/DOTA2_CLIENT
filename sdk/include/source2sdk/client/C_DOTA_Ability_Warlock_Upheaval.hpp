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
        // Size: 0x710
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Warlock_Upheaval : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vPosition; // 0x680            
            float aoe; // 0x68c            
            std::int32_t slow_per_second; // 0x690            
            std::int32_t aspd_per_second; // 0x694            
            std::int32_t max_slow; // 0x698            
            std::int32_t base_damage; // 0x69c            
            std::int32_t damage_per_second; // 0x6a0            
            std::int32_t max_damage; // 0x6a4            
            float damage_tick_interval; // 0x6a8            
            uint8_t _pad06ac[0x4]; // 0x6ac
            source2sdk::client::CountdownTimer m_timer; // 0x6b0            
            source2sdk::client::CountdownTimer m_shardTimer; // 0x6c8            
            float duration; // 0x6e0            
            source2sdk::entity2::GameTime_t m_flElapsedTime; // 0x6e4            
            float m_flCurrentSlow; // 0x6e8            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6ec            
            source2sdk::client::ParticleIndex_t m_nCastFXIndex; // 0x6f0            
            uint8_t _pad06f4[0x14]; // 0x6f4
            bool m_bTargetCast; // 0x708            
            uint8_t _pad0709[0x3]; // 0x709
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x70c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Warlock_Upheaval because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Warlock_Upheaval) == 0x710);
    };
};
