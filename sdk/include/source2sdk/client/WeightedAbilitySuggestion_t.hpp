#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct WeightedAbilitySuggestion_t
    {
    public:
        // metadata: MNetworkEnable
        client::AbilityID_t nSuggestion; // 0x0        
        // metadata: MNetworkEnable
        float fWeight; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(WeightedAbilitySuggestion_t, nSuggestion) == 0x0);
    static_assert(offsetof(WeightedAbilitySuggestion_t, fWeight) == 0x4);
    
    static_assert(sizeof(WeightedAbilitySuggestion_t) == 0x8);
};
