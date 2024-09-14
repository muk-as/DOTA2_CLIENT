#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CDOTA_Modifier_Clinkz_Burning_Army : public client::CDOTA_Buff
    {
    public:
        float attack_rate; // 0x16e8        
        int32_t damage_percent; // 0x16ec        
        int32_t skeleton_health; // 0x16f0        
        client::ParticleIndex_t m_nFXIndex; // 0x16f4        
        int32_t skeleton_building_damage_reduction; // 0x16f8        
        int32_t m_nDamageCounter; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Clinkz_Burning_Army because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Clinkz_Burning_Army) == 0x1700);
};
