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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Hoodwink_Caltrops : public client::CDOTA_Buff
    {
    public:
        int32_t effect_radius; // 0x1708        
        int32_t caltrops_damage; // 0x170c        
        int32_t activation_radius; // 0x1710        
        float debuff_duration; // 0x1714        
        float activation_delay; // 0x1718        
        client::ParticleIndex_t m_nFXIndex; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Caltrops because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Hoodwink_Caltrops) == 0x1720);
};
