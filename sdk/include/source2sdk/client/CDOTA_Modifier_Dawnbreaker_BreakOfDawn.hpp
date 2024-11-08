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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Dawnbreaker_BreakOfDawn : public client::CDOTA_Buff
    {
    public:
        float reveal_duration; // 0x1708        
        float conceal_duration; // 0x170c        
        float think_interval; // 0x1710        
        float reveal_linger; // 0x1714        
        float reveal_radius; // 0x1718        
        float m_flBonusVisionRadius; // 0x171c        
        entity2::GameTime_t m_flRevealExpansionTime; // 0x1720        
        entity2::GameTime_t m_flFullRevealLinger; // 0x1724        
        entity2::GameTime_t m_flConcealTime; // 0x1728        
        bool m_bWasDayTime; // 0x172c        
        [[maybe_unused]] std::uint8_t pad_0x172d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_BreakOfDawn because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Dawnbreaker_BreakOfDawn) == 0x1730);
};
