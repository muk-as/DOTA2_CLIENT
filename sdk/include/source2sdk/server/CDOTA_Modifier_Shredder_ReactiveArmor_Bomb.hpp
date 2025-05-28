#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Shredder_ReactiveArmor_Bomb : public source2sdk::client::CDOTA_Buff
        {
        public:
            float initial_shield; // 0x1888            
            float max_shield; // 0x188c            
            float shield_per_sec; // 0x1890            
            float shield_per_sec_per_enemy; // 0x1894            
            float duration; // 0x1898            
            float base_explosion; // 0x189c            
            float radius; // 0x18a0            
            float explosion_radius; // 0x18a4            
            std::int32_t m_nDamageAbsorbed; // 0x18a8            
            source2sdk::entity2::GameTime_t m_timeLastTick; // 0x18ac            
            source2sdk::entity2::GameTime_t m_StartTime; // 0x18b0            
            std::int32_t m_nLastParticleTime; // 0x18b4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_ReactiveArmor_Bomb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Shredder_ReactiveArmor_Bomb) == 0x18b8);
    };
};
