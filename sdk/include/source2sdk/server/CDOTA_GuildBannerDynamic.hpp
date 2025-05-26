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
        // Size: 0xad8
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
            bool m_bRespawnClientEntity; // 0xab8            
            // metadata: MNetworkEnable
            bool m_bPlaySpawnAnimation; // 0xab9            
            // metadata: MNetworkEnable
            std::uint8_t m_unGuildTier; // 0xaba            
            // metadata: MNetworkEnable
            std::uint8_t m_unPrimaryColor; // 0xabb            
            // metadata: MNetworkEnable
            std::uint8_t m_unSecondaryColor; // 0xabc            
            // metadata: MNetworkEnable
            std::uint8_t m_unPattern; // 0xabd            
            uint8_t _pad0abe[0x2]; // 0xabe
            // metadata: MNetworkEnable
            std::uint64_t m_unLogo; // 0xac0            
            // metadata: MNetworkEnable
            source2sdk::client::GuildID_t m_unGuildID; // 0xac8            
            // metadata: MNetworkEnable
            std::uint32_t m_unGuildFlags; // 0xacc            
            // metadata: MNetworkEnable
            bool m_bUsePanelCache; // 0xad0            
            uint8_t _pad0ad1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_GuildBannerDynamic because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_GuildBannerDynamic) == 0xad8);
    };
};
