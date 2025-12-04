#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmLayerBlendNode_LayerDefinition_t.hpp"
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
        class CNmLayerBlendNode_CDefinition : public source2sdk::animlib::CNmPoseNode_CDefinition
        {
        public:
            std::int16_t m_nBaseNodeIdx; // 0x_            
            bool m_bOnlySampleBaseRootMotion; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_layerDefinition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t,3> m_layerDefinition;
            char m_layerDefinition[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmLayerBlendNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmLayerBlendNode_CDefinition) == 0x_);
    };
};
