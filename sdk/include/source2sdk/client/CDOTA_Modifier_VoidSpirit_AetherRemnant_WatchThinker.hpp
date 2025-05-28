#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_VoidSpirit_AetherRemnant_WatchThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float remnant_watch_radius; // 0x1888            
            source2sdk::entity2::GameTime_t m_flLastDamageTick; // 0x188c            
            float damage_tick_rate; // 0x1890            
            float m_flDamage; // 0x1894            
            bool m_bPiercesCreeps; // 0x1898            
            bool bIsArtifice; // 0x1899            
            uint8_t _pad189a[0x2]; // 0x189a
            float artifice_pct_effectiveness; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_AetherRemnant_WatchThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_VoidSpirit_AetherRemnant_WatchThinker) == 0x18a0);
    };
};
