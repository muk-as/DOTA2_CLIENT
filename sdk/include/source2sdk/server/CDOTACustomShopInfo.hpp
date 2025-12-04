#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTACustomShopItemInfo.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "char m_CustomShopName"
        // static metadata: MNetworkVarNames "CDOTACustomShopItemInfo m_CustomShopItems"
        #pragma pack(push, 1)
        class CDOTACustomShopInfo
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            char m_CustomShopName[256]; // 0x_            
            // metadata: MNetworkEnable
            // m_CustomShopItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTACustomShopItemInfo> m_CustomShopItems;
            char m_CustomShopItems[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTACustomShopInfo, m_CustomShopName) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACustomShopInfo, m_CustomShopItems) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTACustomShopInfo) == 0x_);
    };
};
