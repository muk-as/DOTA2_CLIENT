#pragma once
#include "source2sdk/client/CCraftworksRecipeComponentQuantity.hpp"
#include "source2sdk/client/CraftworksRecipeID_t.hpp"
#include "source2sdk/client/CraftworksRecipeTierID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
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
        client::CraftworksRecipeID_t m_unRecipeID; // 0x0        
        client::CraftworksRecipeTierID_t m_unRecipeTierID; // 0x1        
        [[maybe_unused]] std::uint8_t pad_0x02[0x6]; // 0x2
        CUtlString m_strLocName; // 0x8        
        CUtlString m_strRewardAction; // 0x10        
        bool m_bSeasonalReward; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x19[0x7]; // 0x19
        // m_vecComponents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CCraftworksRecipeComponentQuantity> m_vecComponents;
        char m_vecComponents[0x18]; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCraftworksRecipeDefinition, m_unRecipeID) == 0x0);
    static_assert(offsetof(CCraftworksRecipeDefinition, m_unRecipeTierID) == 0x1);
    static_assert(offsetof(CCraftworksRecipeDefinition, m_strLocName) == 0x8);
    static_assert(offsetof(CCraftworksRecipeDefinition, m_strRewardAction) == 0x10);
    static_assert(offsetof(CCraftworksRecipeDefinition, m_bSeasonalReward) == 0x18);
    static_assert(offsetof(CCraftworksRecipeDefinition, m_vecComponents) == 0x20);
    
    static_assert(sizeof(CCraftworksRecipeDefinition) == 0x38);
};
