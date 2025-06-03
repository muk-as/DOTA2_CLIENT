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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pangolier_ShieldCrash_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1878            
            std::int32_t m_nAbsorbRemaining; // 0x187c            
            std::int32_t hero_shield; // 0x1880            
            std::int32_t base_shield; // 0x1884            
            std::int32_t accummulated_value; // 0x1888            
            float parry_cooldown; // 0x188c            
            std::int32_t parry_chance; // 0x1890            
            std::int32_t parry_swashbuckles; // 0x1894            
            std::int32_t parry_damage_threshold; // 0x1898            
            source2sdk::entity2::GameTime_t m_flLastParryTime; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_ShieldCrash_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Pangolier_ShieldCrash_Buff) == 0x18a0);
    };
};
