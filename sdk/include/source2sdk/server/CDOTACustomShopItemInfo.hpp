#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x138
    // Has VTable
    // MNetworkNoBase
    // 
    // static metadata: MNetworkVarNames "AbilityID_t m_nAbilityID"
    // static metadata: MNetworkVarNames "int m_nStockCount"
    // static metadata: MNetworkVarNames "char m_Category"
    #pragma pack(push, 1)
    class CDOTACustomShopItemInfo
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        client::AbilityID_t m_nAbilityID; // 0x30        
        // metadata: MNetworkEnable
        int32_t m_nStockCount; // 0x34        
        // metadata: MNetworkEnable
        char m_Category[256]; // 0x38        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTACustomShopItemInfo, m_nAbilityID) == 0x30);
    static_assert(offsetof(CDOTACustomShopItemInfo, m_nStockCount) == 0x34);
    static_assert(offsetof(CDOTACustomShopItemInfo, m_Category) == 0x38);
    
    static_assert(sizeof(CDOTACustomShopItemInfo) == 0x138);
};
