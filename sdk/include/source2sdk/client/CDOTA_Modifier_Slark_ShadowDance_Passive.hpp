#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Slark_ShadowDance_Passive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float activation_delay; // 0x17f8            
            float neutral_disable; // 0x17fc            
            float linger_search_radius; // 0x1800            
            float linger_duration; // 0x1804            
            bool m_bPendingRefresh; // 0x1808            
            uint8_t _pad1809[0x3]; // 0x1809
            source2sdk::entity2::GameTime_t m_fPendingStateChangeTime; // 0x180c            
            source2sdk::client::CountdownTimer m_NeutralHitTimer; // 0x1810            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Slark_ShadowDance_Passive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Slark_ShadowDance_Passive) == 0x1828);
    };
};
