#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    class CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight : public client::CDOTA_Buff
    {
    public:
        float attack_point; // 0x1708        
        int32_t attack_range_bonus; // 0x170c        
        int32_t projectile_speed_bonus; // 0x1710        
        int32_t night_vision_bonus; // 0x1714        
        int32_t movement_scepter; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4]; // 0x171c
        CUtlSymbolLarge m_iszRangedAttackEffect; // 0x1720        
        int32_t max_attacks; // 0x1728        
        int32_t m_iNumAttacks; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight) == 0x1730);
};
