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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Grimstroke_SoulChain : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPartner;
            char m_hPartner[0x4]; // 0x17f8            
            bool m_bIsPrimary; // 0x17fc            
            bool m_bEscaped; // 0x17fd            
            bool m_bTethered; // 0x17fe            
            uint8_t _pad17ff[0x1]; // 0x17ff
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1800            
            source2sdk::client::ParticleIndex_t m_nFXIndexA; // 0x1804            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x1808            
            bool m_bStartedLeashSound; // 0x180c            
            uint8_t _pad180d[0x3]; // 0x180d
            float m_fLeashDistance; // 0x1810            
            source2sdk::entity2::GameTime_t m_fOriginalStartTime; // 0x1814            
            source2sdk::client::ParticleIndex_t m_nOverheadFXIndex; // 0x1818            
            float chain_latch_radius; // 0x181c            
            float chain_break_distance; // 0x1820            
            float leash_limit_multiplier; // 0x1824            
            float chain_duration; // 0x1828            
            float creep_duration_pct; // 0x182c            
            std::int32_t bonus_reflected_spell_damage; // 0x1830            
            uint8_t _pad1834[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_SoulChain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Grimstroke_SoulChain) == 0x1838);
    };
};
