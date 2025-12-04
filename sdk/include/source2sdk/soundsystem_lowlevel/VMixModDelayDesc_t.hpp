#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_lowlevel/VMixFilterDesc_t.hpp"

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
        struct VMixModDelayDesc_t
        {
        public:
            source2sdk::soundsystem_lowlevel::VMixFilterDesc_t m_feedbackFilter; // 0x_            
            bool m_bPhaseInvert; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flGlideTime; // 0x_            
            float m_flDelay; // 0x_            
            float m_flOutputGain; // 0x_            
            float m_flFeedbackGain; // 0x_            
            float m_flModRate; // 0x_            
            float m_flModDepth; // 0x_            
            bool m_bApplyAntialiasing; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_feedbackFilter) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_bPhaseInvert) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_flGlideTime) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_flDelay) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_flOutputGain) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_flFeedbackGain) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_flModRate) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_flModDepth) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_bApplyAntialiasing) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t) == 0x_);
    };
};
