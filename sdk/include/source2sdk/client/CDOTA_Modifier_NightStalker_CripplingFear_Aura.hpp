#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_NightStalker_CripplingFear_Aura : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x1708        
        int32_t death_refresh; // 0x170c        
        float mana_pct_cost; // 0x1710        
        float mana_interval; // 0x1714        
        client::ParticleIndex_t m_nFXIndex; // 0x1718        
        float base_duration; // 0x171c        
        entity2::GameTime_t m_flStartTime; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_NightStalker_CripplingFear_Aura because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_NightStalker_CripplingFear_Aura) == 0x1730);
};
