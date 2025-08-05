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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xcf0
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
            bool m_bRespawnClientEntity; // 0xc90            
            // metadata: MNetworkEnable
            bool m_bPlaySpawnAnimation; // 0xc91            
            // metadata: MNetworkEnable
            std::uint8_t m_unGuildTier; // 0xc92            
            // metadata: MNetworkEnable
            std::uint8_t m_unPrimaryColor; // 0xc93            
            // metadata: MNetworkEnable
            std::uint8_t m_unSecondaryColor; // 0xc94            
            // metadata: MNetworkEnable
            std::uint8_t m_unPattern; // 0xc95            
            uint8_t _pad0c96[0x2]; // 0xc96
            // metadata: MNetworkEnable
            std::uint64_t m_unLogo; // 0xc98            
            // metadata: MNetworkEnable
            source2sdk::client::GuildID_t m_unGuildID; // 0xca0            
            // metadata: MNetworkEnable
            std::uint32_t m_unGuildFlags; // 0xca4            
            // metadata: MNetworkEnable
            bool m_bUsePanelCache; // 0xca8            
            uint8_t _pad0ca9[0x3]; // 0xca9
            // m_hClientEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hClientEntity;
            char m_hClientEntity[0x4]; // 0xcac            
            uint8_t _pad0cb0[0x40];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_GuildBannerDynamic because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_GuildBannerDynamic) == 0xcf0);
    };
};
