#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        class CDOTA_Modifier_Enigma_BlackHole_Pull : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t pull_speed; // 0x_            
            float radius; // 0x_            
            float damage; // 0x_            
            float tick_rate; // 0x_            
            float pull_rotate_speed; // 0x_            
            float animation_rate; // 0x_            
            float scepter_pct_damage; // 0x_            
            float m_flBlackHoleDuration; // 0x_            
            float m_flBlackHoleCreationTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flDamageTick; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_BlackHole_Pull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Enigma_BlackHole_Pull) == 0x_);
    };
};
