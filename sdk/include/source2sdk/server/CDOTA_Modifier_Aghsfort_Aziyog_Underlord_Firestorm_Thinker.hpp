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
    class CDOTA_Modifier_Aghsfort_Aziyog_Underlord_Firestorm_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t wave_damage; // 0x16e8        
        int32_t wave_count; // 0x16ec        
        int32_t radius; // 0x16f0        
        int32_t summon_count; // 0x16f4        
        float wave_interval; // 0x16f8        
        float burn_duration; // 0x16fc        
        float first_wave_delay; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Aghsfort_Aziyog_Underlord_Firestorm_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Aghsfort_Aziyog_Underlord_Firestorm_Thinker) == 0x1708);
};
