#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/GuildID_t.hpp"
#include "source2sdk/server/CDynamicProp.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa90
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CDOTA_GuildBannerDynamic : public source2sdk::server::CDynamicProp
        {
        public:
            // metadata: MNetworkEnable
            bool m_bRespawnClientEntity; // 0xa70            
            // metadata: MNetworkEnable
            bool m_bPlaySpawnAnimation; // 0xa71            
            // metadata: MNetworkEnable
            std::uint8_t m_unGuildTier; // 0xa72            
            // metadata: MNetworkEnable
            std::uint8_t m_unPrimaryColor; // 0xa73            
            // metadata: MNetworkEnable
            std::uint8_t m_unSecondaryColor; // 0xa74            
            // metadata: MNetworkEnable
            std::uint8_t m_unPattern; // 0xa75            
            uint8_t _pad0a76[0x2]; // 0xa76
            // metadata: MNetworkEnable
            std::uint64_t m_unLogo; // 0xa78            
            // metadata: MNetworkEnable
            source2sdk::client::GuildID_t m_unGuildID; // 0xa80            
            // metadata: MNetworkEnable
            std::uint32_t m_unGuildFlags; // 0xa84            
            // metadata: MNetworkEnable
            bool m_bUsePanelCache; // 0xa88            
            uint8_t _pad0a89[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_GuildBannerDynamic because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_GuildBannerDynamic) == 0xa90);
    };
};
