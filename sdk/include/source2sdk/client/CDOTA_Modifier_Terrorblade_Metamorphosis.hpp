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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Terrorblade_Metamorphosis : public client::CDOTA_Buff
    {
    public:
        float base_attack_time; // 0x16e8        
        int32_t bonus_range; // 0x16ec        
        int32_t m_iOriginalAttackCapabilities; // 0x16f0        
        int32_t bonus_damage; // 0x16f4        
        int32_t speed_loss; // 0x16f8        
        int32_t attack_projectile_speed_bonus; // 0x16fc        
        CUtlSymbolLarge m_iszRangedAttackEffect; // 0x1700        
        CUtlSymbolLarge m_iszOriginalRangedAttackEffect; // 0x1708        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Terrorblade_Metamorphosis because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Terrorblade_Metamorphosis) == 0x1710);
};
