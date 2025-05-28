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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Visage_SoulAssumption : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1888            
            std::int32_t stack_limit; // 0x188c            
            std::int32_t damage_limit; // 0x1890            
            float stack_duration; // 0x1894            
            float damage_min; // 0x1898            
            float damage_max; // 0x189c            
            source2sdk::client::ParticleIndex_t m_nFxIndexA; // 0x18a0            
            source2sdk::client::ParticleIndex_t m_nFxIndexB; // 0x18a4            
            std::int32_t iCur_stack; // 0x18a8            
            uint8_t _pad18ac[0x1c]; // 0x18ac
            float m_fTotalDamage; // 0x18c8            
            uint8_t _pad18cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_SoulAssumption because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Visage_SoulAssumption) == 0x18d0);
    };
};
