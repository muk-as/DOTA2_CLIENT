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
        // Size: 0x650
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Warlock_Upheaval : public source2sdk::server::CDOTABaseAbility
        {
        public:
            Vector m_vPosition; // 0x5c0            
            float aoe; // 0x5cc            
            std::int32_t slow_per_second; // 0x5d0            
            std::int32_t aspd_per_second; // 0x5d4            
            std::int32_t max_slow; // 0x5d8            
            std::int32_t base_damage; // 0x5dc            
            std::int32_t damage_per_second; // 0x5e0            
            std::int32_t max_damage; // 0x5e4            
            float damage_tick_interval; // 0x5e8            
            uint8_t _pad05ec[0x4]; // 0x5ec
            source2sdk::server::CountdownTimer m_timer; // 0x5f0            
            source2sdk::server::CountdownTimer m_shardTimer; // 0x608            
            float duration; // 0x620            
            source2sdk::entity2::GameTime_t m_flElapsedTime; // 0x624            
            float m_flCurrentSlow; // 0x628            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x62c            
            source2sdk::client::ParticleIndex_t m_nCastFXIndex; // 0x630            
            uint8_t _pad0634[0x14]; // 0x634
            bool m_bTargetCast; // 0x648            
            uint8_t _pad0649[0x3]; // 0x649
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x64c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Warlock_Upheaval because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Warlock_Upheaval) == 0x650);
    };
};
