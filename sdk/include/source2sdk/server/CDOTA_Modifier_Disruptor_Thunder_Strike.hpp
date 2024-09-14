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
    class CDOTA_Modifier_Disruptor_Thunder_Strike : public client::CDOTA_Buff
    {
    public:
        float strike_interval; // 0x16e8        
        float radius; // 0x16ec        
        int32_t strike_damage; // 0x16f0        
        int32_t strike_damage_bonus; // 0x16f4        
        int32_t hits_units_inside_kinetic; // 0x16f8        
        entity2::GameTime_t m_flGroundDelayEndTime; // 0x16fc        
        bool is_thinker; // 0x1700        
        bool m_bTransferred; // 0x1701        
        [[maybe_unused]] std::uint8_t pad_0x1702[0x2]; // 0x1702
        int32_t m_nThinkerViewer; // 0x1704        
        int32_t m_nThinkerViewerTeam; // 0x1708        
        int32_t m_nStrikeCount; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_Thunder_Strike because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Disruptor_Thunder_Strike) == 0x1710);
};
