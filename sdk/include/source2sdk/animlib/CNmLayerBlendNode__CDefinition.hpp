#pragma once
#include "source2sdk/animlib/CNmLayerBlendNode__LayerDefinition_t.hpp"
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
    // Size: 0x48
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmLayerBlendNode__CDefinition : public animlib::CNmPoseNode__CDefinition
    {
    public:
        int16_t m_nBaseNodeIdx; // 0x10        
        bool m_bOnlySampleBaseRootMotion; // 0x12        
        [[maybe_unused]] std::uint8_t pad_0x13[0x5]; // 0x13
        // m_layerDefinition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVectorFixedGrowable<animlib::CNmLayerBlendNode__LayerDefinition_t,3> m_layerDefinition;
        char m_layerDefinition[0x30]; // 0x18        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmLayerBlendNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmLayerBlendNode__CDefinition) == 0x48);
};
