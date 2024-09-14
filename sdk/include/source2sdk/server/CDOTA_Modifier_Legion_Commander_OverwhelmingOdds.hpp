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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Legion_Commander_OverwhelmingOdds : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_attack_speed_creeps; // 0x16e8        
        int32_t bonus_attack_speed; // 0x16ec        
        float armor_per_creep; // 0x16f0        
        float armor_per_hero; // 0x16f4        
        int32_t m_nTotalBonus; // 0x16f8        
        float m_flBonusArmor; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Legion_Commander_OverwhelmingOdds because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Legion_Commander_OverwhelmingOdds) == 0x1700);
};
