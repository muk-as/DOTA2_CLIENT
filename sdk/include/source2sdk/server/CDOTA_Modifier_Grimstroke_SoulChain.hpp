#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Grimstroke_SoulChain : public client::CDOTA_Buff
    {
    public:
        // m_hPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPartner;
        char m_hPartner[0x4]; // 0x1708        
        bool m_bIsPrimary; // 0x170c        
        bool m_bEscaped; // 0x170d        
        bool m_bTethered; // 0x170e        
        [[maybe_unused]] std::uint8_t pad_0x170f[0x1]; // 0x170f
        client::ParticleIndex_t m_nFXIndex; // 0x1710        
        client::ParticleIndex_t m_nFXIndexA; // 0x1714        
        client::ParticleIndex_t m_nFXIndexB; // 0x1718        
        bool m_bStartedLeashSound; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3]; // 0x171d
        float m_fLeashDistance; // 0x1720        
        entity2::GameTime_t m_fOriginalStartTime; // 0x1724        
        client::ParticleIndex_t m_nOverheadFXIndex; // 0x1728        
        int32_t chain_latch_radius; // 0x172c        
        int32_t chain_break_distance; // 0x1730        
        float leash_limit_multiplier; // 0x1734        
        float chain_duration; // 0x1738        
        float creep_duration_pct; // 0x173c        
        int32_t bonus_reflected_spell_damage; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_SoulChain because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Grimstroke_SoulChain) == 0x1750);
};
