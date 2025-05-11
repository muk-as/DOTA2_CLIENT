#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"

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
        // Size: 0x88
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CTargetWarpUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            uint8_t _pad0070[0x4]; // 0x70
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetPositionParameter; // 0x74            
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetUpVectorParameter; // 0x76            
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetFacePositionParameter; // 0x78            
            bool m_bTargetFacePositionIsWorldSpace; // 0x7a            
            bool m_bTargetPositionIsWorldSpace; // 0x7b            
            bool m_bOnlyWarpWhenTagIsFound; // 0x7c            
            bool m_bWarpOrientationDuringTranslation; // 0x7d            
            uint8_t _pad007e[0x2]; // 0x7e
            float m_flMaxAngle; // 0x80            
            uint8_t _pad0084[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTargetWarpUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CTargetWarpUpdateNode) == 0x88);
    };
};
