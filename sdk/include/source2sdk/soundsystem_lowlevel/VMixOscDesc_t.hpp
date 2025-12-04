#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_lowlevel/VMixLFOShape_t.hpp"

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
        struct VMixOscDesc_t
        {
        public:
            // metadata: MPropertyFriendlyName "Type"
            source2sdk::soundsystem_lowlevel::VMixLFOShape_t oscType; // 0x_            
            // metadata: MPropertyFriendlyName "Frequency (Hz)"
            // metadata: MPropertyAttributeRange "0.1 16000"
            float m_freq; // 0x_            
            // metadata: MPropertyFriendlyName "Phase (degrees)"
            // metadata: MPropertyAttributeRange "0 360"
            float m_flPhase; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixOscDesc_t, oscType) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixOscDesc_t, m_freq) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixOscDesc_t, m_flPhase) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixOscDesc_t) == 0x_);
    };
};
