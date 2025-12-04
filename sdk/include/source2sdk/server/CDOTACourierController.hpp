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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            bool m_bAutoCourierAutoBurst; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAutoCourierAutoDeliver; // 0x_            
            // metadata: MNetworkEnable
            bool m_bDeliverWhileVisibleOnly; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_hCourier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_Unit_Courier> m_hCourier;
            char m_hCourier[0x_]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUseNewLogic; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_SHOP_TYPE m_eFSMShop; // 0x_            
            // metadata: MNetworkEnable
            // m_hFSMUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFSMUnit;
            char m_hFSMUnit[0x_]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::ECourierState m_eFSMState; // 0x_            
            // metadata: MNetworkEnable
            bool m_bFSMStashAfter; // 0x_            
            // metadata: MNetworkEnable
            bool m_bManualRequest; // 0x_            
            bool m_bIgnoreNextPlayerInteraction; // 0x_            
            bool m_bWasAlive; // 0x_            
            bool m_bTargetWasAlive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_TransitionTimer; // 0x_            
            source2sdk::server::CountdownTimer m_ManualTimer; // 0x_            
            float m_flCourier_wait_time_item_purchase; // 0x_            
            float m_flCourier_wait_time_item_mark; // 0x_            
            float m_flCourier_wait_time_manualorder; // 0x_            
            float m_flCourier_wait_time_manualorder_stop; // 0x_            
            float m_flCourier_nondivert_range; // 0x_            
            float m_flCourier_min_dot_for_divert; // 0x_            
            float m_flCourier_max_divert_length; // 0x_            
            float m_flCourier_max_divert_mult; // 0x_            
            float m_flCourier_divert_near_shop_dist; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecAutoState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<bool> m_vecAutoState;
            char m_vecAutoState[0x_]; // 0x_            
            std::int32_t m_nLastSecondCaptured; // 0x_            
            std::int32_t m_nMoveCount; // 0x_            
            Vector m_vLastPos; // 0x_            
            bool m_bDebugging; // 0x_            
            bool m_bTriggerDebug; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::DebugOverlayBits_t m_eDebugBits; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bAutoCourierAutoBurst) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bAutoCourierAutoDeliver) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bDeliverWhileVisibleOnly) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_hCourier) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_nPlayerID) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bUseNewLogic) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_eFSMShop) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_hFSMUnit) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_eFSMState) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bFSMStashAfter) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bManualRequest) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bIgnoreNextPlayerInteraction) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bWasAlive) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bTargetWasAlive) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_TransitionTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_ManualTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_wait_time_item_purchase) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_wait_time_item_mark) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_wait_time_manualorder) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_wait_time_manualorder_stop) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_nondivert_range) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_min_dot_for_divert) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_max_divert_length) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_max_divert_mult) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_flCourier_divert_near_shop_dist) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_vecAutoState) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_nLastSecondCaptured) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_nMoveCount) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_vLastPos) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bDebugging) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_bTriggerDebug) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTACourierController, m_eDebugBits) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTACourierController) == 0x_);
    };
};
