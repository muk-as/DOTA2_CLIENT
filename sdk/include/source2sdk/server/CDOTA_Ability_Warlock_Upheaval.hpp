#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x638
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Warlock_Upheaval : public source2sdk::server::CDOTABaseAbility
        {
        public:
            Vector m_vPosition; // 0x5b8            
            float aoe; // 0x5c4            
            std::int32_t slow_per_second; // 0x5c8            
            std::int32_t aspd_per_second; // 0x5cc            
            std::int32_t max_slow; // 0x5d0            
            std::int32_t base_damage; // 0x5d4            
            std::int32_t damage_per_second; // 0x5d8            
            std::int32_t max_damage; // 0x5dc            
            float damage_tick_interval; // 0x5e0            
            uint8_t _pad05e4[0x4]; // 0x5e4
            source2sdk::server::CountdownTimer m_timer; // 0x5e8            
            source2sdk::server::CountdownTimer m_shardTimer; // 0x600            
            float duration; // 0x618            
            source2sdk::entity2::GameTime_t m_flElapsedTime; // 0x61c            
            float m_flCurrentSlow; // 0x620            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x624            
            uint8_t _pad0628[0x8]; // 0x628
            bool m_bTargetCast; // 0x630            
            uint8_t _pad0631[0x3]; // 0x631
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x634            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Warlock_Upheaval because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Warlock_Upheaval) == 0x638);
    };
};
