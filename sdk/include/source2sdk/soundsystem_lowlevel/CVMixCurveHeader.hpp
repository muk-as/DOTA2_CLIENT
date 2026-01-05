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
        class CVMixCurveHeader
        {
        public:
            std::uint32_t m_nControlPointCount; // 0x_            
            std::uint32_t m_nControlPointStart; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixCurveHeader, m_nControlPointCount) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixCurveHeader, m_nControlPointStart) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::CVMixCurveHeader) == 0x_);
    };
};
