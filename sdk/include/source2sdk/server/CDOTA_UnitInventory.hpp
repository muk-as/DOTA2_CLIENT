#pragma once
#include "source2sdk/client/sSharedCooldownInfo.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xd8
    // Has VTable
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
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
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // m_SharedCooldownList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::sSharedCooldownInfo> m_SharedCooldownList;
        char m_SharedCooldownList[0x18]; // 0x8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnInventoryChanged"
        // m_hItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hItems[19];
        char m_hItems[0x4c]; // 0x20        
        bool m_bItemQueried[21]; // 0x6c        
        [[maybe_unused]] std::uint8_t pad_0x81[0x3]; // 0x81
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnInventoryParityChanged"
        int32_t m_iParity; // 0x84        
        // metadata: MNetworkEnable
        // m_hInventoryParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hInventoryParent;
        char m_hInventoryParent[0x4]; // 0x88        
        bool m_bIsActive; // 0x8c        
        // metadata: MNetworkEnable
        bool m_bStashEnabled; // 0x8d        
        [[maybe_unused]] std::uint8_t pad_0x8e[0x2]; // 0x8e
        // metadata: MNetworkEnable
        // m_hTransientCastItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTransientCastItem;
        char m_hTransientCastItem[0x4]; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0x94[0x44];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTA_UnitInventory, m_SharedCooldownList) == 0x8);
    static_assert(offsetof(CDOTA_UnitInventory, m_hItems) == 0x20);
    static_assert(offsetof(CDOTA_UnitInventory, m_bItemQueried) == 0x6c);
    static_assert(offsetof(CDOTA_UnitInventory, m_iParity) == 0x84);
    static_assert(offsetof(CDOTA_UnitInventory, m_hInventoryParent) == 0x88);
    static_assert(offsetof(CDOTA_UnitInventory, m_bIsActive) == 0x8c);
    static_assert(offsetof(CDOTA_UnitInventory, m_bStashEnabled) == 0x8d);
    static_assert(offsetof(CDOTA_UnitInventory, m_hTransientCastItem) == 0x90);
    
    static_assert(sizeof(CDOTA_UnitInventory) == 0xd8);
};
