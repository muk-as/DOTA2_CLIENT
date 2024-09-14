#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Miniboss_UnyieldingShield : public client::CDOTA_Buff
    {
    public:
        int32_t damage_absorb; // 0x16e8        
        float regen_per_second; // 0x16ec        
        float regen_bonus_per_death; // 0x16f0        
        int32_t m_nDamageAbsorbed; // 0x16f4        
        entity2::GameTime_t m_timeLastTick; // 0x16f8        
        client::ParticleIndex_t nFXIndex; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Miniboss_UnyieldingShield because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Miniboss_UnyieldingShield) == 0x1700);
};
