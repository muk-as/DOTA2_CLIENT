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
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VMixFlangerDesc_t
        {
        public:
            bool m_bPhaseInvert; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flGlideTime; // 0x_            
            float m_flDelay; // 0x_            
            float m_flOutputGain; // 0x_            
            float m_flFeedbackGain; // 0x_            
            float m_flFeedforwardGain; // 0x_            
            float m_flModRate; // 0x_            
            float m_flModDepth; // 0x_            
            bool m_bApplyAntialiasing; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_bPhaseInvert) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_flGlideTime) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_flDelay) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_flOutputGain) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_flFeedbackGain) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_flFeedforwardGain) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_flModRate) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_flModDepth) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_bApplyAntialiasing) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t) == 0x_);
    };
};
