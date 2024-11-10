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
    class CDOTA_Modifier_Bloodseeker_Rupture : public client::CDOTA_Buff
    {
    public:
        int32_t movement_damage_pct; // 0x1708        
        float hp_pct; // 0x170c        
        Vector vLastPos; // 0x1710        
        bool bResetPosition; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3]; // 0x171d
        float knockback; // 0x1720        
        float knockback_duration; // 0x1724        
        float m_fAccumulatedDamage; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bloodseeker_Rupture because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bloodseeker_Rupture) == 0x1730);
};
