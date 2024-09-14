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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_SkeletonKing_BoneGuard_Summon : public client::CDOTA_Buff
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x16e8        
        int32_t talent_skeleton_damage; // 0x16ec        
        bool m_bRespawnReady; // 0x16f0        
        bool m_bRespawnConsumed; // 0x16f1        
        bool m_bKillParentOnDestroy; // 0x16f2        
        [[maybe_unused]] std::uint8_t pad_0x16f3[0x1]; // 0x16f3
        entity2::GameTime_t m_flRespawnTime; // 0x16f4        
        int32_t vampiric_aura; // 0x16f8        
        int32_t gold_bounty; // 0x16fc        
        int32_t xp_bounty; // 0x1700        
        int32_t skeleton_building_damage_reduction; // 0x1704        
        int32_t skeleton_bonus_hero_damage; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_SkeletonKing_BoneGuard_Summon because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_SkeletonKing_BoneGuard_Summon) == 0x1710);
};
