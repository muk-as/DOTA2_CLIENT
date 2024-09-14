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
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_StormSpirit_StaticRemnantThinker : public client::CDOTA_Buff
    {
    public:
        int32_t static_remnant_radius; // 0x16e8        
        int32_t static_remnant_damage_radius; // 0x16ec        
        int32_t static_remnant_damage; // 0x16f0        
        float static_remnant_delay; // 0x16f4        
        float static_remnant_travel_speed; // 0x16f8        
        int32_t m_iSearchRadius; // 0x16fc        
        int32_t m_iDamageRadius; // 0x1700        
        bool m_bDoesMove; // 0x1704        
        bool m_bReachedTargetLocation; // 0x1705        
        [[maybe_unused]] std::uint8_t pad_0x1706[0x2]; // 0x1706
        Vector m_vTargetLocation; // 0x1708        
        entity2::GameTime_t m_flCreateTime; // 0x1714        
        entity2::GameTime_t m_flLastMoveTime; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_StormSpirit_StaticRemnantThinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_StormSpirit_StaticRemnantThinker) == 0x1720);
};
