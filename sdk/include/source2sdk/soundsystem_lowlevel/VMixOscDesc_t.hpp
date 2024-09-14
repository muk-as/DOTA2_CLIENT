#pragma once
#include "source2sdk/soundsystem_lowlevel/VMixLFOShape_t.hpp"
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
    // Size: 0xc
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VMixOscDesc_t
    {
    public:
        // metadata: MPropertyFriendlyName "Type"
        soundsystem_lowlevel::VMixLFOShape_t oscType; // 0x0        
        // metadata: MPropertyFriendlyName "Frequency (Hz)"
        // metadata: MPropertyAttributeRange "0.1 16000"
        float m_freq; // 0x4        
        // metadata: MPropertyFriendlyName "Phase (degrees)"
        // metadata: MPropertyAttributeRange "0 360"
        float m_flPhase; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VMixOscDesc_t, oscType) == 0x0);
    static_assert(offsetof(VMixOscDesc_t, m_freq) == 0x4);
    static_assert(offsetof(VMixOscDesc_t, m_flPhase) == 0x8);
    
    static_assert(sizeof(VMixOscDesc_t) == 0xc);
};
