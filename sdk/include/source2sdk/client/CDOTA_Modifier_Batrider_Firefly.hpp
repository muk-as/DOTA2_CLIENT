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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Batrider_Firefly : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bActive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float radius; // 0x_            
            std::int32_t m_ifirefly_Active; // 0x_            
            float tree_radius; // 0x_            
            float damage_per_second; // 0x_            
            float movement_speed; // 0x_            
            std::int32_t bonus_slow_resistance; // 0x_            
            float tick_interval; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x_            
            source2sdk::entity2::GameTime_t m_fNextDamageTick; // 0x_            
            Vector m_vLastFirePoolLoc; // 0x_            
            std::int32_t bonus_vision; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Batrider_Firefly because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Batrider_Firefly) == 0x_);
    };
};
