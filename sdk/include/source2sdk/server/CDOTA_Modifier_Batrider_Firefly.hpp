#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x18e0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Batrider_Firefly : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bActive; // 0x1888            
            uint8_t _pad1889[0x3]; // 0x1889
            float radius; // 0x188c            
            std::int32_t m_ifirefly_Active; // 0x1890            
            float tree_radius; // 0x1894            
            float damage_per_second; // 0x1898            
            float movement_speed; // 0x189c            
            std::int32_t bonus_slow_resistance; // 0x18a0            
            float tick_interval; // 0x18a4            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18a8            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x18ac            
            source2sdk::entity2::GameTime_t m_fNextDamageTick; // 0x18b0            
            Vector m_vLastFirePoolLoc; // 0x18b4            
            std::int32_t bonus_vision; // 0x18c0            
            uint8_t _pad18c4[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Batrider_Firefly because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Batrider_Firefly) == 0x18e0);
    };
};
