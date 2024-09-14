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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Seasonal_TI9_Shovel_Pudgling : public client::CDOTA_Buff
    {
    public:
        entity2::GameTime_t m_flStartTime; // 0x16e8        
        int32_t m_nActionCount; // 0x16ec        
        Vector m_vecStartingPos; // 0x16f0        
        Vector m_vecDestinationOffset; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x1708[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI9_Shovel_Pudgling because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_TI9_Shovel_Pudgling) == 0x1710);
};
