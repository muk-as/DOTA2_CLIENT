#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/TargetWarpAngleMode_t.hpp"

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
        // Size: 0x90
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
            bool m_bTargetFacePositionIsWorldSpace; // 0x82            
            bool m_bTargetPositionIsWorldSpace; // 0x83            
            bool m_bOnlyWarpWhenTagIsFound; // 0x84            
            bool m_bWarpOrientationDuringTranslation; // 0x85            
            bool m_bWarpAroundCenter; // 0x86            
            uint8_t _pad0087[0x1]; // 0x87
            float m_flMaxAngle; // 0x88            
            uint8_t _pad008c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTargetWarpUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CTargetWarpUpdateNode) == 0x90);
    };
};
