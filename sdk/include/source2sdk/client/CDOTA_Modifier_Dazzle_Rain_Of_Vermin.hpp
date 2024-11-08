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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Dazzle_Rain_Of_Vermin : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x1708        
        float interval; // 0x170c        
        float hex_chance; // 0x1710        
        float hex_duration; // 0x1714        
        int32_t damage; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Dazzle_Rain_Of_Vermin because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Dazzle_Rain_Of_Vermin) == 0x1720);
};
