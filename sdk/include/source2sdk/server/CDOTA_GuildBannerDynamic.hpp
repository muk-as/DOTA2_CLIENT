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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            bool m_bRespawnClientEntity; // 0x_            
            // metadata: MNetworkEnable
            bool m_bPlaySpawnAnimation; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_unGuildTier; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_unPrimaryColor; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_unSecondaryColor; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_unPattern; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint64_t m_unLogo; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::GuildID_t m_unGuildID; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_unGuildFlags; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUsePanelCache; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_GuildBannerDynamic because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_GuildBannerDynamic) == 0x_);
    };
};
