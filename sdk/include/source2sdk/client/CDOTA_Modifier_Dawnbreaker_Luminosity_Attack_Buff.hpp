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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff : public client::CDOTA_Buff
    {
    public:
        bool m_bIsBuffedAttack; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        int32_t heal_pct; // 0x170c        
        int32_t bonus_damage; // 0x1710        
        int32_t heal_radius; // 0x1714        
        int32_t heal_from_creeps; // 0x1718        
        int32_t allied_healing_pct; // 0x171c        
        // hTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> hTargets;
        char hTargets[0x18]; // 0x1720        
        float m_flTotalToHeal; // 0x1738        
        bool m_bHasProccedCooldownReduction; // 0x173c        
        [[maybe_unused]] std::uint8_t pad_0x173d[0x3]; // 0x173d
        float cooldown_reduction; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff) == 0x1748);
};
