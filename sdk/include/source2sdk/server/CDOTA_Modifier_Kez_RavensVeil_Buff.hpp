#pragma once
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"
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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kez_RavensVeil_Buff : public server::CDOTA_Modifier_Invisible
    {
    public:
        float fade_time; // 0x1718        
        float buff_duration; // 0x171c        
        int32_t bonus_ms; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kez_RavensVeil_Buff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kez_RavensVeil_Buff) == 0x1728);
};
