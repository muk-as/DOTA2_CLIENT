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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Hoodwink_Scurry_Active : public client::CDOTA_Buff
    {
    public:
        int32_t movement_speed_pct; // 0x16e8        
        int32_t attack_range; // 0x16ec        
        int32_t cast_range; // 0x16f0        
        float radius_increase; // 0x16f4        
        float m_flTreeDuration; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Scurry_Active because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Hoodwink_Scurry_Active) == 0x1700);
};
