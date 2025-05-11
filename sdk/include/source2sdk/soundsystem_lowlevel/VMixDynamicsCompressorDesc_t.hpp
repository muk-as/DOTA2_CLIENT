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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x24
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VMixDynamicsCompressorDesc_t
        {
        public:
            // metadata: MPropertyFriendlyName "Output Gain (dB)"
            float m_fldbOutputGain; // 0x0            
            // metadata: MPropertyFriendlyName "Threshold (dB)"
            float m_fldbCompressionThreshold; // 0x4            
            // metadata: MPropertyFriendlyName "Knee Width (dB)"
            float m_fldbKneeWidth; // 0x8            
            // metadata: MPropertyFriendlyName "Compression Ratio"
            float m_flCompressionRatio; // 0xc            
            // metadata: MPropertyFriendlyName "Attack time (ms)"
            float m_flAttackTimeMS; // 0x10            
            // metadata: MPropertyFriendlyName "Release time (ms)"
            float m_flReleaseTimeMS; // 0x14            
            // metadata: MPropertyFriendlyName "Threshold detection time (ms)"
            float m_flRMSTimeMS; // 0x18            
            // metadata: MPropertyFriendlyName "Dry/Wet"
            float m_flWetMix; // 0x1c            
            // metadata: MPropertyFriendlyName "Peak mode"
            bool m_bPeakMode; // 0x20            
            uint8_t _pad0021[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_fldbOutputGain) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_fldbCompressionThreshold) == 0x4);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_fldbKneeWidth) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_flCompressionRatio) == 0xc);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_flAttackTimeMS) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_flReleaseTimeMS) == 0x14);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_flRMSTimeMS) == 0x18);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_flWetMix) == 0x1c);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, m_bPeakMode) == 0x20);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixDynamicsCompressorDesc_t) == 0x24);
    };
};
