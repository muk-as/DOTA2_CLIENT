#pragma once
#include "source2sdk/client/CraftworksComponentID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCraftworksQuestComponentReward
    {
    public:
        client::CraftworksComponentID_t m_unComponentID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x01[0x3]; // 0x1
        float m_flStatMultiplier; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCraftworksQuestComponentReward, m_unComponentID) == 0x0);
    static_assert(offsetof(CCraftworksQuestComponentReward, m_flStatMultiplier) == 0x4);
    
    static_assert(sizeof(CCraftworksQuestComponentReward) == 0x8);
};