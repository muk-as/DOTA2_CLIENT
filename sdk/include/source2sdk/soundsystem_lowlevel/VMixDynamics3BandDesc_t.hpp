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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x90
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VMixDynamics3BandDesc_t
        {
        public:
            float m_fldbGainOutput; // 0x0            
            float m_flRMSTimeMS; // 0x4            
            float m_fldbKneeWidth; // 0x8            
            float m_flDepth; // 0xc            
            float m_flWetMix; // 0x10            
            float m_flTimeScale; // 0x14            
            float m_flLowCutoffFreq; // 0x18            
            float m_flHighCutoffFreq; // 0x1c            
            bool m_bPeakMode; // 0x20            
            uint8_t _pad0021[0x3]; // 0x21
            source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t m_bandDesc[3]; // 0x24            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_fldbGainOutput) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_flRMSTimeMS) == 0x4);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_fldbKneeWidth) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_flDepth) == 0xc);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_flWetMix) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_flTimeScale) == 0x14);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_flLowCutoffFreq) == 0x18);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_flHighCutoffFreq) == 0x1c);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_bPeakMode) == 0x20);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t, m_bandDesc) == 0x24);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixDynamics3BandDesc_t) == 0x90);
    };
};
