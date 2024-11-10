#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses : public client::CDOTA_Buff
    {
    public:
        int32_t charges; // 0x1708        
        int32_t bonus_damage; // 0x170c        
        int32_t lifesteal; // 0x1710        
        client::ParticleIndex_t m_nFXIndex; // 0x1714        
        int32_t m_nIgnoreStrikeIndex; // 0x1718        
        bool m_bIsAttackAnim; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses) == 0x1720);
};
