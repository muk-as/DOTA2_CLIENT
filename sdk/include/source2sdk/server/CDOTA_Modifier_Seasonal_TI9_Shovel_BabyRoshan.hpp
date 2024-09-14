#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CDOTA_Modifier_Seasonal_TI9_Shovel_BabyRoshan : public client::CDOTA_Buff
    {
    public:
        bool m_bFirstThink; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        entity2::GameTime_t m_flStartTime; // 0x16ec        
        Vector m_vecStartingPos; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI9_Shovel_BabyRoshan because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_TI9_Shovel_BabyRoshan) == 0x1700);
};
