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
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DragonKnight_DragonForm : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_movement_speed; // 0x16e8        
        int32_t bonus_attack_damage; // 0x16ec        
        int32_t bonus_attack_range; // 0x16f0        
        int32_t attack_projectile_speed_bonus; // 0x16f4        
        int32_t magic_resistance; // 0x16f8        
        int32_t model_scale; // 0x16fc        
        int32_t iLevel; // 0x1700        
        int32_t m_iOriginalAttackCapabilities; // 0x1704        
        CUtlSymbolLarge m_iszRangedAttackEffect; // 0x1708        
        int32_t bonus_slow_resistance; // 0x1710        
        int32_t is_green_dragon; // 0x1714        
        int32_t is_red_dragon; // 0x1718        
        int32_t is_blue_dragon; // 0x171c        
        int32_t iAssetIndex; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DragonKnight_DragonForm because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DragonKnight_DragonForm) == 0x1728);
};
