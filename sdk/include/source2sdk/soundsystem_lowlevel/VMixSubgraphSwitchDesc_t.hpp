#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_lowlevel/VMixSubgraphSwitchInterpolationType_t.hpp"

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
        // Size: 0xc
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VMixSubgraphSwitchDesc_t
        {
        public:
            source2sdk::soundsystem_lowlevel::VMixSubgraphSwitchInterpolationType_t m_interpolationMode; // 0x0            
            bool m_bOnlyTailsOnFadeOut; // 0x4            
            uint8_t _pad0005[0x3]; // 0x5
            float m_flInterpolationTime; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixSubgraphSwitchDesc_t, m_interpolationMode) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixSubgraphSwitchDesc_t, m_bOnlyTailsOnFadeOut) == 0x4);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixSubgraphSwitchDesc_t, m_flInterpolationTime) == 0x8);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixSubgraphSwitchDesc_t) == 0xc);
    };
};
