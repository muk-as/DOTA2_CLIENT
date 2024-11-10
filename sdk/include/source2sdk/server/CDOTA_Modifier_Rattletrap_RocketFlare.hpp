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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rattletrap_RocketFlare : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1708[0x8]; // 0x1708
        int32_t projectile_vision_radius; // 0x1710        
        float projectile_vision_duration; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_RocketFlare because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rattletrap_RocketFlare) == 0x1718);
};
