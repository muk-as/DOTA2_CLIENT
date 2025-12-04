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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CTargetWarpUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::TargetWarpAngleMode_t m_eAngleMode; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetPositionParameter; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetUpVectorParameter; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetFacePositionParameter; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hMoveHeadingParameter; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hDesiredMoveHeadingParameter; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::TargetWarpCorrectionMethod m_eCorrectionMethod; // 0x_            
            source2sdk::animgraphlib::TargetWarpTimingMethod m_eTargetWarpTimingMethod; // 0x_            
            bool m_bTargetFacePositionIsWorldSpace; // 0x_            
            bool m_bTargetPositionIsWorldSpace; // 0x_            
            bool m_bOnlyWarpWhenTagIsFound; // 0x_            
            bool m_bWarpOrientationDuringTranslation; // 0x_            
            bool m_bWarpAroundCenter; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMaxAngle; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTargetWarpUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CTargetWarpUpdateNode) == 0x_);
    };
};
