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
    class CDOTABaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Mirana_Arrow : public server::CDOTABaseAbility
    {
    public:
        // m_hSourceAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTABaseAbility> m_hSourceAbility;
        char m_hSourceAbility[0x4]; // 0x5a0        
        int32_t scepter_radius; // 0x5a4        
        Vector m_vStartPos; // 0x5a8        
        client::ParticleIndex_t m_nFXIndex; // 0x5b4        
        // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hAlreadyHitList[2];
        char hAlreadyHitList[0x30]; // 0x5b8        
        // hStarfallList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hStarfallList[2];
        char hStarfallList[0x30]; // 0x5e8        
        int32_t m_nActiveArrow; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x61c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Mirana_Arrow because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Mirana_Arrow) == 0x620);
};
