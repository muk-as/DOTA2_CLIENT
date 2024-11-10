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
    // Size: 0x1778
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Seasonal_TI11_CongaLine : public client::CDOTA_Buff
    {
    public:
        int32_t NUM_SOUNDS; // 0x1708        
        float dance_interval; // 0x170c        
        float gesture_duration; // 0x1710        
        float catch_up_distance; // 0x1714        
        float slow_duration; // 0x1718        
        float slow_amount; // 0x171c        
        int32_t m_nGesture; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4]; // 0x1724
        // m_vecDancers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CDOTA_BaseNPC>> m_vecDancers;
        char m_vecDancers[0x18]; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1740[0x30]; // 0x1740
        bool m_bIsGesturing; // 0x1770        
        [[maybe_unused]] std::uint8_t pad_0x1771[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI11_CongaLine because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_TI11_CongaLine) == 0x1778);
};
