#pragma once
#include "source2sdk/soundsystem_lowlevel/VMixFilterSlope_t.hpp"
#include "source2sdk/soundsystem_lowlevel/VMixFilterType_t.hpp"
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
    // Size: 0x10
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VMixFilterDesc_t
    {
    public:
        soundsystem_lowlevel::VMixFilterType_t m_nFilterType; // 0x0        
        soundsystem_lowlevel::VMixFilterSlope_t m_nFilterSlope; // 0x2        
        bool m_bEnabled; // 0x3        
        float m_fldbGain; // 0x4        
        float m_flCutoffFreq; // 0x8        
        float m_flQ; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VMixFilterDesc_t, m_nFilterType) == 0x0);
    static_assert(offsetof(VMixFilterDesc_t, m_nFilterSlope) == 0x2);
    static_assert(offsetof(VMixFilterDesc_t, m_bEnabled) == 0x3);
    static_assert(offsetof(VMixFilterDesc_t, m_fldbGain) == 0x4);
    static_assert(offsetof(VMixFilterDesc_t, m_flCutoffFreq) == 0x8);
    static_assert(offsetof(VMixFilterDesc_t, m_flQ) == 0xc);
    
    static_assert(sizeof(VMixFilterDesc_t) == 0x10);
};
