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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kunkka_Tidebringer : public client::CDOTA_Buff
    {
    public:
        bool m_bTidebringerAttack; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        int32_t cleave_starting_width; // 0x170c        
        int32_t cleave_ending_width; // 0x1710        
        int32_t cleave_distance; // 0x1714        
        int32_t damage_bonus; // 0x1718        
        client::ParticleIndex_t m_nFXIndex; // 0x171c        
        int32_t cleave_damage; // 0x1720        
        float cooldown_reduction_per_hero_hit; // 0x1724        
        [[maybe_unused]] std::uint8_t pad_0x1728[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_Tidebringer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kunkka_Tidebringer) == 0x1730);
};
