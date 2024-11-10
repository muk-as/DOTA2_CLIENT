#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_SkeletonKing_BoneGuard_Summon : public client::CDOTA_Buff
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1708        
        int32_t talent_skeleton_damage; // 0x170c        
        bool m_bRespawnReady; // 0x1710        
        bool m_bRespawnConsumed; // 0x1711        
        bool m_bKillParentOnDestroy; // 0x1712        
        [[maybe_unused]] std::uint8_t pad_0x1713[0x1]; // 0x1713
        entity2::GameTime_t m_flRespawnTime; // 0x1714        
        int32_t vampiric_aura; // 0x1718        
        int32_t gold_bounty; // 0x171c        
        int32_t xp_bounty; // 0x1720        
        int32_t skeleton_building_damage_reduction; // 0x1724        
        int32_t skeleton_bonus_hero_damage; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_SkeletonKing_BoneGuard_Summon because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_SkeletonKing_BoneGuard_Summon) == 0x1730);
};
