#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAttributeList.hpp"
#include "source2sdk/client/IEconItemInterface.hpp"
#include "source2sdk/client/eEconItemOrigin.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/client/itemid_t.hpp"
#include "source2sdk/client/style_index_t.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
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
        class C_EconItemView : public source2sdk::client::IEconItemInterface
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::item_definition_index_t m_iItemDefinitionIndex; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iEntityQuality; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_iEntityLevel; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::itemid_t m_iItemID; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_iAccountID; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_iInventoryPosition; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            bool m_bInitialized; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::style_index_t m_nOverrideStyle; // 0x_            
            bool m_bIsStoreItem; // 0x_            
            bool m_bIsTradeItem; // 0x_            
            bool m_bHasComputedAttachedParticles; // 0x_            
            bool m_bHasAttachedParticles; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iEntityQuantity; // 0x_            
            std::uint8_t m_unClientFlags; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::eEconItemOrigin m_unOverrideOrigin; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::CAttributeList m_AttributeList; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EconItemView because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EconItemView) == 0x_);
    };
};
