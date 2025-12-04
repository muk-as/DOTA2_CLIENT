#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPoseNode_CDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
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
        class CNmBlend2DNode_CDefinition : public source2sdk::animlib::CNmPoseNode_CDefinition
        {
        public:
            // m_sourceNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<std::int16_t,5> m_sourceNodeIndices;
            char m_sourceNodeIndices[0x_]; // 0x_            
            std::int16_t m_nInputParameterNodeIdx0; // 0x_            
            std::int16_t m_nInputParameterNodeIdx1; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_values has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<Vector2D,10> m_values;
            char m_values[0x_]; // 0x_            
            // m_indices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<std::uint8_t,30> m_indices;
            char m_indices[0x_]; // 0x_            
            // m_hullIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<std::uint8_t,10> m_hullIndices;
            char m_hullIndices[0x_]; // 0x_            
            bool m_bAllowLooping; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmBlend2DNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmBlend2DNode_CDefinition) == 0x_);
    };
};
