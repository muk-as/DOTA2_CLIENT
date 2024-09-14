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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Pangolier_ShieldCrash_Buff : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x16e8        
        int32_t m_nAbsorbRemaining; // 0x16ec        
        int32_t hero_shield; // 0x16f0        
        int32_t base_shield; // 0x16f4        
        int32_t accummulated_value; // 0x16f8        
        float parry_cooldown; // 0x16fc        
        int32_t parry_chance; // 0x1700        
        int32_t parry_swashbuckles; // 0x1704        
        int32_t parry_damage_threshold; // 0x1708        
        entity2::GameTime_t m_flLastParryTime; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_ShieldCrash_Buff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Pangolier_ShieldCrash_Buff) == 0x1710);
};
