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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Grimstroke_SoulChain : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPartner;
            char m_hPartner[0x_]; // 0x_            
            bool m_bIsPrimary; // 0x_            
            bool m_bEscaped; // 0x_            
            bool m_bTethered; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndexA; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x_            
            bool m_bStartedLeashSound; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_fLeashDistance; // 0x_            
            source2sdk::entity2::GameTime_t m_fOriginalStartTime; // 0x_            
            source2sdk::client::ParticleIndex_t m_nOverheadFXIndex; // 0x_            
            float chain_latch_radius; // 0x_            
            float chain_break_distance; // 0x_            
            float leash_limit_multiplier; // 0x_            
            float chain_duration; // 0x_            
            float creep_duration_pct; // 0x_            
            std::int32_t bonus_reflected_spell_damage; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_SoulChain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Grimstroke_SoulChain) == 0x_);
    };
};
