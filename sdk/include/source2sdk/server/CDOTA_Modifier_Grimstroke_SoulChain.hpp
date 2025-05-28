#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18e0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Grimstroke_SoulChain : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPartner;
            char m_hPartner[0x4]; // 0x1888            
            bool m_bIsPrimary; // 0x188c            
            bool m_bEscaped; // 0x188d            
            bool m_bTethered; // 0x188e            
            uint8_t _pad188f[0x1]; // 0x188f
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1890            
            source2sdk::client::ParticleIndex_t m_nFXIndexA; // 0x1894            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x1898            
            bool m_bStartedLeashSound; // 0x189c            
            uint8_t _pad189d[0x3]; // 0x189d
            float m_fLeashDistance; // 0x18a0            
            source2sdk::entity2::GameTime_t m_fOriginalStartTime; // 0x18a4            
            source2sdk::client::ParticleIndex_t m_nOverheadFXIndex; // 0x18a8            
            float chain_latch_radius; // 0x18ac            
            float chain_break_distance; // 0x18b0            
            float leash_limit_multiplier; // 0x18b4            
            float chain_duration; // 0x18b8            
            float creep_duration_pct; // 0x18bc            
            std::int32_t bonus_reflected_spell_damage; // 0x18c0            
            uint8_t _pad18c4[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_SoulChain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Grimstroke_SoulChain) == 0x18e0);
    };
};
