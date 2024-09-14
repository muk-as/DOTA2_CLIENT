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
    // Size: 0x14
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VMixShaperDesc_t
    {
    public:
        // metadata: MPropertyFriendlyName "Shape"
        // metadata: MPropertyAttributeRange "0 14"
        int32_t m_nShape; // 0x0        
        // metadata: MPropertyFriendlyName "Drive (dB)"
        // metadata: MPropertyAttributeRange "0 36"
        float m_fldbDrive; // 0x4        
        // metadata: MPropertyFriendlyName "Output Gain (dB)"
        // metadata: MPropertyAttributeRange "-36 0"
        float m_fldbOutputGain; // 0x8        
        // metadata: MPropertyFriendlyName "Dry/Wet"
        float m_flWetMix; // 0xc        
        // metadata: MPropertyFriendlyName "Oversampling"
        int32_t m_nOversampleFactor; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VMixShaperDesc_t, m_nShape) == 0x0);
    static_assert(offsetof(VMixShaperDesc_t, m_fldbDrive) == 0x4);
    static_assert(offsetof(VMixShaperDesc_t, m_fldbOutputGain) == 0x8);
    static_assert(offsetof(VMixShaperDesc_t, m_flWetMix) == 0xc);
    static_assert(offsetof(VMixShaperDesc_t, m_nOversampleFactor) == 0x10);
    
    static_assert(sizeof(VMixShaperDesc_t) == 0x14);
};
