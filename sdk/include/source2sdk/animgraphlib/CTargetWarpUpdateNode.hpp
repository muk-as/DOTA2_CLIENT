#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/TargetWarpAngleMode_t.hpp"
#include "source2sdk/animgraphlib/TargetWarpCorrectionMethod.hpp"
#include "source2sdk/animgraphlib/TargetWarpTimingMethod.hpp"

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
        // Size: 0x98
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CTargetWarpUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            uint8_t _pad0070[0x4]; // 0x70
            source2sdk::animgraphlib::TargetWarpAngleMode_t m_eAngleMode; // 0x74            
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetPositionParameter; // 0x78            
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetUpVectorParameter; // 0x7a            
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetFacePositionParameter; // 0x7c            
            source2sdk::animgraphlib::CAnimParamHandle m_hMoveHeadingParameter; // 0x7e            
            source2sdk::animgraphlib::CAnimParamHandle m_hDesiredMoveHeadingParameter; // 0x80            
            uint8_t _pad0082[0x2]; // 0x82
            source2sdk::animgraphlib::TargetWarpCorrectionMethod m_eCorrectionMethod; // 0x84            
            source2sdk::animgraphlib::TargetWarpTimingMethod m_eTargetWarpTimingMethod; // 0x88            
            bool m_bTargetFacePositionIsWorldSpace; // 0x8c            
            bool m_bTargetPositionIsWorldSpace; // 0x8d            
            bool m_bOnlyWarpWhenTagIsFound; // 0x8e            
            bool m_bWarpOrientationDuringTranslation; // 0x8f            
            bool m_bWarpAroundCenter; // 0x90            
            uint8_t _pad0091[0x3]; // 0x91
            float m_flMaxAngle; // 0x94            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTargetWarpUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CTargetWarpUpdateNode) == 0x98);
    };
};
