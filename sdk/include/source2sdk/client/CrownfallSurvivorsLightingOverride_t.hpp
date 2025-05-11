#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CrownfallSurvivorsLightingEnvironment_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x30
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CrownfallSurvivorsLightingOverride_t
        {
        public:
            float flTimeRemaining; // 0x0            
            bool bOverrideBackToDefault; // 0x4            
            uint8_t _pad0005[0x3]; // 0x5
            source2sdk::client::CrownfallSurvivorsLightingEnvironment_t Lighting; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingOverride_t, flTimeRemaining) == 0x0);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingOverride_t, bOverrideBackToDefault) == 0x4);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingOverride_t, Lighting) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CrownfallSurvivorsLightingOverride_t) == 0x30);
    };
};
