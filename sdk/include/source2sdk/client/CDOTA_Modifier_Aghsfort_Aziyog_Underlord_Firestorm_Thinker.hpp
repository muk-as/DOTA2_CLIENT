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
    class CDOTA_Modifier_Aghsfort_Aziyog_Underlord_Firestorm_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t wave_damage; // 0x1708        
        int32_t wave_count; // 0x170c        
        int32_t radius; // 0x1710        
        int32_t summon_count; // 0x1714        
        float wave_interval; // 0x1718        
        float burn_duration; // 0x171c        
        float first_wave_delay; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Aghsfort_Aziyog_Underlord_Firestorm_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Aghsfort_Aziyog_Underlord_Firestorm_Thinker) == 0x1728);
};
