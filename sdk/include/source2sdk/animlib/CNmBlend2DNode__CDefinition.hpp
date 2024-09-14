#pragma once
#include "source2sdk/animlib/CNmPoseNode__CDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x110
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmBlend2DNode__CDefinition : public animlib::CNmPoseNode__CDefinition
    {
    public:
        // m_sourceNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<int16_t,5> m_sourceNodeIndices;
        char m_sourceNodeIndices[0x28]; // 0x10        
        int16_t m_nInputParameterNodeIdx0; // 0x38        
        int16_t m_nInputParameterNodeIdx1; // 0x3a        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4]; // 0x3c
        // m_values has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<Vector2D,10> m_values;
        char m_values[0x68]; // 0x40        
        // m_indices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<uint8_t,30> m_indices;
        char m_indices[0x38]; // 0xa8        
        // m_hullIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<uint8_t,10> m_hullIndices;
        char m_hullIndices[0x28]; // 0xe0        
        bool m_bAllowLooping; // 0x108        
        [[maybe_unused]] std::uint8_t pad_0x109[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmBlend2DNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmBlend2DNode__CDefinition) == 0x110);
};
