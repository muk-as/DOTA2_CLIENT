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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bloodseeker_Rupture : public client::CDOTA_Buff
    {
    public:
        int32_t movement_damage_pct; // 0x16e8        
        float hp_pct; // 0x16ec        
        Vector vLastPos; // 0x16f0        
        bool bResetPosition; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x16fd[0x3]; // 0x16fd
        float knockback; // 0x1700        
        float knockback_duration; // 0x1704        
        float m_fAccumulatedDamage; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bloodseeker_Rupture because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bloodseeker_Rupture) == 0x1710);
};
