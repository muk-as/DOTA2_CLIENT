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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DarkWillow_CursedCrown : public source2sdk::client::CDOTA_Buff
        {
        public:
            float delay; // 0x1888            
            float stun_duration; // 0x188c            
            float stun_radius; // 0x1890            
            std::int32_t accumulated_damage_pct; // 0x1894            
            std::int32_t accumulated_damage_pct_ally; // 0x1898            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x189c            
            float flAccumulatedDamage; // 0x18a0            
            bool bAccumulatedDamageDealt; // 0x18a4            
            uint8_t _pad18a5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_CursedCrown because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DarkWillow_CursedCrown) == 0x18a8);
    };
};
