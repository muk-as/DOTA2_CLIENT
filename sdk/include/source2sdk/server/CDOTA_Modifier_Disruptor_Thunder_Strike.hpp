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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Disruptor_Thunder_Strike : public client::CDOTA_Buff
    {
    public:
        float strike_interval; // 0x1708        
        float radius; // 0x170c        
        int32_t strike_damage; // 0x1710        
        int32_t strike_damage_bonus; // 0x1714        
        int32_t hits_units_inside_kinetic; // 0x1718        
        entity2::GameTime_t m_flGroundDelayEndTime; // 0x171c        
        bool is_thinker; // 0x1720        
        bool m_bTransferred; // 0x1721        
        [[maybe_unused]] std::uint8_t pad_0x1722[0x2]; // 0x1722
        int32_t m_nThinkerViewer; // 0x1724        
        int32_t m_nThinkerViewerTeam; // 0x1728        
        int32_t m_nStrikeCount; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_Thunder_Strike because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Disruptor_Thunder_Strike) == 0x1730);
};
