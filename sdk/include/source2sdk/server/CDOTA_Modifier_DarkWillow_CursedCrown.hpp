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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DarkWillow_CursedCrown : public source2sdk::client::CDOTA_Buff
        {
        public:
            float delay; // 0x1878            
            float stun_duration; // 0x187c            
            float stun_radius; // 0x1880            
            std::int32_t accumulated_damage_pct; // 0x1884            
            std::int32_t accumulated_damage_pct_ally; // 0x1888            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x188c            
            float flAccumulatedDamage; // 0x1890            
            bool bAccumulatedDamageDealt; // 0x1894            
            uint8_t _pad1895[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_CursedCrown because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DarkWillow_CursedCrown) == 0x1898);
    };
};
