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
    // Size: 0x600
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Centaur_Stampede : public server::CDOTABaseAbility
    {
    public:
        float duration; // 0x5c8        
        int32_t base_damage; // 0x5cc        
        float strength_damage; // 0x5d0        
        float slow_duration; // 0x5d4        
        float scepter_bonus_duration; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0x4]; // 0x5dc
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x5e0        
        int32_t m_nHeroesHit; // 0x5f8        
        bool m_bHitInvisibleHero; // 0x5fc        
        [[maybe_unused]] std::uint8_t pad_0x5fd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Centaur_Stampede because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Centaur_Stampede) == 0x600);
};
