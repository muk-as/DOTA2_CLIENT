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
        struct VMixBoxverbDesc_t
        {
        public:
            float m_flSizeMax; // 0x_            
            float m_flSizeMin; // 0x_            
            float m_flComplexity; // 0x_            
            float m_flDiffusion; // 0x_            
            float m_flModDepth; // 0x_            
            float m_flModRate; // 0x_            
            bool m_bParallel; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::soundsystem_lowlevel::VMixFilterDesc_t m_filterType; // 0x_            
            float m_flWidth; // 0x_            
            float m_flHeight; // 0x_            
            float m_flDepth; // 0x_            
            float m_flFeedbackScale; // 0x_            
            float m_flFeedbackWidth; // 0x_            
            float m_flFeedbackHeight; // 0x_            
            float m_flFeedbackDepth; // 0x_            
            float m_flOutputGain; // 0x_            
            float m_flTaps; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t, m_flSizeMax) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t, m_flSizeMin) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t, m_flComplexity) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t, m_flDiffusion) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t, m_flModDepth) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t, m_flModRate) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t, m_bParallel) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t, m_filterType) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t, m_flWidth) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t, m_flHeight) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t, m_flDepth) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t, m_flFeedbackScale) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t, m_flFeedbackWidth) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t, m_flFeedbackHeight) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t, m_flFeedbackDepth) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t, m_flOutputGain) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t, m_flTaps) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixBoxverbDesc_t) == 0x_);
    };
};
