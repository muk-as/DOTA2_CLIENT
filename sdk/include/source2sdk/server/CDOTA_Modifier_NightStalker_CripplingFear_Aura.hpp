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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_NightStalker_CripplingFear_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x17f8            
            std::int32_t death_refresh; // 0x17fc            
            float mana_pct_cost; // 0x1800            
            float mana_interval; // 0x1804            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1808            
            float base_duration; // 0x180c            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x1810            
            uint8_t _pad1814[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_NightStalker_CripplingFear_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_NightStalker_CripplingFear_Aura) == 0x1820);
    };
};
