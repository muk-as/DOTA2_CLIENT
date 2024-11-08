#pragma once
#include "source2sdk/client/CrownfallSurvivorsLightingEnvironment_t.hpp"
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
        [[maybe_unused]] std::uint8_t pad_0x05[0x3]; // 0x5
        client::CrownfallSurvivorsLightingEnvironment_t Lighting; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CrownfallSurvivorsLightingOverride_t, flTimeRemaining) == 0x0);
    static_assert(offsetof(CrownfallSurvivorsLightingOverride_t, bOverrideBackToDefault) == 0x4);
    static_assert(offsetof(CrownfallSurvivorsLightingOverride_t, Lighting) == 0x8);
    
    static_assert(sizeof(CrownfallSurvivorsLightingOverride_t) == 0x30);
};
