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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Orb_Of_Corrosion_Debuff : public client::CDOTA_Buff
    {
    public:
        int32_t armor; // 0x16e8        
        int32_t slow_melee; // 0x16ec        
        int32_t slow_range; // 0x16f0        
        int32_t heal_reduction; // 0x16f4        
        bool bCasterRanged; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16f9[0x3]; // 0x16f9
        int32_t damage; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Orb_Of_Corrosion_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Orb_Of_Corrosion_Debuff) == 0x1700);
};
