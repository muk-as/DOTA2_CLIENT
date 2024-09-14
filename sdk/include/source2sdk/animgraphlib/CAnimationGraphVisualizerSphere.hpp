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
    // Size: 0x60
    // Has VTable
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimationGraphVisualizerSphere : public animgraphlib::CAnimationGraphVisualizerPrimitiveBase
    {
    public:
        VectorAligned m_vWsPosition; // 0x40        
        float m_flRadius; // 0x50        
        Color m_Color; // 0x54        
        [[maybe_unused]] std::uint8_t pad_0x58[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAnimationGraphVisualizerSphere because it is not a standard-layout class
    static_assert(sizeof(CAnimationGraphVisualizerSphere) == 0x60);
};
