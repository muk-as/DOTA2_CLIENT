#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/OrientationWarpMode_t.hpp"
#include "source2sdk/animgraphlib/OrientationWarpRootMotionSource_t.hpp"
#include "source2sdk/animgraphlib/OrientationWarpTargetOffsetMode_t.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class COrientationWarpUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::OrientationWarpMode_t m_eMode; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetParam; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetPositionParam; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hFallbackTargetPositionParam; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::OrientationWarpTargetOffsetMode_t m_eTargetOffsetMode; // 0x_            
            float m_flTargetOffset; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetOffsetParam; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0x_            
            source2sdk::animgraphlib::OrientationWarpRootMotionSource_t m_eRootMotionSource; // 0x_            
            float m_flMaxRootMotionScale; // 0x_            
            bool m_bEnablePreferredRotationDirection; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::AnimValueSource m_ePreferredRotationDirection; // 0x_            
            float m_flPreferredRotationThreshold; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in COrientationWarpUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::COrientationWarpUpdateNode) == 0x_);
    };
};
