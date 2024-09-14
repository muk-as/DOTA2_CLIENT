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
    // Size: 0x30
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VMixDynamicsDesc_t
    {
    public:
        float m_fldbGain; // 0x0        
        float m_fldbNoiseGateThreshold; // 0x4        
        float m_fldbCompressionThreshold; // 0x8        
        float m_fldbLimiterThreshold; // 0xc        
        float m_fldbKneeWidth; // 0x10        
        float m_flRatio; // 0x14        
        float m_flLimiterRatio; // 0x18        
        float m_flAttackTimeMS; // 0x1c        
        float m_flReleaseTimeMS; // 0x20        
        float m_flRMSTimeMS; // 0x24        
        float m_flWetMix; // 0x28        
        bool m_bPeakMode; // 0x2c        
        [[maybe_unused]] std::uint8_t pad_0x2d[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VMixDynamicsDesc_t, m_fldbGain) == 0x0);
    static_assert(offsetof(VMixDynamicsDesc_t, m_fldbNoiseGateThreshold) == 0x4);
    static_assert(offsetof(VMixDynamicsDesc_t, m_fldbCompressionThreshold) == 0x8);
    static_assert(offsetof(VMixDynamicsDesc_t, m_fldbLimiterThreshold) == 0xc);
    static_assert(offsetof(VMixDynamicsDesc_t, m_fldbKneeWidth) == 0x10);
    static_assert(offsetof(VMixDynamicsDesc_t, m_flRatio) == 0x14);
    static_assert(offsetof(VMixDynamicsDesc_t, m_flLimiterRatio) == 0x18);
    static_assert(offsetof(VMixDynamicsDesc_t, m_flAttackTimeMS) == 0x1c);
    static_assert(offsetof(VMixDynamicsDesc_t, m_flReleaseTimeMS) == 0x20);
    static_assert(offsetof(VMixDynamicsDesc_t, m_flRMSTimeMS) == 0x24);
    static_assert(offsetof(VMixDynamicsDesc_t, m_flWetMix) == 0x28);
    static_assert(offsetof(VMixDynamicsDesc_t, m_bPeakMode) == 0x2c);
    
    static_assert(sizeof(VMixDynamicsDesc_t) == 0x30);
};
