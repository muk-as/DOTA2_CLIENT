#pragma once
#include "source2sdk/client/CDOTACustomShopItemInfo.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x180
    // Has VTable
    // MNetworkNoBase
    // 
    // static metadata: MNetworkVarNames "char m_CustomShopName"
    // static metadata: MNetworkVarNames "CDOTACustomShopItemInfo m_CustomShopItems"
    #pragma pack(push, 1)
    class CDOTACustomShopInfo
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        char m_CustomShopName[256]; // 0x30        
        // metadata: MNetworkEnable
        // m_CustomShopItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::CDOTACustomShopItemInfo> m_CustomShopItems;
        char m_CustomShopItems[0x50]; // 0x130        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTACustomShopInfo, m_CustomShopName) == 0x30);
    static_assert(offsetof(CDOTACustomShopInfo, m_CustomShopItems) == 0x130);
    
    static_assert(sizeof(CDOTACustomShopInfo) == 0x180);
};
