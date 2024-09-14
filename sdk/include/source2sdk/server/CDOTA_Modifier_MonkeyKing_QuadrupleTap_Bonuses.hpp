#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses : public client::CDOTA_Buff
    {
    public:
        int32_t charges; // 0x16e8        
        int32_t bonus_damage; // 0x16ec        
        int32_t lifesteal; // 0x16f0        
        client::ParticleIndex_t m_nFXIndex; // 0x16f4        
        int32_t m_nIgnoreStrikeIndex; // 0x16f8        
        bool m_bIsAttackAnim; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x16fd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses) == 0x1700);
};
