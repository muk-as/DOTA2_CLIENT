#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/InventoryQuickBuyState_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "PlayerID_t m_nPlayerID"
        // static metadata: MNetworkVarNames "InventoryQuickBuyState_t m_quickBuyState"
        // static metadata: MNetworkVarNames "bool m_bBuybackProtectionEnabled"
        // static metadata: MNetworkVarNames "bool m_bAutoMarkForBuy"
        // static metadata: MNetworkVarNames "EHANDLE m_vecControlledUnits"
        #pragma pack(push, 1)
        class CQuickBuyController
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerIDUpdated"
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnQuickBuyItemsChanged"
            source2sdk::client::InventoryQuickBuyState_t m_quickBuyState; // 0x_            
            // metadata: MNetworkEnable
            bool m_bBuybackProtectionEnabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAutoMarkForBuy; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_vecControlledUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_vecControlledUnits;
            char m_vecControlledUnits[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bQuickBuyIgnoredStateDirty; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nSuggestItemIdx; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bIsLocalPlayer; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CQuickBuyController, m_nPlayerID) == 0x_);
        static_assert(offsetof(source2sdk::client::CQuickBuyController, m_quickBuyState) == 0x_);
        static_assert(offsetof(source2sdk::client::CQuickBuyController, m_bBuybackProtectionEnabled) == 0x_);
        static_assert(offsetof(source2sdk::client::CQuickBuyController, m_bAutoMarkForBuy) == 0x_);
        static_assert(offsetof(source2sdk::client::CQuickBuyController, m_vecControlledUnits) == 0x_);
        static_assert(offsetof(source2sdk::client::CQuickBuyController, m_bQuickBuyIgnoredStateDirty) == 0x_);
        static_assert(offsetof(source2sdk::client::CQuickBuyController, m_nSuggestItemIdx) == 0x_);
        static_assert(offsetof(source2sdk::client::CQuickBuyController, m_bIsLocalPlayer) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CQuickBuyController) == 0x_);
    };
};
