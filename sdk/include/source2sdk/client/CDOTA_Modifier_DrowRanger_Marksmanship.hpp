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
    // Size: 0x1740
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DrowRanger_Marksmanship : public client::CDOTA_Buff
    {
    public:
        int32_t chance; // 0x16e8        
        client::ParticleIndex_t m_nFxIndex; // 0x16ec        
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x16f0        
        // m_GlacialInFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_GlacialInFlightAttackRecords;
        char m_GlacialInFlightAttackRecords[0x18]; // 0x1708        
        int32_t bonus_factor; // 0x1720        
        int32_t disable_range; // 0x1724        
        int32_t agility_range; // 0x1728        
        int32_t bonus_damage; // 0x172c        
        int32_t split_count; // 0x1730        
        int32_t split_range; // 0x1734        
        bool m_bGlacialAttack; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x1739[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DrowRanger_Marksmanship because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DrowRanger_Marksmanship) == 0x1740);
};
