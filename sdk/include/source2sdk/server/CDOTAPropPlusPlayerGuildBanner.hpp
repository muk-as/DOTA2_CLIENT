#pragma once
#include "source2sdk/server/CDOTA_GuildBannerDynamic.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa80
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nPlayerID"
    #pragma pack(push, 1)
    class CDOTAPropPlusPlayerGuildBanner : public server::CDOTA_GuildBannerDynamic
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nPlayerID; // 0xa78        
        [[maybe_unused]] std::uint8_t pad_0xa7c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTAPropPlusPlayerGuildBanner because it is not a standard-layout class
    static_assert(sizeof(CDOTAPropPlusPlayerGuildBanner) == 0xa80);
};
