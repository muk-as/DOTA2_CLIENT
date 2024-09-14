#pragma once
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/BinaryNodeChildOption.hpp"
#include "source2sdk/animgraphlib/BoneMaskBlendSpace.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CBinaryUpdateNode.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CBoneMaskUpdateNode : public animgraphlib::CBinaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x88[0x4]; // 0x88
        int32_t m_nWeightListIndex; // 0x8c        
        float m_flRootMotionBlend; // 0x90        
        animgraphlib::BoneMaskBlendSpace m_blendSpace; // 0x94        
        animgraphlib::BinaryNodeChildOption m_footMotionTiming; // 0x98        
        bool m_bUseBlendScale; // 0x9c        
        [[maybe_unused]] std::uint8_t pad_0x9d[0x3]; // 0x9d
        animgraphlib::AnimValueSource m_blendValueSource; // 0xa0        
        animgraphlib::CAnimParamHandle m_hBlendParameter; // 0xa4        
        [[maybe_unused]] std::uint8_t pad_0xa6[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBoneMaskUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CBoneMaskUpdateNode) == 0xa8);
};
