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
    // Size: 0x1710
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Silencer_GlaivesOfWisdom_SilenceDebuffCounter : public client::CDOTA_Buff
    {
    public:
        int32_t movement_speed; // 0x1708        
        client::ParticleIndex_t m_nFXStackIndex; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Silencer_GlaivesOfWisdom_SilenceDebuffCounter because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Silencer_GlaivesOfWisdom_SilenceDebuffCounter) == 0x1710);
};
