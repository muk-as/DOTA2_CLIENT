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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_NightStalker_CripplingFear_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1878            
            std::int32_t death_refresh; // 0x187c            
            float mana_pct_cost; // 0x1880            
            float mana_interval; // 0x1884            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1888            
            float base_duration; // 0x188c            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x1890            
            uint8_t _pad1894[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_NightStalker_CripplingFear_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_NightStalker_CripplingFear_Aura) == 0x18a8);
    };
};
