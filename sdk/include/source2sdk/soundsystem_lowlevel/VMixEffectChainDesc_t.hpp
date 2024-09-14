#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VMixEffectChainDesc_t
    {
    public:
        // metadata: MPropertyFriendlyName "Crossfade Time (s)"
        // metadata: MPropertyAttributeRange "0.1 10"
        float m_flCrossfadeTime; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VMixEffectChainDesc_t, m_flCrossfadeTime) == 0x0);
    
    static_assert(sizeof(VMixEffectChainDesc_t) == 0x4);
};
