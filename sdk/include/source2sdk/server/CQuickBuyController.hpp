#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/server/InventoryQuickBuyState_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
            source2sdk::server::InventoryQuickBuyState_t m_quickBuyState; // 0x_            
            // metadata: MNetworkEnable
            bool m_bBuybackProtectionEnabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAutoMarkForBuy; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_vecControlledUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecControlledUnits;
            char m_vecControlledUnits[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nNextOrder; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bQuickBuyIgnoredStateDirty; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nSuggestItemIdx; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CQuickBuyController, m_nPlayerID) == 0x_);
        static_assert(offsetof(source2sdk::server::CQuickBuyController, m_quickBuyState) == 0x_);
        static_assert(offsetof(source2sdk::server::CQuickBuyController, m_bBuybackProtectionEnabled) == 0x_);
        static_assert(offsetof(source2sdk::server::CQuickBuyController, m_bAutoMarkForBuy) == 0x_);
        static_assert(offsetof(source2sdk::server::CQuickBuyController, m_vecControlledUnits) == 0x_);
        static_assert(offsetof(source2sdk::server::CQuickBuyController, m_nNextOrder) == 0x_);
        static_assert(offsetof(source2sdk::server::CQuickBuyController, m_bQuickBuyIgnoredStateDirty) == 0x_);
        static_assert(offsetof(source2sdk::server::CQuickBuyController, m_nSuggestItemIdx) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CQuickBuyController) == 0x_);
    };
};
