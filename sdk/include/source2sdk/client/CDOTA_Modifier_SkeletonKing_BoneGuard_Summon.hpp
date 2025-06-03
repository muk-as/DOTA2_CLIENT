#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_SkeletonKing_BoneGuard_Summon : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1878            
            std::int32_t talent_skeleton_damage; // 0x187c            
            bool m_bRespawnReady; // 0x1880            
            bool m_bRespawnConsumed; // 0x1881            
            bool m_bKillParentOnDestroy; // 0x1882            
            uint8_t _pad1883[0x1]; // 0x1883
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x1884            
            std::int32_t vampiric_aura; // 0x1888            
            std::int32_t gold_bounty; // 0x188c            
            std::int32_t xp_bounty; // 0x1890            
            std::int32_t skeleton_building_damage_reduction; // 0x1894            
            std::int32_t skeleton_bonus_hero_damage; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_SkeletonKing_BoneGuard_Summon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_SkeletonKing_BoneGuard_Summon) == 0x18a0);
    };
};
