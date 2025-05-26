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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Grimstroke_SoulChain : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPartner;
            char m_hPartner[0x4]; // 0x1878            
            bool m_bIsPrimary; // 0x187c            
            bool m_bEscaped; // 0x187d            
            bool m_bTethered; // 0x187e            
            uint8_t _pad187f[0x1]; // 0x187f
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1880            
            source2sdk::client::ParticleIndex_t m_nFXIndexA; // 0x1884            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x1888            
            bool m_bStartedLeashSound; // 0x188c            
            uint8_t _pad188d[0x3]; // 0x188d
            float m_fLeashDistance; // 0x1890            
            source2sdk::entity2::GameTime_t m_fOriginalStartTime; // 0x1894            
            source2sdk::client::ParticleIndex_t m_nOverheadFXIndex; // 0x1898            
            float chain_latch_radius; // 0x189c            
            float chain_break_distance; // 0x18a0            
            float leash_limit_multiplier; // 0x18a4            
            float chain_duration; // 0x18a8            
            float creep_duration_pct; // 0x18ac            
            std::int32_t bonus_reflected_spell_damage; // 0x18b0            
            uint8_t _pad18b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_SoulChain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Grimstroke_SoulChain) == 0x18b8);
    };
};
