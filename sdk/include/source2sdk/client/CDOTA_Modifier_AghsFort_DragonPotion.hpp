#pragma once
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_DragonPotion : public client::CDOTA_Buff_Item
    {
    public:
        int32_t m_iOriginalAttackCapabilities; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4]; // 0x170c
        CUtlSymbolLarge m_iszRangedAttackEffect; // 0x1710        
        int32_t bonus_movement_speed; // 0x1718        
        int32_t bonus_attack_damage; // 0x171c        
        int32_t bonus_attack_range; // 0x1720        
        int32_t attack_projectile_speed; // 0x1724        
        int32_t magic_resistance; // 0x1728        
        int32_t model_scale; // 0x172c        
        int32_t skin_number; // 0x1730        
        bool flying_movement; // 0x1734        
        [[maybe_unused]] std::uint8_t pad_0x1735[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_DragonPotion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_DragonPotion) == 0x1738);
};
