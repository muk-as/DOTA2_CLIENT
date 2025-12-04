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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CrownfallSurvivorsLightingOverride_t
        {
        public:
            float flTimeRemaining; // 0x_            
            bool bOverrideBackToDefault; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CrownfallSurvivorsLightingEnvironment_t Lighting; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingOverride_t, flTimeRemaining) == 0x_);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingOverride_t, bOverrideBackToDefault) == 0x_);
        static_assert(offsetof(source2sdk::client::CrownfallSurvivorsLightingOverride_t, Lighting) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CrownfallSurvivorsLightingOverride_t) == 0x_);
    };
};
