#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"

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
        // static metadata: MNetworkVarNames "AbilityID_t m_nAbilityID"
        // static metadata: MNetworkVarNames "int m_nStockCount"
        // static metadata: MNetworkVarNames "char m_Category"
        #pragma pack(push, 1)
        class CDOTACustomShopItemInfo
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::AbilityID_t m_nAbilityID; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nStockCount; // 0x_            
            // metadata: MNetworkEnable
            char m_Category[256]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTACustomShopItemInfo, m_nAbilityID) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACustomShopItemInfo, m_nStockCount) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACustomShopItemInfo, m_Category) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTACustomShopItemInfo) == 0x_);
    };
};
