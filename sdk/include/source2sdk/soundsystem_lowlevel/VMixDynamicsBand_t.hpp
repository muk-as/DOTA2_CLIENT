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
        struct VMixDynamicsBand_t
        {
        public:
            // metadata: MPropertyFriendlyName "Input Gain (dB)"
            float m_fldbGainInput; // 0x_            
            // metadata: MPropertyFriendlyName "Output Gain (dB)"
            float m_fldbGainOutput; // 0x_            
            // metadata: MPropertyFriendlyName "Below Threshold(dB)"
            float m_fldbThresholdBelow; // 0x_            
            // metadata: MPropertyFriendlyName "Above Threshold(dB)"
            float m_fldbThresholdAbove; // 0x_            
            // metadata: MPropertyFriendlyName "Upward Ratio"
            float m_flRatioBelow; // 0x_            
            // metadata: MPropertyFriendlyName "Downward Ratio"
            float m_flRatioAbove; // 0x_            
            // metadata: MPropertyFriendlyName "Attack time (ms)"
            float m_flAttackTimeMS; // 0x_            
            // metadata: MPropertyFriendlyName "Release time (ms)"
            float m_flReleaseTimeMS; // 0x_            
            // metadata: MPropertyFriendlyName "Enabled"
            bool m_bEnable; // 0x_            
            // metadata: MPropertyFriendlyName "Solo"
            bool m_bSolo; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_fldbGainInput) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_fldbGainOutput) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_fldbThresholdBelow) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_fldbThresholdAbove) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_flRatioBelow) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_flRatioAbove) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_flAttackTimeMS) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_flReleaseTimeMS) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_bEnable) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t, m_bSolo) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixDynamicsBand_t) == 0x_);
    };
};
