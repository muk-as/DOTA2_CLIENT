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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VMixUtilityDesc_t
        {
        public:
            // metadata: MPropertyFriendlyName "Channels"
            source2sdk::soundsystem_lowlevel::VMixChannelOperation_t m_nOp; // 0x0            
            // metadata: MPropertyFriendlyName "Input Pan"
            // metadata: MPropertyAttributeRange "-1 1"
            float m_flInputPan; // 0x4            
            // metadata: MPropertyFriendlyName "Output Balance"
            // metadata: MPropertyAttributeRange "-1 1"
            float m_flOutputBalance; // 0x8            
            // metadata: MPropertyFriendlyName "Output Gain (dB)"
            // metadata: MPropertyAttributeRange "-36 0"
            float m_fldbOutputGain; // 0xc            
            bool m_bBassMono; // 0x10            
            uint8_t _pad0011[0x3]; // 0x11
            float m_flBassFreq; // 0x14            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixUtilityDesc_t, m_nOp) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixUtilityDesc_t, m_flInputPan) == 0x4);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixUtilityDesc_t, m_flOutputBalance) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixUtilityDesc_t, m_fldbOutputGain) == 0xc);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixUtilityDesc_t, m_bBassMono) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixUtilityDesc_t, m_flBassFreq) == 0x14);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixUtilityDesc_t) == 0x18);
    };
};
