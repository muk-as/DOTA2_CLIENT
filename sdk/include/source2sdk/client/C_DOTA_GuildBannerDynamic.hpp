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
    // Size: 0xb50
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_DOTA_GuildBannerDynamic : public client::C_DynamicProp
    {
    public:
        // metadata: MNetworkEnable
        bool m_bRespawnClientEntity; // 0xaf8        
        // metadata: MNetworkEnable
        bool m_bPlaySpawnAnimation; // 0xaf9        
        // metadata: MNetworkEnable
        uint8_t m_unGuildTier; // 0xafa        
        // metadata: MNetworkEnable
        uint8_t m_unPrimaryColor; // 0xafb        
        // metadata: MNetworkEnable
        uint8_t m_unSecondaryColor; // 0xafc        
        // metadata: MNetworkEnable
        uint8_t m_unPattern; // 0xafd        
        [[maybe_unused]] std::uint8_t pad_0xafe[0x2]; // 0xafe
        // metadata: MNetworkEnable
        uint64_t m_unLogo; // 0xb00        
        // metadata: MNetworkEnable
        client::GuildID_t m_unGuildID; // 0xb08        
        // metadata: MNetworkEnable
        uint32_t m_unGuildFlags; // 0xb0c        
        // metadata: MNetworkEnable
        bool m_bUsePanelCache; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb11[0x3]; // 0xb11
        // m_hClientEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hClientEntity;
        char m_hClientEntity[0x4]; // 0xb14        
        [[maybe_unused]] std::uint8_t pad_0xb18[0x38];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_GuildBannerDynamic because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_GuildBannerDynamic) == 0xb50);
};
