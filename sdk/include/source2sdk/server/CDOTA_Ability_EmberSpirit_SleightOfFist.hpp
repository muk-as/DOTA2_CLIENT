#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        class CDOTA_Ability_EmberSpirit_SleightOfFist : public source2sdk::server::CDOTABaseAbility
        {
        public:
            Vector m_vCastLoc; // 0x_            
            std::int32_t m_nHeroesKilled; // 0x_            
            // m_hAttackEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAttackEntities;
            char m_hAttackEntities[0x_]; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXMarkerIndex; // 0x_            
            // m_hDoubleHitEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hDoubleHitEntity;
            char m_hDoubleHitEntity[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_EmberSpirit_SleightOfFist because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_EmberSpirit_SleightOfFist) == 0x_);
    };
};
