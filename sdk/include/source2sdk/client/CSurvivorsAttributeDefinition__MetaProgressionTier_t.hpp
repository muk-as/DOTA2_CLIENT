#pragma once
#include "source2sdk/client/CSurvivorsAttributeDefinition__MetaProgressionTierCost_t.hpp"
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
    // Size: 0x58
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CSurvivorsAttributeDefinition__MetaProgressionTier_t
    {
    public:
        client::CSurvivorsAttributeDefinition__MetaProgressionTierCost_t m_cost; // 0x0        
        float m_flValue; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x54[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsAttributeDefinition__MetaProgressionTier_t, m_cost) == 0x0);
    static_assert(offsetof(CSurvivorsAttributeDefinition__MetaProgressionTier_t, m_flValue) == 0x50);
    
    static_assert(sizeof(CSurvivorsAttributeDefinition__MetaProgressionTier_t) == 0x58);
};
