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
    class CDOTA_Modifier_Dawnbreaker_BreakOfDawn : public client::CDOTA_Buff
    {
    public:
        float reveal_duration; // 0x16e8        
        float conceal_duration; // 0x16ec        
        float think_interval; // 0x16f0        
        float reveal_linger; // 0x16f4        
        float reveal_radius; // 0x16f8        
        float m_flBonusVisionRadius; // 0x16fc        
        entity2::GameTime_t m_flRevealExpansionTime; // 0x1700        
        entity2::GameTime_t m_flFullRevealLinger; // 0x1704        
        entity2::GameTime_t m_flConcealTime; // 0x1708        
        bool m_bWasDayTime; // 0x170c        
        [[maybe_unused]] std::uint8_t pad_0x170d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_BreakOfDawn because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Dawnbreaker_BreakOfDawn) == 0x1710);
};
