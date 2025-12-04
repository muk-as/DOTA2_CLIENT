#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_lowlevel
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
        struct VMixConvolutionDesc_t
        {
        public:
            // metadata: MPropertyFriendlyName "gain of wet signal (dB)"
            // metadata: MPropertyAttributeRange "-36 3"
            float m_fldbGain; // 0x_            
            // metadata: MPropertyFriendlyName "Pre-delay (ms)"
            float m_flPreDelayMS; // 0x_            
            // metadata: MPropertyFriendlyName "Dry/Wet"
            float m_flWetMix; // 0x_            
            // metadata: MPropertyFriendlyName "Low EQ gain (dB)"
            // metadata: MPropertyAttributeRange "-24 24"
            float m_fldbLow; // 0x_            
            // metadata: MPropertyFriendlyName "Mid EQ gain (dB)"
            // metadata: MPropertyAttributeRange "-24 24"
            float m_fldbMid; // 0x_            
            // metadata: MPropertyFriendlyName "High EQ gain (dB)"
            // metadata: MPropertyAttributeRange "-24 24"
            float m_fldbHigh; // 0x_            
            // metadata: MPropertyFriendlyName "Low Cutoff Freq (Hz)"
            float m_flLowCutoffFreq; // 0x_            
            // metadata: MPropertyFriendlyName "High Cutoff Freq (Hz)"
            float m_flHighCutoffFreq; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixConvolutionDesc_t, m_fldbGain) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixConvolutionDesc_t, m_flPreDelayMS) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixConvolutionDesc_t, m_flWetMix) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixConvolutionDesc_t, m_fldbLow) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixConvolutionDesc_t, m_fldbMid) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixConvolutionDesc_t, m_fldbHigh) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixConvolutionDesc_t, m_flLowCutoffFreq) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixConvolutionDesc_t, m_flHighCutoffFreq) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixConvolutionDesc_t) == 0x_);
    };
};
