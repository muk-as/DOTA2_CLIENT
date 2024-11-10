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
    // Size: 0x1760
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DrowRanger_Marksmanship : public client::CDOTA_Buff
    {
    public:
        int32_t chance; // 0x1708        
        client::ParticleIndex_t m_nFxIndex; // 0x170c        
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1710        
        // m_GlacialInFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_GlacialInFlightAttackRecords;
        char m_GlacialInFlightAttackRecords[0x18]; // 0x1728        
        int32_t bonus_factor; // 0x1740        
        int32_t disable_range; // 0x1744        
        int32_t agility_range; // 0x1748        
        int32_t bonus_damage; // 0x174c        
        int32_t split_count; // 0x1750        
        int32_t split_range; // 0x1754        
        bool m_bGlacialAttack; // 0x1758        
        [[maybe_unused]] std::uint8_t pad_0x1759[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DrowRanger_Marksmanship because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DrowRanger_Marksmanship) == 0x1760);
};
