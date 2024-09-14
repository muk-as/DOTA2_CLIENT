#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Slark_ShadowDance_Passive : public client::CDOTA_Buff
    {
    public:
        float activation_delay; // 0x16e8        
        float neutral_disable; // 0x16ec        
        float linger_search_radius; // 0x16f0        
        float linger_duration; // 0x16f4        
        bool m_bPendingRefresh; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16f9[0x3]; // 0x16f9
        entity2::GameTime_t m_fPendingStateChangeTime; // 0x16fc        
        client::CountdownTimer m_NeutralHitTimer; // 0x1700        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Slark_ShadowDance_Passive because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Slark_ShadowDance_Passive) == 0x1718);
};
