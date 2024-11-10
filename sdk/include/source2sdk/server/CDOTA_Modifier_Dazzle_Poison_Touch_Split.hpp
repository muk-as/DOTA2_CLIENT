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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Dazzle_Poison_Touch_Split : public client::CDOTA_Buff
    {
    public:
        int32_t m_nAttacksLanded; // 0x1708        
        int32_t attacks_to_split; // 0x170c        
        int32_t split_radius; // 0x1710        
        client::ParticleIndex_t m_nFXStackIndex; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Dazzle_Poison_Touch_Split because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Dazzle_Poison_Touch_Split) == 0x1718);
};
