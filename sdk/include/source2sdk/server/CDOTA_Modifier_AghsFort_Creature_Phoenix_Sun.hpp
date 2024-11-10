#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_Creature_Phoenix_Sun : public client::CDOTA_Buff
    {
    public:
        float aura_radius; // 0x1708        
        float stun_duration; // 0x170c        
        int32_t max_hero_attacks; // 0x1710        
        int32_t max_hero_attacks_scepter; // 0x1714        
        int32_t max_hero_attacks_required; // 0x1718        
        float caster_life_pct; // 0x171c        
        // m_hSecondaryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSecondaryTarget;
        char m_hSecondaryTarget[0x4]; // 0x1720        
        int32_t m_iAttackCount; // 0x1724        
        int32_t creep_attacks_count; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Creature_Phoenix_Sun because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_Creature_Phoenix_Sun) == 0x1730);
};
