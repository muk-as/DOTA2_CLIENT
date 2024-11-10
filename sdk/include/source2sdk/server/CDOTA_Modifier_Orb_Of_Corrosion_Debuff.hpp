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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Orb_Of_Corrosion_Debuff : public client::CDOTA_Buff
    {
    public:
        int32_t armor; // 0x1708        
        int32_t slow_melee; // 0x170c        
        int32_t slow_range; // 0x1710        
        int32_t heal_reduction; // 0x1714        
        bool bCasterRanged; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x3]; // 0x1719
        int32_t damage; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Orb_Of_Corrosion_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Orb_Of_Corrosion_Debuff) == 0x1720);
};
