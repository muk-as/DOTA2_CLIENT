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
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nevermore_Necromastery : public client::CDOTA_Buff
    {
    public:
        int32_t necromastery_damage_per_soul; // 0x16e8        
        int32_t necromastery_max_souls; // 0x16ec        
        int32_t max_soul_increase_on_hero_kill; // 0x16f0        
        int32_t shard_crit_pct; // 0x16f4        
        int32_t shard_souls_per_kill; // 0x16f8        
        float shard_fear_duration; // 0x16fc        
        int32_t m_nPermanentMaxSouls; // 0x1700        
        client::ParticleIndex_t m_iParticleSoulsIndex; // 0x1704        
        client::ParticleIndex_t m_FXIndex; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4]; // 0x170c
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1710        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nevermore_Necromastery because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nevermore_Necromastery) == 0x1728);
};
