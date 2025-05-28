#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x18d8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Medusa_SplitShot : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage_modifier; // 0x1888            
            std::int32_t range; // 0x188c            
            std::int32_t arrow_count; // 0x1890            
            std::int32_t projectile_speed; // 0x1894            
            source2sdk::client::ParticleIndex_t m_nSplitShotBowFXIndex; // 0x1898            
            uint8_t _pad189c[0x3c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Medusa_SplitShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Medusa_SplitShot) == 0x18d8);
    };
};
