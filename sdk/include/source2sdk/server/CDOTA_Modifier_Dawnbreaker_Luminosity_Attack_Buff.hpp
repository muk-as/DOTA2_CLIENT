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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff : public client::CDOTA_Buff
    {
    public:
        bool m_bIsBuffedAttack; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        int32_t heal_pct; // 0x16ec        
        int32_t bonus_damage; // 0x16f0        
        int32_t heal_radius; // 0x16f4        
        int32_t heal_from_creeps; // 0x16f8        
        int32_t allied_healing_pct; // 0x16fc        
        // hTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hTargets;
        char hTargets[0x18]; // 0x1700        
        float m_flTotalToHeal; // 0x1718        
        bool m_bHasProccedCooldownReduction; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3]; // 0x171d
        float cooldown_reduction; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff) == 0x1728);
};
