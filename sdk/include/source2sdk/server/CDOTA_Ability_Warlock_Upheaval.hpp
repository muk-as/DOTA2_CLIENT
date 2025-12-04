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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Warlock_Upheaval : public source2sdk::server::CDOTABaseAbility
        {
        public:
            Vector m_vPosition; // 0x_            
            float aoe; // 0x_            
            std::int32_t slow_per_second; // 0x_            
            std::int32_t aspd_per_second; // 0x_            
            std::int32_t max_slow; // 0x_            
            std::int32_t base_damage; // 0x_            
            std::int32_t damage_per_second; // 0x_            
            std::int32_t max_damage; // 0x_            
            float damage_tick_interval; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_timer; // 0x_            
            source2sdk::server::CountdownTimer m_shardTimer; // 0x_            
            float duration; // 0x_            
            source2sdk::entity2::GameTime_t m_flElapsedTime; // 0x_            
            float m_flCurrentSlow; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nCastFXIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bTargetCast; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Warlock_Upheaval because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Warlock_Upheaval) == 0x_);
    };
};
