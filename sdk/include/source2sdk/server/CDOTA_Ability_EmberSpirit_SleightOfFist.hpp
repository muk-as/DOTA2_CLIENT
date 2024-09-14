#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CDOTA_Ability_EmberSpirit_SleightOfFist : public server::CDOTABaseAbility
    {
    public:
        Vector m_vCastLoc; // 0x5a0        
        int32_t m_nHeroesKilled; // 0x5ac        
        // m_hAttackEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hAttackEntities;
        char m_hAttackEntities[0x18]; // 0x5b0        
        client::ParticleIndex_t m_nFXMarkerIndex; // 0x5c8        
        // m_hDoubleHitEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hDoubleHitEntity;
        char m_hDoubleHitEntity[0x4]; // 0x5cc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_EmberSpirit_SleightOfFist because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_EmberSpirit_SleightOfFist) == 0x5d0);
};
