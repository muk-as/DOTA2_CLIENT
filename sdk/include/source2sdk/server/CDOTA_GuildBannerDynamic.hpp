#pragma once
#include "source2sdk/client/GuildID_t.hpp"
#include "source2sdk/server/CDynamicProp.hpp"
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
    // Size: 0xaa0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class CDOTA_GuildBannerDynamic : public server::CDynamicProp
    {
    public:
        // metadata: MNetworkEnable
        bool m_bRespawnClientEntity; // 0xa80        
        // metadata: MNetworkEnable
        bool m_bPlaySpawnAnimation; // 0xa81        
        // metadata: MNetworkEnable
        uint8_t m_unGuildTier; // 0xa82        
        // metadata: MNetworkEnable
        uint8_t m_unPrimaryColor; // 0xa83        
        // metadata: MNetworkEnable
        uint8_t m_unSecondaryColor; // 0xa84        
        // metadata: MNetworkEnable
        uint8_t m_unPattern; // 0xa85        
        [[maybe_unused]] std::uint8_t pad_0xa86[0x2]; // 0xa86
        // metadata: MNetworkEnable
        uint64_t m_unLogo; // 0xa88        
        // metadata: MNetworkEnable
        client::GuildID_t m_unGuildID; // 0xa90        
        // metadata: MNetworkEnable
        uint32_t m_unGuildFlags; // 0xa94        
        // metadata: MNetworkEnable
        bool m_bUsePanelCache; // 0xa98        
        [[maybe_unused]] std::uint8_t pad_0xa99[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_GuildBannerDynamic because it is not a standard-layout class
    static_assert(sizeof(CDOTA_GuildBannerDynamic) == 0xaa0);
};
