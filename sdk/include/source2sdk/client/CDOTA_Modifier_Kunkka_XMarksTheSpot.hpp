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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kunkka_XMarksTheSpot : public client::CDOTA_Buff
    {
    public:
        int32_t ally_ms; // 0x1708        
        int32_t ally_armor; // 0x170c        
        // hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> hThinker;
        char hThinker[0x4]; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_XMarksTheSpot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kunkka_XMarksTheSpot) == 0x1720);
};
