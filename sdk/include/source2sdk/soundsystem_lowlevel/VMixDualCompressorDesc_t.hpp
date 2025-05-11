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
        // Size: 0x34
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VMixDualCompressorDesc_t
        {
        public:
            float m_flRMSTimeMS; // 0x0            
            float m_fldbKneeWidth; // 0x4            
            float m_flWetMix; // 0x8            
            bool m_bPeakMode; // 0xc            
            uint8_t _pad000d[0x3]; // 0xd
            source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t m_bandDesc; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDualCompressorDesc_t, m_flRMSTimeMS) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDualCompressorDesc_t, m_fldbKneeWidth) == 0x4);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDualCompressorDesc_t, m_flWetMix) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDualCompressorDesc_t, m_bPeakMode) == 0xc);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDualCompressorDesc_t, m_bandDesc) == 0x10);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixDualCompressorDesc_t) == 0x34);
    };
};
