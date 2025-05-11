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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x30
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VMixModDelayDesc_t
        {
        public:
            source2sdk::soundsystem_lowlevel::VMixFilterDesc_t m_feedbackFilter; // 0x0            
            bool m_bPhaseInvert; // 0x10            
            uint8_t _pad0011[0x3]; // 0x11
            float m_flGlideTime; // 0x14            
            float m_flDelay; // 0x18            
            float m_flOutputGain; // 0x1c            
            float m_flFeedbackGain; // 0x20            
            float m_flModRate; // 0x24            
            float m_flModDepth; // 0x28            
            bool m_bApplyAntialiasing; // 0x2c            
            uint8_t _pad002d[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_feedbackFilter) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_bPhaseInvert) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_flGlideTime) == 0x14);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_flDelay) == 0x18);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_flOutputGain) == 0x1c);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_flFeedbackGain) == 0x20);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_flModRate) == 0x24);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_flModDepth) == 0x28);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t, m_bApplyAntialiasing) == 0x2c);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixModDelayDesc_t) == 0x30);
    };
};
