#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DOTA_SHOP_TYPE.hpp"
#include "source2sdk/client/ECourierState.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_Unit_Courier;
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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x28
        // Has VTable
        // Has Trivial Destructor
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
        // static metadata: MNetworkVarNames "bool m_bFSMTransferAfter"
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
            // CHandle<source2sdk::client::C_DOTA_Unit_Courier> m_hCourier;
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
            // CHandle<source2sdk::client::C_BaseEntity> m_hFSMUnit;
            char m_hFSMUnit[0x4]; // 0x1c            
            // metadata: MNetworkEnable
            source2sdk::client::ECourierState m_eFSMState; // 0x20            
            // metadata: MNetworkEnable
            bool m_bFSMTransferAfter; // 0x24            
            // metadata: MNetworkEnable
            bool m_bFSMStashAfter; // 0x25            
            // metadata: MNetworkEnable
            bool m_bManualRequest; // 0x26            
            uint8_t _pad0027[0x1];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTACourierController, m_bAutoCourierAutoBurst) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTACourierController, m_bAutoCourierAutoDeliver) == 0x9);
        static_assert(offsetof(source2sdk::client::CDOTACourierController, m_bDeliverWhileVisibleOnly) == 0xa);
        static_assert(offsetof(source2sdk::client::CDOTACourierController, m_hCourier) == 0xc);
        static_assert(offsetof(source2sdk::client::CDOTACourierController, m_nPlayerID) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTACourierController, m_bUseNewLogic) == 0x14);
        static_assert(offsetof(source2sdk::client::CDOTACourierController, m_eFSMShop) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTACourierController, m_hFSMUnit) == 0x1c);
        static_assert(offsetof(source2sdk::client::CDOTACourierController, m_eFSMState) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTACourierController, m_bFSMTransferAfter) == 0x24);
        static_assert(offsetof(source2sdk::client::CDOTACourierController, m_bFSMStashAfter) == 0x25);
        static_assert(offsetof(source2sdk::client::CDOTACourierController, m_bManualRequest) == 0x26);
        
        static_assert(sizeof(source2sdk::client::CDOTACourierController) == 0x28);
    };
};
