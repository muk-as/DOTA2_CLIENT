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
    // Size: 0x1c
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VMixPlateverbDesc_t
    {
    public:
        float m_flPrefilter; // 0x0        
        float m_flInputDiffusion1; // 0x4        
        float m_flInputDiffusion2; // 0x8        
        float m_flDecay; // 0xc        
        float m_flDamp; // 0x10        
        float m_flFeedbackDiffusion1; // 0x14        
        float m_flFeedbackDiffusion2; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VMixPlateverbDesc_t, m_flPrefilter) == 0x0);
    static_assert(offsetof(VMixPlateverbDesc_t, m_flInputDiffusion1) == 0x4);
    static_assert(offsetof(VMixPlateverbDesc_t, m_flInputDiffusion2) == 0x8);
    static_assert(offsetof(VMixPlateverbDesc_t, m_flDecay) == 0xc);
    static_assert(offsetof(VMixPlateverbDesc_t, m_flDamp) == 0x10);
    static_assert(offsetof(VMixPlateverbDesc_t, m_flFeedbackDiffusion1) == 0x14);
    static_assert(offsetof(VMixPlateverbDesc_t, m_flFeedbackDiffusion2) == 0x18);
    
    static_assert(sizeof(VMixPlateverbDesc_t) == 0x1c);
};
