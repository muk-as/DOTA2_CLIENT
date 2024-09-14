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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Zuus_ThundergodsWrathThinker : public client::CDOTA_Buff
    {
    public:
        int32_t damage; // 0x16e8        
        float damage_pct; // 0x16ec        
        float sight_duration; // 0x16f0        
        float growing_delay; // 0x16f4        
        float grow_kill_amp; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Zuus_ThundergodsWrathThinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Zuus_ThundergodsWrathThinker) == 0x1700);
};
