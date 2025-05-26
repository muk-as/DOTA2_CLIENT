#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Batrider_Firefly : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bActive; // 0x1878            
            uint8_t _pad1879[0x3]; // 0x1879
            float radius; // 0x187c            
            std::int32_t m_ifirefly_Active; // 0x1880            
            float tree_radius; // 0x1884            
            float damage_per_second; // 0x1888            
            float movement_speed; // 0x188c            
            std::int32_t bonus_slow_resistance; // 0x1890            
            float tick_interval; // 0x1894            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1898            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x189c            
            source2sdk::entity2::GameTime_t m_fNextDamageTick; // 0x18a0            
            Vector m_vLastFirePoolLoc; // 0x18a4            
            std::int32_t bonus_vision; // 0x18b0            
            uint8_t _pad18b4[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Batrider_Firefly because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Batrider_Firefly) == 0x18d0);
    };
};
