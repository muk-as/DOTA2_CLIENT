#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_WitchDoctor_Maledict : public client::CDOTA_Buff
    {
    public:
        int32_t m_iStartHealth; // 0x1708        
        int32_t bonus_damage; // 0x170c        
        int32_t bonus_damage_threshold; // 0x1710        
        int32_t ticks; // 0x1714        
        int32_t iCurrentTick; // 0x1718        
        int32_t health_restoration_reduction; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x1720[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_WitchDoctor_Maledict because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_WitchDoctor_Maledict) == 0x1728);
};
