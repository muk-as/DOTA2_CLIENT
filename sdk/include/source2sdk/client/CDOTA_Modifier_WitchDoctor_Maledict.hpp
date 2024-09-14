#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_WitchDoctor_Maledict : public client::CDOTA_Buff
    {
    public:
        int32_t m_iStartHealth; // 0x16e8        
        int32_t bonus_damage; // 0x16ec        
        int32_t bonus_damage_threshold; // 0x16f0        
        int32_t ticks; // 0x16f4        
        int32_t iCurrentTick; // 0x16f8        
        int32_t health_restoration_reduction; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x1700[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_WitchDoctor_Maledict because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_WitchDoctor_Maledict) == 0x1708);
};
