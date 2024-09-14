#pragma once
#include "source2sdk/animgraphlib/CAnimationGraphVisualizerPrimitiveBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x70
    // Has VTable
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimationGraphVisualizerAxis : public animgraphlib::CAnimationGraphVisualizerPrimitiveBase
    {
    public:
        CTransform m_xWsTransform; // 0x40        
        float m_flAxisSize; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x64[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAnimationGraphVisualizerAxis because it is not a standard-layout class
    static_assert(sizeof(CAnimationGraphVisualizerAxis) == 0x70);
};
