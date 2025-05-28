#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        class CDOTA_Modifier_Creep_Bonus_XP : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t radius; // 0x1888            
            std::int32_t hero_damage_penalty; // 0x188c            
            std::int32_t bonus_gold; // 0x1890            
            std::int32_t m_iGoldBounty; // 0x1894            
            source2sdk::client::ParticleIndex_t iBannerEffect; // 0x1898            
            source2sdk::client::ParticleIndex_t iRingEffect; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Creep_Bonus_XP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Creep_Bonus_XP) == 0x18a0);
    };
};
