#pragma once
#include "source2sdk/animgraphlib/CAnimationGraphVisualizerPrimitiveType.hpp"
#include "source2sdk/modellib/AnimNodeID.hpp"
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
    // Standard-layout class: true
    // Size: 0x40
    // Has VTable
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimationGraphVisualizerPrimitiveBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        animgraphlib::CAnimationGraphVisualizerPrimitiveType m_Type; // 0x8        
        modellib::AnimNodeID m_OwningAnimNodePaths[11]; // 0xc        
        int32_t m_nOwningAnimNodePathCount; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimationGraphVisualizerPrimitiveBase, m_Type) == 0x8);
    static_assert(offsetof(CAnimationGraphVisualizerPrimitiveBase, m_OwningAnimNodePaths) == 0xc);
    static_assert(offsetof(CAnimationGraphVisualizerPrimitiveBase, m_nOwningAnimNodePathCount) == 0x38);
    
    static_assert(sizeof(CAnimationGraphVisualizerPrimitiveBase) == 0x40);
};
