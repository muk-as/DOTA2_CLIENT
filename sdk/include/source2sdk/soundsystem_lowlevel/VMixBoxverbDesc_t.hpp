#pragma once
#include "source2sdk/soundsystem_lowlevel/VMixFilterDesc_t.hpp"
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
    // Size: 0x50
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VMixBoxverbDesc_t
    {
    public:
        float m_flSizeMax; // 0x0        
        float m_flSizeMin; // 0x4        
        float m_flComplexity; // 0x8        
        float m_flDiffusion; // 0xc        
        float m_flModDepth; // 0x10        
        float m_flModRate; // 0x14        
        bool m_bParallel; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x19[0x3]; // 0x19
        soundsystem_lowlevel::VMixFilterDesc_t m_filterType; // 0x1c        
        float m_flWidth; // 0x2c        
        float m_flHeight; // 0x30        
        float m_flDepth; // 0x34        
        float m_flFeedbackScale; // 0x38        
        float m_flFeedbackWidth; // 0x3c        
        float m_flFeedbackHeight; // 0x40        
        float m_flFeedbackDepth; // 0x44        
        float m_flOutputGain; // 0x48        
        float m_flTaps; // 0x4c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VMixBoxverbDesc_t, m_flSizeMax) == 0x0);
    static_assert(offsetof(VMixBoxverbDesc_t, m_flSizeMin) == 0x4);
    static_assert(offsetof(VMixBoxverbDesc_t, m_flComplexity) == 0x8);
    static_assert(offsetof(VMixBoxverbDesc_t, m_flDiffusion) == 0xc);
    static_assert(offsetof(VMixBoxverbDesc_t, m_flModDepth) == 0x10);
    static_assert(offsetof(VMixBoxverbDesc_t, m_flModRate) == 0x14);
    static_assert(offsetof(VMixBoxverbDesc_t, m_bParallel) == 0x18);
    static_assert(offsetof(VMixBoxverbDesc_t, m_filterType) == 0x1c);
    static_assert(offsetof(VMixBoxverbDesc_t, m_flWidth) == 0x2c);
    static_assert(offsetof(VMixBoxverbDesc_t, m_flHeight) == 0x30);
    static_assert(offsetof(VMixBoxverbDesc_t, m_flDepth) == 0x34);
    static_assert(offsetof(VMixBoxverbDesc_t, m_flFeedbackScale) == 0x38);
    static_assert(offsetof(VMixBoxverbDesc_t, m_flFeedbackWidth) == 0x3c);
    static_assert(offsetof(VMixBoxverbDesc_t, m_flFeedbackHeight) == 0x40);
    static_assert(offsetof(VMixBoxverbDesc_t, m_flFeedbackDepth) == 0x44);
    static_assert(offsetof(VMixBoxverbDesc_t, m_flOutputGain) == 0x48);
    static_assert(offsetof(VMixBoxverbDesc_t, m_flTaps) == 0x4c);
    
    static_assert(sizeof(VMixBoxverbDesc_t) == 0x50);
};
