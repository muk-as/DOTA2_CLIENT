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
    // Size: 0x5c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Jakiro_DualBreath : public server::CDOTABaseAbility
    {
    public:
        // m_hHitHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitHeroes;
        char m_hHitHeroes[0x18]; // 0x5a0        
        bool m_bGrantedGem; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5b9[0xf];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Jakiro_DualBreath because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Jakiro_DualBreath) == 0x5c8);
};
