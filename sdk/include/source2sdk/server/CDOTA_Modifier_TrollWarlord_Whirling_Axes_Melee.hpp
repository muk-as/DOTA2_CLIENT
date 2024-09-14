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
    // Size: 0x1758
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee : public client::CDOTA_Buff
    {
    public:
        int32_t damage; // 0x16e8        
        int32_t hit_radius; // 0x16ec        
        int32_t axe_movement_speed; // 0x16f0        
        float whirl_duration; // 0x16f4        
        float max_range; // 0x16f8        
        float blind_duration; // 0x16fc        
        float m_flRotation; // 0x1700        
        float m_flAxeRadius; // 0x1704        
        entity2::GameTime_t m_flWhirlDieTime; // 0x1708        
        float m_bPiercesMagicImmunity; // 0x170c        
        int32_t m_nSwapIndex; // 0x1710        
        bool m_bReturning; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3]; // 0x1715
        client::ParticleIndex_t m_nAxeFXIndex[2]; // 0x1718        
        int32_t m_nHeroesHitForRelic; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4]; // 0x1724
        // hitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hitEntities;
        char hitEntities[0x18]; // 0x1728        
        // m_hAxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hAxes;
        char m_hAxes[0x18]; // 0x1740        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee) == 0x1758);
};
