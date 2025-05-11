#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/BinaryNodeChildOption.hpp"
#include "source2sdk/animgraphlib/BoneMaskBlendSpace.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CBinaryUpdateNode.hpp"

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
        // Size: 0xb0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBoneMaskUpdateNode : public source2sdk::animgraphlib::CBinaryUpdateNode
        {
        public:
            uint8_t _pad0090[0x4]; // 0x90
            std::int32_t m_nWeightListIndex; // 0x94            
            float m_flRootMotionBlend; // 0x98            
            source2sdk::animgraphlib::BoneMaskBlendSpace m_blendSpace; // 0x9c            
            source2sdk::animgraphlib::BinaryNodeChildOption m_footMotionTiming; // 0xa0            
            bool m_bUseBlendScale; // 0xa4            
            uint8_t _pad00a5[0x3]; // 0xa5
            source2sdk::animgraphlib::AnimValueSource m_blendValueSource; // 0xa8            
            source2sdk::animgraphlib::CAnimParamHandle m_hBlendParameter; // 0xac            
            uint8_t _pad00ae[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBoneMaskUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CBoneMaskUpdateNode) == 0xb0);
    };
};
