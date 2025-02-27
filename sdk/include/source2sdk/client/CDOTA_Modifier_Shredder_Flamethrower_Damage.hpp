#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Shredder_Flamethrower_Damage : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x1708        
        client::ParticleIndex_t m_nActiveFXIndex; // 0x170c        
        client::ParticleIndex_t m_nActiveStatusFXIndex; // 0x1710        
        float damage_per_second; // 0x1714        
        int32_t building_dmg_pct; // 0x1718        
        int32_t move_slow_pct; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_Flamethrower_Damage because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Shredder_Flamethrower_Damage) == 0x1720);
};
