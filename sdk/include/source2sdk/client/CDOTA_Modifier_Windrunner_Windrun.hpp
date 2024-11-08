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
    class CDOTA_Modifier_Windrunner_Windrun : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x1708        
        int32_t scepter_radius; // 0x170c        
        int32_t movespeed_bonus_pct; // 0x1710        
        bool m_bDispellable; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3]; // 0x1715
        int32_t physical_damage_pct; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Windrunner_Windrun because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Windrunner_Windrun) == 0x1720);
};
