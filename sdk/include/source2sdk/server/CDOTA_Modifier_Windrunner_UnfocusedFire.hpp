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
    // Size: 0x1758
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Windrunner_UnfocusedFire : public client::CDOTA_Buff
    {
    public:
        int32_t nQuadrant; // 0x1708        
        int32_t focusfire_damage_reduction; // 0x170c        
        int32_t bonus_range; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x44];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Windrunner_UnfocusedFire because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Windrunner_UnfocusedFire) == 0x1758);
};
