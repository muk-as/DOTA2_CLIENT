#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Centaur_Stampede : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float duration; // 0x5b8            
            std::int32_t base_damage; // 0x5bc            
            float strength_damage; // 0x5c0            
            float slow_duration; // 0x5c4            
            float scepter_bonus_duration; // 0x5c8            
            uint8_t _pad05cc[0x4]; // 0x5cc
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x5d0            
            std::int32_t m_nHeroesHit; // 0x5e8            
            bool m_bHitInvisibleHero; // 0x5ec            
            uint8_t _pad05ed[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Centaur_Stampede because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Centaur_Stampede) == 0x5f0);
    };
};
