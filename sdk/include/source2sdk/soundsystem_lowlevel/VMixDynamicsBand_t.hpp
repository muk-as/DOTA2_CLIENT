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
        struct VMixDynamicsBand_t
        {
        public:
            // metadata: MPropertyFriendlyName "Input Gain (dB)"
            float m_fldbGainInput; // 0x0            
            // metadata: MPropertyFriendlyName "Output Gain (dB)"
            float m_fldbGainOutput; // 0x4            
            // metadata: MPropertyFriendlyName "Below Threshold(dB)"
            float m_fldbThresholdBelow; // 0x8            
            // metadata: MPropertyFriendlyName "Above Threshold(dB)"
            float m_fldbThresholdAbove; // 0xc            
            // metadata: MPropertyFriendlyName "Upward Ratio"
            float m_flRatioBelow; // 0x10            
            // metadata: MPropertyFriendlyName "Downward Ratio"
            float m_flRatioAbove; // 0x14            
            // metadata: MPropertyFriendlyName "Attack time (ms)"
            float m_flAttackTimeMS; // 0x18            
            // metadata: MPropertyFriendlyName "Release time (ms)"
            float m_flReleaseTimeMS; // 0x1c            
            // metadata: MPropertyFriendlyName "Enabled"
            bool m_bEnable; // 0x20            
            // metadata: MPropertyFriendlyName "Solo"
            bool m_bSolo; // 0x21            
            uint8_t _pad0022[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_fldbGainInput) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_fldbGainOutput) == 0x4);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_fldbThresholdBelow) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_fldbThresholdAbove) == 0xc);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_flRatioBelow) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_flRatioAbove) == 0x14);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_flAttackTimeMS) == 0x18);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_flReleaseTimeMS) == 0x1c);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_bEnable) == 0x20);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_bSolo) == 0x21);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t) == 0x24);
    };
};
