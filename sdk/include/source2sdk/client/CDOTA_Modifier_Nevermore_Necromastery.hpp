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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nevermore_Necromastery : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t souls_per_kill; // 0x_            
            std::int32_t souls_per_hero_kill; // 0x_            
            std::int32_t necromastery_damage_per_soul; // 0x_            
            std::int32_t necromastery_max_souls; // 0x_            
            std::int32_t max_soul_increase_on_hero_kill; // 0x_            
            std::int32_t shard_crit_pct; // 0x_            
            std::int32_t shard_souls_per_kill; // 0x_            
            float shard_fear_duration; // 0x_            
            std::int32_t m_nPermanentMaxSouls; // 0x_            
            source2sdk::client::ParticleIndex_t m_iParticleSoulsIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_FXIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nevermore_Necromastery because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Nevermore_Necromastery) == 0x_);
    };
};
