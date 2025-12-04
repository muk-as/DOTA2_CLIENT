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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CNmLayerBlendNode_LayerDefinition_t
        {
        public:
            std::int16_t m_nInputNodeIdx; // 0x_            
            std::int16_t m_nWeightValueNodeIdx; // 0x_            
            std::int16_t m_nBoneMaskValueNodeIdx; // 0x_            
            std::int16_t m_nRootMotionWeightValueNodeIdx; // 0x_            
            bool m_bIsSynchronized; // 0x_            
            bool m_bIgnoreEvents; // 0x_            
            bool m_bIsStateMachineLayer; // 0x_            
            source2sdk::animlib::NmPoseBlendMode_t m_blendMode; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t, m_nInputNodeIdx) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t, m_nWeightValueNodeIdx) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t, m_nBoneMaskValueNodeIdx) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t, m_nRootMotionWeightValueNodeIdx) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t, m_bIsSynchronized) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t, m_bIgnoreEvents) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t, m_bIsStateMachineLayer) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t, m_blendMode) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::CNmLayerBlendNode_LayerDefinition_t) == 0x_);
    };
};
