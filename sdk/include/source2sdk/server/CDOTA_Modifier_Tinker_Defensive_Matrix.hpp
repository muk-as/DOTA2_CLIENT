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
    class CDOTA_Modifier_Tinker_Defensive_Matrix : public client::CDOTA_Buff
    {
    public:
        int32_t damage_absorb; // 0x1708        
        int32_t status_resistance; // 0x170c        
        int32_t cooldown_reduction; // 0x1710        
        int32_t flicker_range; // 0x1714        
        int32_t flicker_angle; // 0x1718        
        bool m_bStartedTimer; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3]; // 0x171d
        int32_t m_nDamageAbsorbed; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tinker_Defensive_Matrix because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tinker_Defensive_Matrix) == 0x1728);
};
