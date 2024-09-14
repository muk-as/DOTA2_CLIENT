#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_MonkeyKing_ArcToGround : public client::CDOTA_Buff
    {
    public:
        float leap_speed; // 0x16e8        
        float give_up_distance; // 0x16ec        
        float attackspeed_duration; // 0x16f0        
        float m_flOriginalZDelta; // 0x16f4        
        float m_flZDelta; // 0x16f8        
        Vector m_vStart; // 0x16fc        
        Vector m_vTargetPos; // 0x1708        
        float m_flSpeed; // 0x1714        
        bool m_bDroppedFromTree; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x3]; // 0x1719
        client::ParticleIndex_t m_nFXIndex; // 0x171c        
        client::ParticleIndex_t m_nFXIndex2; // 0x1720        
        float m_flOriginalHeight; // 0x1724        
        bool m_bRightClickHop; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1729[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_ArcToGround because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MonkeyKing_ArcToGround) == 0x1730);
};
