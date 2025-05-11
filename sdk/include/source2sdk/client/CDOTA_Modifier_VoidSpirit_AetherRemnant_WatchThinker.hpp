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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_VoidSpirit_AetherRemnant_WatchThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float remnant_watch_radius; // 0x17f8            
            source2sdk::entity2::GameTime_t m_flLastDamageTick; // 0x17fc            
            float damage_tick_rate; // 0x1800            
            float flDamage; // 0x1804            
            bool m_bPiercesCreeps; // 0x1808            
            bool bIsArtifice; // 0x1809            
            uint8_t _pad180a[0x2]; // 0x180a
            float artifice_pct_effectiveness; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_AetherRemnant_WatchThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_VoidSpirit_AetherRemnant_WatchThinker) == 0x1810);
    };
};
