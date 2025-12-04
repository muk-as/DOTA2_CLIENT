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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBoneMaskUpdateNode : public source2sdk::animgraphlib::CBinaryUpdateNode
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nWeightListIndex; // 0x_            
            float m_flRootMotionBlend; // 0x_            
            source2sdk::animgraphlib::BoneMaskBlendSpace m_blendSpace; // 0x_            
            source2sdk::animgraphlib::BinaryNodeChildOption m_footMotionTiming; // 0x_            
            bool m_bUseBlendScale; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::AnimValueSource m_blendValueSource; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hBlendParameter; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBoneMaskUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CBoneMaskUpdateNode) == 0x_);
    };
};
