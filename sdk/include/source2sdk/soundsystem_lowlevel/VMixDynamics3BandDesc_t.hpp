#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_lowlevel/VMixDynamicsBand_t.hpp"

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
        struct VMixDynamics3BandDesc_t
        {
        public:
            float m_fldbGainOutput; // 0x_            
            float m_flRMSTimeMS; // 0x_            
            float m_fldbKneeWidth; // 0x_            
            float m_flDepth; // 0x_            
            float m_flWetMix; // 0x_            
            float m_flTimeScale; // 0x_            
            float m_flLowCutoffFreq; // 0x_            
            float m_flHighCutoffFreq; // 0x_            
            bool m_bPeakMode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t m_bandDesc[3]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_fldbGainOutput) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_flRMSTimeMS) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_fldbKneeWidth) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_flDepth) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_flWetMix) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_flTimeScale) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_flLowCutoffFreq) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_flHighCutoffFreq) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_bPeakMode) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_bandDesc) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t) == 0x_);
    };
};
