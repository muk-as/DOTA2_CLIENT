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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x160
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CCraftworksDefinition
        {
        public:
            CUtlString m_sName; // 0x0            
            source2sdk::client::CraftworksID_t m_unCraftworksID; // 0x8            
            uint8_t _pad0009[0x3]; // 0x9
            source2sdk::client::EEvent m_eAssociatedEvent; // 0xc            
            // m_vecComponents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CCraftworksComponentDefinition> m_vecComponents;
            char m_vecComponents[0x18]; // 0x10            
            // m_vecRecipeTiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CCraftworksRecipeTierDefinition> m_vecRecipeTiers;
            char m_vecRecipeTiers[0x18]; // 0x28            
            // m_vecRecipes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CCraftworksRecipeDefinition> m_vecRecipes;
            char m_vecRecipes[0x18]; // 0x40            
            // m_vecQuests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CCraftworksQuestDefinition> m_vecQuests;
            char m_vecQuests[0x18]; // 0x58            
            uint8_t _pad0070[0xf0];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCraftworksDefinition, m_sName) == 0x0);
        static_assert(offsetof(source2sdk::client::CCraftworksDefinition, m_unCraftworksID) == 0x8);
        static_assert(offsetof(source2sdk::client::CCraftworksDefinition, m_eAssociatedEvent) == 0xc);
        static_assert(offsetof(source2sdk::client::CCraftworksDefinition, m_vecComponents) == 0x10);
        static_assert(offsetof(source2sdk::client::CCraftworksDefinition, m_vecRecipeTiers) == 0x28);
        static_assert(offsetof(source2sdk::client::CCraftworksDefinition, m_vecRecipes) == 0x40);
        static_assert(offsetof(source2sdk::client::CCraftworksDefinition, m_vecQuests) == 0x58);
        
        static_assert(sizeof(source2sdk::client::CCraftworksDefinition) == 0x160);
    };
};
