#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x630
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Dazzle_ShadowWave : public client::C_DOTABaseAbility
    {
    public:
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x600        
        int32_t bounce_radius; // 0x618        
        int32_t damage_radius; // 0x61c        
        int32_t damage; // 0x620        
        int32_t max_targets; // 0x624        
        float scepter_heal_pct; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x62c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Dazzle_ShadowWave because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Dazzle_ShadowWave) == 0x630);
};
