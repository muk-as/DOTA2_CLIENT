#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Life_Stealer_Feast : public client::CDOTA_Buff
    {
    public:
        float hp_leech_percent; // 0x16e8        
        float hp_damage_percent; // 0x16ec        
        int32_t creep_deny_percent; // 0x16f0        
        int32_t bonus_hp_per_creep; // 0x16f4        
        int32_t bonus_hp_per_hero; // 0x16f8        
        int32_t m_nTotalBonusHP; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Life_Stealer_Feast because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Life_Stealer_Feast) == 0x1700);
};
