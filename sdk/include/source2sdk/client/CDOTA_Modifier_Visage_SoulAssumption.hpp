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
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Visage_SoulAssumption : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x1708        
        int32_t stack_limit; // 0x170c        
        int32_t damage_limit; // 0x1710        
        float stack_duration; // 0x1714        
        float damage_min; // 0x1718        
        float damage_max; // 0x171c        
        client::ParticleIndex_t m_nFxIndexA; // 0x1720        
        client::ParticleIndex_t m_nFxIndexB; // 0x1724        
        int32_t iCur_stack; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x1c]; // 0x172c
        float m_fTotalDamage; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x174c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Visage_SoulAssumption because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Visage_SoulAssumption) == 0x1750);
};
