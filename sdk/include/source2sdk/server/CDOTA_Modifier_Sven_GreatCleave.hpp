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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Sven_GreatCleave : public client::CDOTA_Buff
    {
    public:
        int32_t cleave_starting_width; // 0x16e8        
        int32_t cleave_ending_width; // 0x16ec        
        int32_t cleave_distance; // 0x16f0        
        int32_t great_cleave_damage; // 0x16f4        
        int32_t strength_bonus; // 0x16f8        
        int16_t m_nLastCleaveRecord; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x16fe[0x2]; // 0x16fe
        int32_t m_nLastCleaveKills; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Sven_GreatCleave because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Sven_GreatCleave) == 0x1708);
};