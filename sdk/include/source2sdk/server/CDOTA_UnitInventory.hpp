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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // m_SharedCooldownList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sSharedCooldownInfo> m_SharedCooldownList;
            char m_SharedCooldownList[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnInventoryChanged"
            // m_hItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_hItems;
            char m_hItems[0x_]; // 0x_            
            bool m_bItemQueried[27]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnInventoryParityChanged"
            std::int32_t m_iParity; // 0x_            
            // metadata: MNetworkEnable
            // m_hInventoryParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hInventoryParent;
            char m_hInventoryParent[0x_]; // 0x_            
            bool m_bIsActive; // 0x_            
            // metadata: MNetworkEnable
            bool m_bStashEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_hTransientCastItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTransientCastItem;
            char m_hTransientCastItem[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_UnitInventory, m_SharedCooldownList) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_UnitInventory, m_hItems) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_UnitInventory, m_bItemQueried) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_UnitInventory, m_iParity) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_UnitInventory, m_hInventoryParent) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_UnitInventory, m_bIsActive) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_UnitInventory, m_bStashEnabled) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_UnitInventory, m_hTransientCastItem) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTA_UnitInventory) == 0x_);
    };
};
