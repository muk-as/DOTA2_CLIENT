#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Magnataur_Skewer : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float skewer_radius; // 0x_            
            float skewer_speed; // 0x_            
            float tree_radius; // 0x_            
            float tree_hit_damage; // 0x_            
            float cliff_hit_damage; // 0x_            
            std::int32_t terrain_hit_increase_pct; // 0x_            
            float terrain_hit_cooldown; // 0x_            
            std::int32_t m_nProjectileID; // 0x_            
            std::int32_t m_nVisibleTargetCount; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hEnemiesSkewered has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hEnemiesSkewered;
            char m_hEnemiesSkewered[0x_]; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastTerrainObstructionHitTime; // 0x_            
            std::int32_t m_nTargetsHit; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Magnataur_Skewer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Magnataur_Skewer) == 0x_);
    };
};
