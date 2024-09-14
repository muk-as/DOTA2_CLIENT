#pragma once
#include "source2sdk/client/C_DOTA_GuildBannerDynamic.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb10
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nPlayerID"
    #pragma pack(push, 1)
    class CDOTAPropPlusPlayerGuildBanner : public client::C_DOTA_GuildBannerDynamic
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nPlayerID; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb0c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTAPropPlusPlayerGuildBanner because it is not a standard-layout class
    static_assert(sizeof(CDOTAPropPlusPlayerGuildBanner) == 0xb10);
};
