#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCraftworksComponentDefinition.hpp"
#include "source2sdk/client/CCraftworksQuestDefinition.hpp"
#include "source2sdk/client/CCraftworksRecipeDefinition.hpp"
#include "source2sdk/client/CCraftworksRecipeTierDefinition.hpp"
#include "source2sdk/client/CraftworksID_t.hpp"
#include "source2sdk/client/EEvent.hpp"

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
        class CCraftworksDefinition
        {
        public:
            CUtlString m_sName; // 0x_            
            source2sdk::client::CraftworksID_t m_unCraftworksID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::EEvent m_eAssociatedEvent; // 0x_            
            // m_vecComponents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CCraftworksComponentDefinition> m_vecComponents;
            char m_vecComponents[0x_]; // 0x_            
            // m_vecRecipeTiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CCraftworksRecipeTierDefinition> m_vecRecipeTiers;
            char m_vecRecipeTiers[0x_]; // 0x_            
            // m_vecRecipes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CCraftworksRecipeDefinition> m_vecRecipes;
            char m_vecRecipes[0x_]; // 0x_            
            // m_vecQuests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CCraftworksQuestDefinition> m_vecQuests;
            char m_vecQuests[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCraftworksDefinition, m_sName) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksDefinition, m_unCraftworksID) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksDefinition, m_eAssociatedEvent) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksDefinition, m_vecComponents) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksDefinition, m_vecRecipeTiers) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksDefinition, m_vecRecipes) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksDefinition, m_vecQuests) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CCraftworksDefinition) == 0x_);
    };
};
