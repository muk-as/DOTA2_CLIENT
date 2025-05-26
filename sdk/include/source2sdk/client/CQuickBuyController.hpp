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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x148
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
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerIDUpdated"
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnQuickBuyItemsChanged"
            source2sdk::client::InventoryQuickBuyState_t m_quickBuyState; // 0x10            
            // metadata: MNetworkEnable
            bool m_bBuybackProtectionEnabled; // 0xe8            
            // metadata: MNetworkEnable
            bool m_bAutoMarkForBuy; // 0xe9            
            uint8_t _pad00ea[0x6]; // 0xea
            // metadata: MNetworkEnable
            // m_vecControlledUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_vecControlledUnits;
            char m_vecControlledUnits[0x18]; // 0xf0            
            uint8_t _pad0108[0x18]; // 0x108
            bool m_bQuickBuyIgnoredStateDirty; // 0x120            
            uint8_t _pad0121[0x3]; // 0x121
            std::int32_t m_nSuggestItemIdx; // 0x124            
            uint8_t _pad0128[0x18]; // 0x128
            bool m_bIsLocalPlayer; // 0x140            
            uint8_t _pad0141[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CQuickBuyController, m_nPlayerID) == 0x8);
        static_assert(offsetof(source2sdk::client::CQuickBuyController, m_quickBuyState) == 0x10);
        static_assert(offsetof(source2sdk::client::CQuickBuyController, m_bBuybackProtectionEnabled) == 0xe8);
        static_assert(offsetof(source2sdk::client::CQuickBuyController, m_bAutoMarkForBuy) == 0xe9);
        static_assert(offsetof(source2sdk::client::CQuickBuyController, m_vecControlledUnits) == 0xf0);
        static_assert(offsetof(source2sdk::client::CQuickBuyController, m_bQuickBuyIgnoredStateDirty) == 0x120);
        static_assert(offsetof(source2sdk::client::CQuickBuyController, m_nSuggestItemIdx) == 0x124);
        static_assert(offsetof(source2sdk::client::CQuickBuyController, m_bIsLocalPlayer) == 0x140);
        
        static_assert(sizeof(source2sdk::client::CQuickBuyController) == 0x148);
    };
};
