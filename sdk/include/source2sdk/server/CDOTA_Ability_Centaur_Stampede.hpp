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
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Centaur_Stampede : public server::CDOTABaseAbility
    {
    public:
        float duration; // 0x5a0        
        int32_t base_damage; // 0x5a4        
        float strength_damage; // 0x5a8        
        float slow_duration; // 0x5ac        
        float scepter_bonus_duration; // 0x5b0        
        [[maybe_unused]] std::uint8_t pad_0x5b4[0x4]; // 0x5b4
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x5b8        
        int32_t m_nHeroesHit; // 0x5d0        
        bool m_bHitInvisibleHero; // 0x5d4        
        [[maybe_unused]] std::uint8_t pad_0x5d5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Centaur_Stampede because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Centaur_Stampede) == 0x5d8);
};
