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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Solar_Guardian_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::entity2::GameTime_t flTimeSinceLastPulse; // 0x1878            
            float pulse_interval; // 0x187c            
            float flEffectRadius; // 0x1880            
            std::int32_t base_damage; // 0x1884            
            std::int32_t base_heal; // 0x1888            
            std::int32_t effectiveness_pct; // 0x188c            
            source2sdk::client::ParticleIndex_t m_nThinkerFXIndex; // 0x1890            
            bool bLanded; // 0x1894            
            uint8_t _pad1895[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Solar_Guardian_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Dawnbreaker_Solar_Guardian_Thinker) == 0x1898);
    };
};
