#pragma once
#include "source2sdk/client/OverworldTokenID_t.hpp"
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
    // Size: 0x50
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CSurvivorsAttributeDefinition__MetaProgressionTierCost_t
    {
    public:
        int32_t m_nMinigameCurrency; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // m_vecOverworldTokens has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::OverworldTokenID_t> m_vecOverworldTokens;
        char m_vecOverworldTokens[0x18]; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x20[0x30];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsAttributeDefinition__MetaProgressionTierCost_t, m_nMinigameCurrency) == 0x0);
    static_assert(offsetof(CSurvivorsAttributeDefinition__MetaProgressionTierCost_t, m_vecOverworldTokens) == 0x8);
    
    static_assert(sizeof(CSurvivorsAttributeDefinition__MetaProgressionTierCost_t) == 0x50);
};
