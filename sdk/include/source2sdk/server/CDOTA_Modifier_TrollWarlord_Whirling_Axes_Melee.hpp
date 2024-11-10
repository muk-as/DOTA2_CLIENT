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
    // Size: 0x1778
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee : public client::CDOTA_Buff
    {
    public:
        int32_t damage; // 0x1708        
        int32_t hit_radius; // 0x170c        
        int32_t axe_movement_speed; // 0x1710        
        float whirl_duration; // 0x1714        
        float max_range; // 0x1718        
        float blind_duration; // 0x171c        
        float m_flRotation; // 0x1720        
        float m_flAxeRadius; // 0x1724        
        entity2::GameTime_t m_flWhirlDieTime; // 0x1728        
        float m_bPiercesMagicImmunity; // 0x172c        
        int32_t m_nSwapIndex; // 0x1730        
        bool m_bReturning; // 0x1734        
        [[maybe_unused]] std::uint8_t pad_0x1735[0x3]; // 0x1735
        client::ParticleIndex_t m_nAxeFXIndex[2]; // 0x1738        
        int32_t m_nHeroesHitForRelic; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x4]; // 0x1744
        // hitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hitEntities;
        char hitEntities[0x18]; // 0x1748        
        // m_hAxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hAxes;
        char m_hAxes[0x18]; // 0x1760        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee) == 0x1778);
};
