#pragma once
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_DragonPotion : public server::CDOTA_Buff_Item
    {
    public:
        int32_t m_iOriginalAttackCapabilities; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16ec[0x4]; // 0x16ec
        CUtlSymbolLarge m_iszRangedAttackEffect; // 0x16f0        
        int32_t bonus_movement_speed; // 0x16f8        
        int32_t bonus_attack_damage; // 0x16fc        
        int32_t bonus_attack_range; // 0x1700        
        int32_t attack_projectile_speed; // 0x1704        
        int32_t magic_resistance; // 0x1708        
        int32_t model_scale; // 0x170c        
        int32_t skin_number; // 0x1710        
        bool flying_movement; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_DragonPotion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_DragonPotion) == 0x1718);
};
