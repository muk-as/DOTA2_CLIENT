#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mirana_SolarFlare : public client::CDOTA_Buff
    {
    public:
        float duration; // 0x16e8        
        float smoothness; // 0x16ec        
        float increase_rate; // 0x16f0        
        int32_t max_total_increase; // 0x16f4        
        entity2::GameTime_t flMaxDamageGameTime; // 0x16f8        
        int32_t evasion; // 0x16fc        
        int32_t m_iTotalAmount; // 0x1700        
        int32_t ally_pct; // 0x1704        
        int32_t day_vision_multiplier; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mirana_SolarFlare because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mirana_SolarFlare) == 0x1710);
};
