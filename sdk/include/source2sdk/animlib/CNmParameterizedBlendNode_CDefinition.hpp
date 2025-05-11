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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x40
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmParameterizedBlendNode_CDefinition : public source2sdk::animlib::CNmPoseNode_CDefinition
        {
        public:
            // m_sourceNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<std::int16_t,5> m_sourceNodeIndices;
            char m_sourceNodeIndices[0x28]; // 0x10            
            std::int16_t m_nInputParameterValueNodeIdx; // 0x38            
            bool m_bAllowLooping; // 0x3a            
            uint8_t _pad003b[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmParameterizedBlendNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmParameterizedBlendNode_CDefinition) == 0x40);
    };
};
