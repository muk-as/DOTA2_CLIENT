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
    class CDOTA_Ability_Plus_GuildBanner : public server::CDOTABaseAbility
    {
    public:
        // m_vecBanners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<CHandle<server::CBaseEntity>,10> m_vecBanners;
        char m_vecBanners[0x40]; // 0x5a0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Plus_GuildBanner because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Plus_GuildBanner) == 0x5e0);
};
