#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/NmPoseBlendMode_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x2
        // Alignment: 0x2
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CNmLayerBlendNode_LayerDefinition_t
        {
        public:
            std::int16_t m_nInputNodeIdx; // 0x0            
            std::int16_t m_nWeightValueNodeIdx; // 0x2            
            std::int16_t m_nBoneMaskValueNodeIdx; // 0x4            
            std::int16_t m_nRootMotionWeightValueNodeIdx; // 0x6            
            bool m_bIsSynchronized; // 0x8            
            bool m_bIgnoreEvents; // 0x9            
            bool m_bIsStateMachineLayer; // 0xa            
            source2sdk::animlib::NmPoseBlendMode_t m_blendMode; // 0xb            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t, m_nInputNodeIdx) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t, m_nWeightValueNodeIdx) == 0x2);
        static_assert(offsetof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t, m_nBoneMaskValueNodeIdx) == 0x4);
        static_assert(offsetof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t, m_nRootMotionWeightValueNodeIdx) == 0x6);
        static_assert(offsetof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t, m_bIsSynchronized) == 0x8);
        static_assert(offsetof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t, m_bIgnoreEvents) == 0x9);
        static_assert(offsetof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t, m_bIsStateMachineLayer) == 0xa);
        static_assert(offsetof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t, m_blendMode) == 0xb);
        
        static_assert(sizeof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t) == 0xc);
    };
};
