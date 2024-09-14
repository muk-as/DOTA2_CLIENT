#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Shredder_ReactiveArmor_Bomb : public client::CDOTA_Buff
    {
    public:
        float initial_shield; // 0x16e8        
        float max_shield; // 0x16ec        
        float shield_per_sec; // 0x16f0        
        float shield_per_sec_per_enemy; // 0x16f4        
        float duration; // 0x16f8        
        float base_explosion; // 0x16fc        
        int32_t radius; // 0x1700        
        int32_t explosion_radius; // 0x1704        
        int32_t m_nDamageAbsorbed; // 0x1708        
        entity2::GameTime_t m_timeLastTick; // 0x170c        
        entity2::GameTime_t m_StartTime; // 0x1710        
        int32_t m_nLastParticleTime; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_ReactiveArmor_Bomb because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Shredder_ReactiveArmor_Bomb) == 0x1718);
};
