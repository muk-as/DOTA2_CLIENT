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
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_StormSpirit_StaticRemnantThinker : public client::CDOTA_Buff
    {
    public:
        int32_t static_remnant_radius; // 0x1708        
        int32_t static_remnant_damage_radius; // 0x170c        
        int32_t static_remnant_damage; // 0x1710        
        float static_remnant_delay; // 0x1714        
        float static_remnant_travel_speed; // 0x1718        
        int32_t m_iSearchRadius; // 0x171c        
        int32_t m_iDamageRadius; // 0x1720        
        bool m_bDoesMove; // 0x1724        
        bool m_bReachedTargetLocation; // 0x1725        
        [[maybe_unused]] std::uint8_t pad_0x1726[0x2]; // 0x1726
        Vector m_vTargetLocation; // 0x1728        
        entity2::GameTime_t m_flCreateTime; // 0x1734        
        entity2::GameTime_t m_flLastMoveTime; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x173c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_StormSpirit_StaticRemnantThinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_StormSpirit_StaticRemnantThinker) == 0x1740);
};
