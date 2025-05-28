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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ArcWarden_Flux : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nCasterTeam; // 0x1888            
            float damage_per_second; // 0x188c            
            std::int32_t search_radius; // 0x1890            
            std::int32_t move_speed_slow_pct; // 0x1894            
            std::int32_t status_resist; // 0x1898            
            float think_interval; // 0x189c            
            std::int32_t applies_silence; // 0x18a0            
            std::int32_t m_nCurrentMovementSlow; // 0x18a4            
            std::int32_t m_nCurrentStatusResistance; // 0x18a8            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_Flux because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_ArcWarden_Flux) == 0x18b0);
    };
};
