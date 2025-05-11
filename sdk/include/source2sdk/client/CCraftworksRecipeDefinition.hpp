#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCraftworksRecipeComponentQuantity.hpp"
#include "source2sdk/client/CraftworksRecipeID_t.hpp"
#include "source2sdk/client/CraftworksRecipeTierID_t.hpp"

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
        // Size: 0x38
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCraftworksRecipeDefinition
        {
        public:
            source2sdk::client::CraftworksRecipeID_t m_unRecipeID; // 0x0            
            source2sdk::client::CraftworksRecipeTierID_t m_unRecipeTierID; // 0x1            
            uint8_t _pad0002[0x6]; // 0x2
            CUtlString m_strLocName; // 0x8            
            CUtlString m_strRewardAction; // 0x10            
            bool m_bSeasonalReward; // 0x18            
            uint8_t _pad0019[0x7]; // 0x19
            // m_vecComponents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CCraftworksRecipeComponentQuantity> m_vecComponents;
            char m_vecComponents[0x18]; // 0x20            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeDefinition, m_unRecipeID) == 0x0);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeDefinition, m_unRecipeTierID) == 0x1);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeDefinition, m_strLocName) == 0x8);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeDefinition, m_strRewardAction) == 0x10);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeDefinition, m_bSeasonalReward) == 0x18);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeDefinition, m_vecComponents) == 0x20);
        
        static_assert(sizeof(source2sdk::client::CCraftworksRecipeDefinition) == 0x38);
    };
};
