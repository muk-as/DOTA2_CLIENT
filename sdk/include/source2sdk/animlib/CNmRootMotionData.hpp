#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmRootMotionData
        {
        public:
            // m_transforms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CTransform> m_transforms;
            char m_transforms[0x_]; // 0x_            
            std::int32_t m_nNumFrames; // 0x_            
            float m_flAverageLinearVelocity; // 0x_            
            float m_flAverageAngularVelocityRadians; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CTransform m_totalDelta; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmRootMotionData, m_transforms) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmRootMotionData, m_nNumFrames) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmRootMotionData, m_flAverageLinearVelocity) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmRootMotionData, m_flAverageAngularVelocityRadians) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmRootMotionData, m_totalDelta) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::CNmRootMotionData) == 0x_);
    };
};
