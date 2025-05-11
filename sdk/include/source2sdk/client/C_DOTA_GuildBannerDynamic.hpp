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
        // Size: 0xb00
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
            bool m_bRespawnClientEntity; // 0xaa8            
            // metadata: MNetworkEnable
            bool m_bPlaySpawnAnimation; // 0xaa9            
            // metadata: MNetworkEnable
            std::uint8_t m_unGuildTier; // 0xaaa            
            // metadata: MNetworkEnable
            std::uint8_t m_unPrimaryColor; // 0xaab            
            // metadata: MNetworkEnable
            std::uint8_t m_unSecondaryColor; // 0xaac            
            // metadata: MNetworkEnable
            std::uint8_t m_unPattern; // 0xaad            
            uint8_t _pad0aae[0x2]; // 0xaae
            // metadata: MNetworkEnable
            std::uint64_t m_unLogo; // 0xab0            
            // metadata: MNetworkEnable
            source2sdk::client::GuildID_t m_unGuildID; // 0xab8            
            // metadata: MNetworkEnable
            std::uint32_t m_unGuildFlags; // 0xabc            
            // metadata: MNetworkEnable
            bool m_bUsePanelCache; // 0xac0            
            uint8_t _pad0ac1[0x3]; // 0xac1
            // m_hClientEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hClientEntity;
            char m_hClientEntity[0x4]; // 0xac4            
            uint8_t _pad0ac8[0x38];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_GuildBannerDynamic because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_GuildBannerDynamic) == 0xb00);
    };
};
