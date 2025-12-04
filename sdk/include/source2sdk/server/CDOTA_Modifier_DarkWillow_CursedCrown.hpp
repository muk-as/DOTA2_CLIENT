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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DarkWillow_CursedCrown : public source2sdk::client::CDOTA_Buff
        {
        public:
            float delay; // 0x_            
            float stun_duration; // 0x_            
            float stun_radius; // 0x_            
            std::int32_t accumulated_damage_pct; // 0x_            
            std::int32_t accumulated_damage_pct_ally; // 0x_            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x_            
            float flAccumulatedDamage; // 0x_            
            bool bAccumulatedDamageDealt; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_CursedCrown because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DarkWillow_CursedCrown) == 0x_);
    };
};
