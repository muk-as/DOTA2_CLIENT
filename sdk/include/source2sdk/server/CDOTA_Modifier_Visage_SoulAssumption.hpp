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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Visage_SoulAssumption : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1878            
            std::int32_t stack_limit; // 0x187c            
            std::int32_t damage_limit; // 0x1880            
            float stack_duration; // 0x1884            
            float damage_min; // 0x1888            
            float damage_max; // 0x188c            
            source2sdk::client::ParticleIndex_t m_nFxIndexA; // 0x1890            
            source2sdk::client::ParticleIndex_t m_nFxIndexB; // 0x1894            
            std::int32_t iCur_stack; // 0x1898            
            uint8_t _pad189c[0x1c]; // 0x189c
            float m_fTotalDamage; // 0x18b8            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_SoulAssumption because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Visage_SoulAssumption) == 0x18c0);
    };
};
