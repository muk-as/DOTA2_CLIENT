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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xaf0
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
            bool m_bRespawnClientEntity; // 0xad0            
            // metadata: MNetworkEnable
            bool m_bPlaySpawnAnimation; // 0xad1            
            // metadata: MNetworkEnable
            std::uint8_t m_unGuildTier; // 0xad2            
            // metadata: MNetworkEnable
            std::uint8_t m_unPrimaryColor; // 0xad3            
            // metadata: MNetworkEnable
            std::uint8_t m_unSecondaryColor; // 0xad4            
            // metadata: MNetworkEnable
            std::uint8_t m_unPattern; // 0xad5            
            uint8_t _pad0ad6[0x2]; // 0xad6
            // metadata: MNetworkEnable
            std::uint64_t m_unLogo; // 0xad8            
            // metadata: MNetworkEnable
            source2sdk::client::GuildID_t m_unGuildID; // 0xae0            
            // metadata: MNetworkEnable
            std::uint32_t m_unGuildFlags; // 0xae4            
            // metadata: MNetworkEnable
            bool m_bUsePanelCache; // 0xae8            
            uint8_t _pad0ae9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_GuildBannerDynamic because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_GuildBannerDynamic) == 0xaf0);
    };
};
