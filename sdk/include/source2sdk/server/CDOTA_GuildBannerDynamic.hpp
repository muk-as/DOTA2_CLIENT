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
    // Size: 0xa78
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class CDOTA_GuildBannerDynamic : public server::CDynamicProp
    {
    public:
        // metadata: MNetworkEnable
        bool m_bRespawnClientEntity; // 0xa58        
        // metadata: MNetworkEnable
        bool m_bPlaySpawnAnimation; // 0xa59        
        // metadata: MNetworkEnable
        uint8_t m_unGuildTier; // 0xa5a        
        // metadata: MNetworkEnable
        uint8_t m_unPrimaryColor; // 0xa5b        
        // metadata: MNetworkEnable
        uint8_t m_unSecondaryColor; // 0xa5c        
        // metadata: MNetworkEnable
        uint8_t m_unPattern; // 0xa5d        
        [[maybe_unused]] std::uint8_t pad_0xa5e[0x2]; // 0xa5e
        // metadata: MNetworkEnable
        uint64_t m_unLogo; // 0xa60        
        // metadata: MNetworkEnable
        client::GuildID_t m_unGuildID; // 0xa68        
        // metadata: MNetworkEnable
        uint32_t m_unGuildFlags; // 0xa6c        
        // metadata: MNetworkEnable
        bool m_bUsePanelCache; // 0xa70        
        [[maybe_unused]] std::uint8_t pad_0xa71[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_GuildBannerDynamic because it is not a standard-layout class
    static_assert(sizeof(CDOTA_GuildBannerDynamic) == 0xa78);
};
