#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Slark_ShadowDance_Passive : public client::CDOTA_Buff
    {
    public:
        float activation_delay; // 0x1708        
        float neutral_disable; // 0x170c        
        float linger_search_radius; // 0x1710        
        float linger_duration; // 0x1714        
        bool m_bPendingRefresh; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x3]; // 0x1719
        entity2::GameTime_t m_fPendingStateChangeTime; // 0x171c        
        server::CountdownTimer m_NeutralHitTimer; // 0x1720        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Slark_ShadowDance_Passive because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Slark_ShadowDance_Passive) == 0x1738);
};
