#pragma once
#include "source2sdk/client/CDOTA_Modifier_Hexed.hpp"
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
    class CDOTA_Modifier_SheepStick_Debuff : public client::CDOTA_Modifier_Hexed
    {
    public:
        float sheep_movement_speed; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_SheepStick_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_SheepStick_Debuff) == 0x1710);
};
