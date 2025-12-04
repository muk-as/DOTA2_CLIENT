#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_lowlevel/VMixChannelOperation_t.hpp"

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
        struct VMixUtilityDesc_t
        {
        public:
            // metadata: MPropertyFriendlyName "Channels"
            source2sdk::soundsystem_lowlevel::VMixChannelOperation_t m_nOp; // 0x_            
            // metadata: MPropertyFriendlyName "Input Pan"
            // metadata: MPropertyAttributeRange "-1 1"
            float m_flInputPan; // 0x_            
            // metadata: MPropertyFriendlyName "Output Balance"
            // metadata: MPropertyAttributeRange "-1 1"
            float m_flOutputBalance; // 0x_            
            // metadata: MPropertyFriendlyName "Output Gain (dB)"
            // metadata: MPropertyAttributeRange "-36 0"
            float m_fldbOutputGain; // 0x_            
            bool m_bBassMono; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flBassFreq; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixUtilityDesc_t, m_nOp) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixUtilityDesc_t, m_flInputPan) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixUtilityDesc_t, m_flOutputBalance) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixUtilityDesc_t, m_fldbOutputGain) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixUtilityDesc_t, m_bBassMono) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixUtilityDesc_t, m_flBassFreq) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixUtilityDesc_t) == 0x_);
    };
};
