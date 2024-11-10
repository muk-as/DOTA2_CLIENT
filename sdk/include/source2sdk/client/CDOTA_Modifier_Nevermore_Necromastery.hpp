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
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nevermore_Necromastery : public client::CDOTA_Buff
    {
    public:
        int32_t necromastery_damage_per_soul; // 0x1708        
        int32_t necromastery_max_souls; // 0x170c        
        int32_t max_soul_increase_on_hero_kill; // 0x1710        
        int32_t shard_crit_pct; // 0x1714        
        int32_t shard_souls_per_kill; // 0x1718        
        float shard_fear_duration; // 0x171c        
        int32_t m_nPermanentMaxSouls; // 0x1720        
        client::ParticleIndex_t m_iParticleSoulsIndex; // 0x1724        
        client::ParticleIndex_t m_FXIndex; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4]; // 0x172c
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1730        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nevermore_Necromastery because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nevermore_Necromastery) == 0x1748);
};
