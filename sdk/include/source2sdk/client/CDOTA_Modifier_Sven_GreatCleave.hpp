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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Sven_GreatCleave : public client::CDOTA_Buff
    {
    public:
        int32_t cleave_starting_width; // 0x1708        
        int32_t cleave_ending_width; // 0x170c        
        int32_t cleave_distance; // 0x1710        
        int32_t great_cleave_damage; // 0x1714        
        int32_t strength_bonus; // 0x1718        
        int16_t m_nLastCleaveRecord; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171e[0x2]; // 0x171e
        int32_t m_nLastCleaveKills; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Sven_GreatCleave because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Sven_GreatCleave) == 0x1728);
};
