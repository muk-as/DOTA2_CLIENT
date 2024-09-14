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
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1758
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Seasonal_TI11_CongaLine : public client::CDOTA_Buff
    {
    public:
        int32_t NUM_SOUNDS; // 0x16e8        
        float dance_interval; // 0x16ec        
        float gesture_duration; // 0x16f0        
        float catch_up_distance; // 0x16f4        
        float slow_duration; // 0x16f8        
        float slow_amount; // 0x16fc        
        int32_t m_nGesture; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4]; // 0x1704
        // m_vecDancers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CDOTA_BaseNPC>> m_vecDancers;
        char m_vecDancers[0x18]; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1720[0x30]; // 0x1720
        bool m_bIsGesturing; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1751[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI11_CongaLine because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_TI11_CongaLine) == 0x1758);
};
