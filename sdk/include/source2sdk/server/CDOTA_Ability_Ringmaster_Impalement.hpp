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
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Ringmaster_Impalement : public server::CDOTABaseAbility
    {
    public:
        Vector m_vStartPos; // 0x5a0        
        int32_t dagger_width; // 0x5ac        
        // m_ImpactedProjectiles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_ImpactedProjectiles;
        char m_ImpactedProjectiles[0x18]; // 0x5b0        
        // m_vecBoxedUnitHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlPair<int32_t,CHandle<server::CBaseEntity>>> m_vecBoxedUnitHits;
        char m_vecBoxedUnitHits[0x18]; // 0x5c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Ringmaster_Impalement because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Ringmaster_Impalement) == 0x5e0);
};
