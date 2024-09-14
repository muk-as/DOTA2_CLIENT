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
    // Size: 0x17b8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Wisp_Spirits : public client::CDOTA_Buff
    {
    public:
        int32_t creep_damage; // 0x16e8        
        int32_t hero_damage; // 0x16ec        
        int32_t hit_radius; // 0x16f0        
        int32_t hero_hit_radius; // 0x16f4        
        int32_t explode_radius; // 0x16f8        
        int32_t min_range; // 0x16fc        
        int32_t max_range; // 0x1700        
        int32_t default_radius; // 0x1704        
        int32_t spirit_amount; // 0x1708        
        float m_flRotation; // 0x170c        
        float m_flSpiritRadius; // 0x1710        
        int32_t spirit_movement_rate; // 0x1714        
        entity2::GameTime_t m_flNextSpawn; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4]; // 0x171c
        CUtlString m_strSpiritsOutSwapAbility; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1728[0x90];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Wisp_Spirits because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Wisp_Spirits) == 0x17b8);
};
