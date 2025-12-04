#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/TraceSettings_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
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
        class FootFixedSettings
        {
        public:
            source2sdk::animgraphlib::TraceSettings_t m_traceSettings; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            VectorAligned m_vFootBaseBindPosePositionMS; // 0x_            
            float m_flFootBaseLength; // 0x_            
            float m_flMaxRotationLeft; // 0x_            
            float m_flMaxRotationRight; // 0x_            
            std::int32_t m_footstepLandedTagIndex; // 0x_            
            bool m_bEnableTracing; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flTraceAngleBlend; // 0x_            
            std::int32_t m_nDisableTagIndex; // 0x_            
            std::int32_t m_nFootIndex; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedSettings, m_traceSettings) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedSettings, m_vFootBaseBindPosePositionMS) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedSettings, m_flFootBaseLength) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedSettings, m_flMaxRotationLeft) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedSettings, m_flMaxRotationRight) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedSettings, m_footstepLandedTagIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedSettings, m_bEnableTracing) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedSettings, m_flTraceAngleBlend) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedSettings, m_nDisableTagIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedSettings, m_nFootIndex) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::FootFixedSettings) == 0x_);
    };
};
