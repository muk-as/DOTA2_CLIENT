#pragma once
#include "source2sdk/client/CAttributeList.hpp"
#include "source2sdk/client/IEconItemInterface.hpp"
#include "source2sdk/client/eEconItemOrigin.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/client/itemid_t.hpp"
#include "source2sdk/client/style_index_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "item_definition_index_t m_iItemDefinitionIndex"
    // static metadata: MNetworkVarNames "int m_iEntityQuality"
    // static metadata: MNetworkVarNames "uint32 m_iEntityLevel"
    // static metadata: MNetworkVarNames "itemid_t m_iItemID"
    // static metadata: MNetworkVarNames "uint32 m_iAccountID"
    // static metadata: MNetworkVarNames "uint32 m_iInventoryPosition"
    // static metadata: MNetworkVarNames "bool m_bInitialized"
    // static metadata: MNetworkVarNames "style_index_t m_nOverrideStyle"
    // static metadata: MNetworkVarNames "CAttributeList m_AttributeList"
    #pragma pack(push, 1)
    class C_EconItemView : public client::IEconItemInterface
    {
    public:
        // metadata: MNetworkEnable
        client::item_definition_index_t m_iItemDefinitionIndex; // 0x8        
        // metadata: MNetworkEnable
        int32_t m_iEntityQuality; // 0xc        
        // metadata: MNetworkEnable
        uint32_t m_iEntityLevel; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4]; // 0x14
        // metadata: MNetworkEnable
        client::itemid_t m_iItemID; // 0x18        
        // metadata: MNetworkEnable
        uint32_t m_iAccountID; // 0x20        
        // metadata: MNetworkEnable
        uint32_t m_iInventoryPosition; // 0x24        
        [[maybe_unused]] std::uint8_t pad_0x28[0x8]; // 0x28
        // metadata: MNetworkEnable
        bool m_bInitialized; // 0x30        
        // metadata: MNetworkEnable
        client::style_index_t m_nOverrideStyle; // 0x31        
        bool m_bIsStoreItem; // 0x32        
        bool m_bIsTradeItem; // 0x33        
        bool m_bHasComputedAttachedParticles; // 0x34        
        bool m_bHasAttachedParticles; // 0x35        
        [[maybe_unused]] std::uint8_t pad_0x36[0x2]; // 0x36
        int32_t m_iEntityQuantity; // 0x38        
        uint8_t m_unClientFlags; // 0x3c        
        [[maybe_unused]] std::uint8_t pad_0x3d[0x3]; // 0x3d
        client::eEconItemOrigin m_unOverrideOrigin; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x14]; // 0x44
        // metadata: MNetworkEnable
        client::CAttributeList m_AttributeList; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0xb8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EconItemView because it is not a standard-layout class
    static_assert(sizeof(C_EconItemView) == 0xc0);
};
