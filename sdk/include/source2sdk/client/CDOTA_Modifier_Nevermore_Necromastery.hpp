#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nevermore_Necromastery : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t souls_per_kill; // 0x1878            
            std::int32_t souls_per_hero_kill; // 0x187c            
            std::int32_t necromastery_damage_per_soul; // 0x1880            
            std::int32_t necromastery_max_souls; // 0x1884            
            std::int32_t max_soul_increase_on_hero_kill; // 0x1888            
            std::int32_t shard_crit_pct; // 0x188c            
            std::int32_t shard_souls_per_kill; // 0x1890            
            float shard_fear_duration; // 0x1894            
            std::int32_t m_nPermanentMaxSouls; // 0x1898            
            source2sdk::client::ParticleIndex_t m_iParticleSoulsIndex; // 0x189c            
            source2sdk::client::ParticleIndex_t m_FXIndex; // 0x18a0            
            uint8_t _pad18a4[0x4]; // 0x18a4
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x18a8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nevermore_Necromastery because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Nevermore_Necromastery) == 0x18c0);
    };
};
