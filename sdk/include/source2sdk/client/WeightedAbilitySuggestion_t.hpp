#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct WeightedAbilitySuggestion_t
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::AbilityID_t nSuggestion; // 0x_            
            // metadata: MNetworkEnable
            float fWeight; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::WeightedAbilitySuggestion_t, nSuggestion) == 0x_);
        static_assert(offsetof(source2sdk::client::WeightedAbilitySuggestion_t, fWeight) == 0x_);
        
        static_assert(sizeof(source2sdk::client::WeightedAbilitySuggestion_t) == 0x_);
    };
};
