#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/client/style_index_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAFightingGameHeroStyleDefinition
        {
        public:
            bool m_bUseDefault; // 0x_            
            bool m_bUseEquipped; // 0x_            
            source2sdk::client::style_index_t m_unStyleIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strLocName; // 0x_            
            // m_vecItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::item_definition_index_t> m_vecItems;
            char m_vecItems[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroStyleDefinition, m_bUseDefault) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroStyleDefinition, m_bUseEquipped) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroStyleDefinition, m_unStyleIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroStyleDefinition, m_strLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroStyleDefinition, m_vecItems) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAFightingGameHeroStyleDefinition) == 0x_);
    };
};
