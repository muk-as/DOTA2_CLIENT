#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/sSharedCooldownInfo.hpp"
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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xf8
        // Has VTable
        // MNetworkNoBase
        // 
        // static metadata: MNetworkExcludeByName "m_hInventoryParent"
        // static metadata: MNetworkVarNames "EHANDLE m_hItems"
        // static metadata: MNetworkVarNames "int m_iParity"
        // static metadata: MNetworkVarNames "EHANDLE m_hInventoryParent"
        // static metadata: MNetworkVarNames "bool m_bStashEnabled"
        // static metadata: MNetworkVarNames "EHANDLE m_hTransientCastItem"
        #pragma pack(push, 1)
        class CDOTA_UnitInventory
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // m_SharedCooldownList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sSharedCooldownInfo> m_SharedCooldownList;
            char m_SharedCooldownList[0x18]; // 0x8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnInventoryChanged"
            // m_hItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_hItems;
            char m_hItems[0x68]; // 0x20            
            bool m_bItemQueried[27]; // 0x88            
            uint8_t _pad00a3[0x1]; // 0xa3
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnInventoryParityChanged"
            std::int32_t m_iParity; // 0xa4            
            // metadata: MNetworkEnable
            // m_hInventoryParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hInventoryParent;
            char m_hInventoryParent[0x4]; // 0xa8            
            bool m_bIsActive; // 0xac            
            // metadata: MNetworkEnable
            bool m_bStashEnabled; // 0xad            
            uint8_t _pad00ae[0x2]; // 0xae
            // metadata: MNetworkEnable
            // m_hTransientCastItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTransientCastItem;
            char m_hTransientCastItem[0x4]; // 0xb0            
            uint8_t _pad00b4[0x44];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_UnitInventory, m_SharedCooldownList) == 0x8);
        static_assert(offsetof(source2sdk::server::CDOTA_UnitInventory, m_hItems) == 0x20);
        static_assert(offsetof(source2sdk::server::CDOTA_UnitInventory, m_bItemQueried) == 0x88);
        static_assert(offsetof(source2sdk::server::CDOTA_UnitInventory, m_iParity) == 0xa4);
        static_assert(offsetof(source2sdk::server::CDOTA_UnitInventory, m_hInventoryParent) == 0xa8);
        static_assert(offsetof(source2sdk::server::CDOTA_UnitInventory, m_bIsActive) == 0xac);
        static_assert(offsetof(source2sdk::server::CDOTA_UnitInventory, m_bStashEnabled) == 0xad);
        static_assert(offsetof(source2sdk::server::CDOTA_UnitInventory, m_hTransientCastItem) == 0xb0);
        
        static_assert(sizeof(source2sdk::server::CDOTA_UnitInventory) == 0xf8);
    };
};
