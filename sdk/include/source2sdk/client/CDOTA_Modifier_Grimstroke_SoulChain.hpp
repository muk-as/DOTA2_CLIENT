#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Grimstroke_SoulChain : public client::CDOTA_Buff
    {
    public:
        // m_hPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPartner;
        char m_hPartner[0x4]; // 0x16e8        
        bool m_bIsPrimary; // 0x16ec        
        bool m_bEscaped; // 0x16ed        
        bool m_bTethered; // 0x16ee        
        [[maybe_unused]] std::uint8_t pad_0x16ef[0x1]; // 0x16ef
        client::ParticleIndex_t m_nFXIndex; // 0x16f0        
        client::ParticleIndex_t m_nFXIndexA; // 0x16f4        
        client::ParticleIndex_t m_nFXIndexB; // 0x16f8        
        bool m_bStartedLeashSound; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x16fd[0x3]; // 0x16fd
        float m_fLeashDistance; // 0x1700        
        entity2::GameTime_t m_fOriginalStartTime; // 0x1704        
        client::ParticleIndex_t m_nOverheadFXIndex; // 0x1708        
        int32_t chain_latch_radius; // 0x170c        
        int32_t chain_break_distance; // 0x1710        
        float leash_limit_multiplier; // 0x1714        
        float chain_duration; // 0x1718        
        float creep_duration_pct; // 0x171c        
        int32_t bonus_reflected_spell_damage; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_SoulChain because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Grimstroke_SoulChain) == 0x1728);
};
