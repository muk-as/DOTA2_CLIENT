#pragma once
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
    // Size: 0x5d0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Dazzle_ShadowWave : public server::CDOTABaseAbility
    {
    public:
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x5a0        
        int32_t bounce_radius; // 0x5b8        
        int32_t damage_radius; // 0x5bc        
        int32_t damage; // 0x5c0        
        int32_t max_targets; // 0x5c4        
        float scepter_heal_pct; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5cc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Dazzle_ShadowWave because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Dazzle_ShadowWave) == 0x5d0);
};
