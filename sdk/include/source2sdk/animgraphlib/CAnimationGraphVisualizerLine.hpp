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
    class CAnimationGraphVisualizerLine : public animgraphlib::CAnimationGraphVisualizerPrimitiveBase
    {
    public:
        VectorAligned m_vWsPositionStart; // 0x40        
        VectorAligned m_vWsPositionEnd; // 0x50        
        Color m_Color; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x64[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAnimationGraphVisualizerLine because it is not a standard-layout class
    static_assert(sizeof(CAnimationGraphVisualizerLine) == 0x70);
};
