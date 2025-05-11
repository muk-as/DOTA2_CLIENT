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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class COrientationWarpUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            uint8_t _pad0070[0x4]; // 0x70
            source2sdk::animgraphlib::OrientationWarpMode_t m_eMode; // 0x74            
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetParam; // 0x78            
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetPositionParam; // 0x7a            
            source2sdk::animgraphlib::CAnimParamHandle m_hFallbackTargetPositionParam; // 0x7c            
            uint8_t _pad007e[0x2]; // 0x7e
            source2sdk::animgraphlib::OrientationWarpTargetOffsetMode_t m_eTargetOffsetMode; // 0x80            
            float m_flTargetOffset; // 0x84            
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetOffsetParam; // 0x88            
            uint8_t _pad008a[0x6]; // 0x8a
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0x90            
            source2sdk::animgraphlib::OrientationWarpRootMotionSource_t m_eRootMotionSource; // 0xa0            
            float m_flMaxRootMotionScale; // 0xa4            
            bool m_bEnablePreferredRotationDirection; // 0xa8            
            uint8_t _pad00a9[0x3]; // 0xa9
            source2sdk::animgraphlib::AnimValueSource m_ePreferredRotationDirection; // 0xac            
            float m_flPreferredRotationThreshold; // 0xb0            
            uint8_t _pad00b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in COrientationWarpUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::COrientationWarpUpdateNode) == 0xb8);
    };
};
