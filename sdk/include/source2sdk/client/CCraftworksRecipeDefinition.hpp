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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCraftworksRecipeDefinition
        {
        public:
            source2sdk::client::CraftworksRecipeID_t m_unRecipeID; // 0x_            
            source2sdk::client::CraftworksRecipeTierID_t m_unRecipeTierID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strLocName; // 0x_            
            CUtlString m_strRewardAction; // 0x_            
            bool m_bSeasonalReward; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecComponents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CCraftworksRecipeComponentQuantity> m_vecComponents;
            char m_vecComponents[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeDefinition, m_unRecipeID) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeDefinition, m_unRecipeTierID) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeDefinition, m_strLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeDefinition, m_strRewardAction) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeDefinition, m_bSeasonalReward) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeDefinition, m_vecComponents) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CCraftworksRecipeDefinition) == 0x_);
    };
};
