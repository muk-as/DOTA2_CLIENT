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
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DragonKnight_DragonForm : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_movement_speed; // 0x1708        
        int32_t bonus_attack_damage; // 0x170c        
        int32_t bonus_attack_range; // 0x1710        
        int32_t attack_projectile_speed_bonus; // 0x1714        
        int32_t magic_resistance; // 0x1718        
        int32_t model_scale; // 0x171c        
        int32_t iLevel; // 0x1720        
        int32_t m_iOriginalAttackCapabilities; // 0x1724        
        CUtlSymbolLarge m_iszRangedAttackEffect; // 0x1728        
        int32_t bonus_slow_resistance; // 0x1730        
        int32_t is_green_dragon; // 0x1734        
        int32_t is_red_dragon; // 0x1738        
        int32_t is_blue_dragon; // 0x173c        
        int32_t iAssetIndex; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DragonKnight_DragonForm because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DragonKnight_DragonForm) == 0x1748);
};
