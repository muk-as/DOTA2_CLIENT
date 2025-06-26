#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DOTA_SHOP_TYPE.hpp"
#include "source2sdk/client/DebugOverlayBits_t.hpp"
#include "source2sdk/client/ECourierState.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_Unit_Courier;
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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xc0
        // Has VTable
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "bool m_bAutoCourierAutoBurst"
        // static metadata: MNetworkVarNames "bool m_bAutoCourierAutoDeliver"
        // static metadata: MNetworkVarNames "bool m_bDeliverWhileVisibleOnly"
        // static metadata: MNetworkVarNames "DOTACourierHandle_t m_hCourier"
        // static metadata: MNetworkVarNames "PlayerID_t m_nPlayerID"
        // static metadata: MNetworkVarNames "bool m_bUseNewLogic"
        // static metadata: MNetworkVarNames "DOTA_SHOP_TYPE m_eFSMShop"
        // static metadata: MNetworkVarNames "EHANDLE m_hFSMUnit"
        // static metadata: MNetworkVarNames "ECourierState m_eFSMState"
        // static metadata: MNetworkVarNames "bool m_bFSMStashAfter"
        // static metadata: MNetworkVarNames "bool m_bManualRequest"
        #pragma pack(push, 1)
        class CDOTACourierController
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            bool m_bAutoCourierAutoBurst; // 0x8            
            // metadata: MNetworkEnable
            bool m_bAutoCourierAutoDeliver; // 0x9            
            // metadata: MNetworkEnable
            bool m_bDeliverWhileVisibleOnly; // 0xa            
            uint8_t _pad000b[0x1]; // 0xb
            // metadata: MNetworkEnable
            // m_hCourier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_Unit_Courier> m_hCourier;
            char m_hCourier[0x4]; // 0xc            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x10            
            // metadata: MNetworkEnable
            bool m_bUseNewLogic; // 0x14            
            uint8_t _pad0015[0x3]; // 0x15
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_SHOP_TYPE m_eFSMShop; // 0x18            
            // metadata: MNetworkEnable
            // m_hFSMUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFSMUnit;
            char m_hFSMUnit[0x4]; // 0x1c            
            // metadata: MNetworkEnable
            source2sdk::client::ECourierState m_eFSMState; // 0x20            
            // metadata: MNetworkEnable
            bool m_bFSMStashAfter; // 0x24            
            // metadata: MNetworkEnable
            bool m_bManualRequest; // 0x25            
            bool m_bIgnoreNextPlayerInteraction; // 0x26            
            bool m_bWasAlive; // 0x27            
            bool m_bTargetWasAlive; // 0x28            
            uint8_t _pad0029[0x7]; // 0x29
            source2sdk::server::CountdownTimer m_TransitionTimer; // 0x30            
            source2sdk::server::CountdownTimer m_ManualTimer; // 0x48            
            float m_flCourier_wait_time_item_purchase; // 0x60            
            float m_flCourier_wait_time_item_mark; // 0x64            
            float m_flCourier_wait_time_manualorder; // 0x68            
            float m_flCourier_wait_time_manualorder_stop; // 0x6c            
            float m_flCourier_nondivert_range; // 0x70            
            float m_flCourier_min_dot_for_divert; // 0x74            
            float m_flCourier_max_divert_length; // 0x78            
            float m_flCourier_max_divert_mult; // 0x7c            
            float m_flCourier_divert_near_shop_dist; // 0x80            
            uint8_t _pad0084[0x4]; // 0x84
            // m_vecAutoState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<bool> m_vecAutoState;
            char m_vecAutoState[0x18]; // 0x88            
            std::int32_t m_nLastSecondCaptured; // 0xa0            
            std::int32_t m_nMoveCount; // 0xa4            
            Vector m_vLastPos; // 0xa8            
            bool m_bDebugging; // 0xb4            
            bool m_bTriggerDebug; // 0xb5            
            uint8_t _pad00b6[0x2]; // 0xb6
            source2sdk::client::DebugOverlayBits_t m_eDebugBits; // 0xb8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bAutoCourierAutoBurst) == 0x8);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bAutoCourierAutoDeliver) == 0x9);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bDeliverWhileVisibleOnly) == 0xa);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_hCourier) == 0xc);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_nPlayerID) == 0x10);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bUseNewLogic) == 0x14);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_eFSMShop) == 0x18);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_hFSMUnit) == 0x1c);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_eFSMState) == 0x20);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bFSMStashAfter) == 0x24);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bManualRequest) == 0x25);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bIgnoreNextPlayerInteraction) == 0x26);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bWasAlive) == 0x27);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bTargetWasAlive) == 0x28);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_TransitionTimer) == 0x30);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_ManualTimer) == 0x48);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_wait_time_item_purchase) == 0x60);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_wait_time_item_mark) == 0x64);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_wait_time_manualorder) == 0x68);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_wait_time_manualorder_stop) == 0x6c);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_nondivert_range) == 0x70);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_min_dot_for_divert) == 0x74);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_max_divert_length) == 0x78);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_max_divert_mult) == 0x7c);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_divert_near_shop_dist) == 0x80);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_vecAutoState) == 0x88);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_nLastSecondCaptured) == 0xa0);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_nMoveCount) == 0xa4);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_vLastPos) == 0xa8);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bDebugging) == 0xb4);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bTriggerDebug) == 0xb5);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_eDebugBits) == 0xb8);
        
        static_assert(sizeof(source2sdk::server::CDOTACourierController) == 0xc0);
    };
};
