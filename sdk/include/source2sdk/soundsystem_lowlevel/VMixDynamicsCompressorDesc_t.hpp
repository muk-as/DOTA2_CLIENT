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
        struct VMixDynamicsCompressorDesc_t
        {
        public:
            // metadata: MPropertyFriendlyName "Output Gain (dB)"
            float m_fldbOutputGain; // 0x_            
            // metadata: MPropertyFriendlyName "Threshold (dB)"
            float m_fldbCompressionThreshold; // 0x_            
            // metadata: MPropertyFriendlyName "Knee Width (dB)"
            float m_fldbKneeWidth; // 0x_            
            // metadata: MPropertyFriendlyName "Compression Ratio"
            float m_flCompressionRatio; // 0x_            
            // metadata: MPropertyFriendlyName "Attack time (ms)"
            float m_flAttackTimeMS; // 0x_            
            // metadata: MPropertyFriendlyName "Release time (ms)"
            float m_flReleaseTimeMS; // 0x_            
            // metadata: MPropertyFriendlyName "Threshold detection time (ms)"
            float m_flRMSTimeMS; // 0x_            
            // metadata: MPropertyFriendlyName "Dry/Wet"
            float m_flWetMix; // 0x_            
            // metadata: MPropertyFriendlyName "Peak mode"
            bool m_bPeakMode; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_fldbOutputGain) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_fldbCompressionThreshold) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_fldbKneeWidth) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_flCompressionRatio) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_flAttackTimeMS) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_flReleaseTimeMS) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_flRMSTimeMS) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_flWetMix) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_bPeakMode) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t) == 0x_);
    };
};
