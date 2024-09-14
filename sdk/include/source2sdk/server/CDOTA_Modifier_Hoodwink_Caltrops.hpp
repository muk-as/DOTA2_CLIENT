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
    class CDOTA_Modifier_Hoodwink_Caltrops : public client::CDOTA_Buff
    {
    public:
        int32_t effect_radius; // 0x16e8        
        int32_t caltrops_damage; // 0x16ec        
        int32_t activation_radius; // 0x16f0        
        float debuff_duration; // 0x16f4        
        float activation_delay; // 0x16f8        
        client::ParticleIndex_t m_nFXIndex; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Caltrops because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Hoodwink_Caltrops) == 0x1700);
};
