#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Magnataur_Skewer : public server::CDOTABaseAbility
    {
    public:
        int32_t skewer_radius; // 0x5a0        
        int32_t skewer_speed; // 0x5a4        
        int32_t tree_radius; // 0x5a8        
        int32_t tree_hit_damage; // 0x5ac        
        int32_t cliff_hit_damage; // 0x5b0        
        int32_t terrain_hit_increase_pct; // 0x5b4        
        float terrain_hit_cooldown; // 0x5b8        
        int32_t m_nProjectileID; // 0x5bc        
        int32_t m_nVisibleTargetCount; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c4[0x4]; // 0x5c4
        // m_hEnemiesSkewered has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hEnemiesSkewered;
        char m_hEnemiesSkewered[0x18]; // 0x5c8        
        entity2::GameTime_t m_flLastTerrainObstructionHitTime; // 0x5e0        
        int32_t m_nTargetsHit; // 0x5e4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Magnataur_Skewer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Magnataur_Skewer) == 0x5e8);
};
