#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_lowlevel/VMixFilterSlope_t.hpp"
#include "source2sdk/soundsystem_lowlevel/VMixFilterType_t.hpp"

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
        struct VMixFilterDesc_t
        {
        public:
            source2sdk::soundsystem_lowlevel::VMixFilterType_t m_nFilterType; // 0x_            
            source2sdk::soundsystem_lowlevel::VMixFilterSlope_t m_nFilterSlope; // 0x_            
            bool m_bEnabled; // 0x_            
            float m_fldbGain; // 0x_            
            float m_flCutoffFreq; // 0x_            
            float m_flQ; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFilterDesc_t, m_nFilterType) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFilterDesc_t, m_nFilterSlope) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFilterDesc_t, m_bEnabled) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFilterDesc_t, m_fldbGain) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFilterDesc_t, m_flCutoffFreq) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFilterDesc_t, m_flQ) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixFilterDesc_t) == 0x_);
    };
};
