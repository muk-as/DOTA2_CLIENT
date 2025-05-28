#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pugna_LifeDrain : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t health_drain; // 0x1888            
            std::int32_t ally_healing; // 0x188c            
            float health_drain_death_boost; // 0x1890            
            float tick_rate; // 0x1894            
            bool m_bDoRangeCheck; // 0x1898            
            uint8_t _pad1899[0x3]; // 0x1899
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x189c            
            source2sdk::entity2::GameTime_t m_flElapsedTime; // 0x18a0            
            bool m_bPrimary; // 0x18a4            
            bool m_bShard; // 0x18a5            
            bool m_bFromWard; // 0x18a6            
            uint8_t _pad18a7[0x1]; // 0x18a7
            // m_hWard has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hWard;
            char m_hWard[0x4]; // 0x18a8            
            float spell_amp_drain_duration; // 0x18ac            
            std::int32_t max_spell_amp_drain_pct; // 0x18b0            
            std::int32_t spell_amp_drain_rate; // 0x18b4            
            std::int32_t spell_amp_drain_rate_ward; // 0x18b8            
            std::int32_t spell_amp_drain_max; // 0x18bc            
            std::int32_t health_to_mana_rate; // 0x18c0            
            uint8_t _pad18c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pugna_LifeDrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pugna_LifeDrain) == 0x18c8);
    };
};
