#pragma once
#include "source2sdk/client/C_DynamicProp.hpp"
#include "source2sdk/client/GuildID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb08
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_DOTA_GuildBannerDynamic : public client::C_DynamicProp
    {
    public:
        // metadata: MNetworkEnable
        bool m_bRespawnClientEntity; // 0xab0        
        // metadata: MNetworkEnable
        bool m_bPlaySpawnAnimation; // 0xab1        
        // metadata: MNetworkEnable
        uint8_t m_unGuildTier; // 0xab2        
        // metadata: MNetworkEnable
        uint8_t m_unPrimaryColor; // 0xab3        
        // metadata: MNetworkEnable
        uint8_t m_unSecondaryColor; // 0xab4        
        // metadata: MNetworkEnable
        uint8_t m_unPattern; // 0xab5        
        [[maybe_unused]] std::uint8_t pad_0xab6[0x2]; // 0xab6
        // metadata: MNetworkEnable
        uint64_t m_unLogo; // 0xab8        
        // metadata: MNetworkEnable
        client::GuildID_t m_unGuildID; // 0xac0        
        // metadata: MNetworkEnable
        uint32_t m_unGuildFlags; // 0xac4        
        // metadata: MNetworkEnable
        bool m_bUsePanelCache; // 0xac8        
        [[maybe_unused]] std::uint8_t pad_0xac9[0x3]; // 0xac9
        // m_hClientEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hClientEntity;
        char m_hClientEntity[0x4]; // 0xacc        
        [[maybe_unused]] std::uint8_t pad_0xad0[0x38];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_GuildBannerDynamic because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_GuildBannerDynamic) == 0xb08);
};
