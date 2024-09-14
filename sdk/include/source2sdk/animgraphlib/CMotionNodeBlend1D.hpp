#pragma once
#include "source2sdk/animgraphlib/CMotionNode.hpp"
#include "source2sdk/animgraphlib/MotionBlendItem.hpp"
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
    // Size: 0x48
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMotionNodeBlend1D : public animgraphlib::CMotionNode
    {
    public:
        // m_blendItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::MotionBlendItem> m_blendItems;
        char m_blendItems[0x18]; // 0x28        
        int32_t m_nParamIndex; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMotionNodeBlend1D because it is not a standard-layout class
    static_assert(sizeof(CMotionNodeBlend1D) == 0x48);
};
