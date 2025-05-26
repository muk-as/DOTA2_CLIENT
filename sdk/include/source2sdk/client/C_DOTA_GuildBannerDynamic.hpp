#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"
#include "source2sdk/client/GuildID_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xcc8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_DOTA_GuildBannerDynamic : public source2sdk::client::C_DynamicProp
        {
        public:
            // metadata: MNetworkEnable
            bool m_bRespawnClientEntity; // 0xc70            
            // metadata: MNetworkEnable
            bool m_bPlaySpawnAnimation; // 0xc71            
            // metadata: MNetworkEnable
            std::uint8_t m_unGuildTier; // 0xc72            
            // metadata: MNetworkEnable
            std::uint8_t m_unPrimaryColor; // 0xc73            
            // metadata: MNetworkEnable
            std::uint8_t m_unSecondaryColor; // 0xc74            
            // metadata: MNetworkEnable
            std::uint8_t m_unPattern; // 0xc75            
            uint8_t _pad0c76[0x2]; // 0xc76
            // metadata: MNetworkEnable
            std::uint64_t m_unLogo; // 0xc78            
            // metadata: MNetworkEnable
            source2sdk::client::GuildID_t m_unGuildID; // 0xc80            
            // metadata: MNetworkEnable
            std::uint32_t m_unGuildFlags; // 0xc84            
            // metadata: MNetworkEnable
            bool m_bUsePanelCache; // 0xc88            
            uint8_t _pad0c89[0x3]; // 0xc89
            // m_hClientEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hClientEntity;
            char m_hClientEntity[0x4]; // 0xc8c            
            uint8_t _pad0c90[0x38];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_GuildBannerDynamic because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_GuildBannerDynamic) == 0xcc8);
    };
};
