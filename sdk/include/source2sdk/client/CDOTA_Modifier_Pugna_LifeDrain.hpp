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
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Pugna_LifeDrain : public client::CDOTA_Buff
    {
    public:
        int32_t health_drain; // 0x1708        
        int32_t ally_healing; // 0x170c        
        float health_drain_death_boost; // 0x1710        
        float tick_rate; // 0x1714        
        bool m_bDoRangeCheck; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x3]; // 0x1719
        client::ParticleIndex_t m_nFXIndex; // 0x171c        
        entity2::GameTime_t m_flElapsedTime; // 0x1720        
        bool m_bPrimary; // 0x1724        
        bool m_bShard; // 0x1725        
        bool m_bFromWard; // 0x1726        
        [[maybe_unused]] std::uint8_t pad_0x1727[0x1]; // 0x1727
        // m_hWard has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hWard;
        char m_hWard[0x4]; // 0x1728        
        float spell_amp_drain_duration; // 0x172c        
        int32_t max_spell_amp_drain_pct; // 0x1730        
        int32_t spell_amp_drain_rate; // 0x1734        
        int32_t spell_amp_drain_rate_ward; // 0x1738        
        int32_t spell_amp_drain_max; // 0x173c        
        int32_t health_to_mana_rate; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Pugna_LifeDrain because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Pugna_LifeDrain) == 0x1748);
};
