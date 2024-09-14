#pragma once
#include "source2sdk/animgraphlib/IKBoneNameAndIndex_t.hpp"
#include "source2sdk/animgraphlib/IKTargetCoordinateSystem.hpp"
#include "source2sdk/animgraphlib/IKTargetSource.hpp"
#include "source2sdk/modellib/AnimParamID.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    #pragma pack(push, 1)
    struct IKTargetSettings_t
    {
    public:
        // metadata: MPropertyFriendlyName "Target Source"
        // metadata: MPropertyAttrChangeCallback
        animgraphlib::IKTargetSource m_TargetSource; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // metadata: MPropertyFriendlyName "Bone"
        // metadata: MPropertyAttrStateCallback
        animgraphlib::IKBoneNameAndIndex_t m_Bone; // 0x8        
        // metadata: MPropertyFriendlyName "Animgraph Position Parameter"
        // metadata: MPropertyAttributeChoiceName "VectorParameter"
        // metadata: MPropertyAttrStateCallback
        modellib::AnimParamID m_AnimgraphParameterNamePosition; // 0x18        
        // metadata: MPropertyFriendlyName "Animgraph Orientation Parameter"
        // metadata: MPropertyAttributeChoiceName "QuaternionParameter"
        // metadata: MPropertyAttrStateCallback
        modellib::AnimParamID m_AnimgraphParameterNameOrientation; // 0x1c        
        // metadata: MPropertyFriendlyName "Target Coords"
        // metadata: MPropertyAttrStateCallback
        animgraphlib::IKTargetCoordinateSystem m_TargetCoordSystem; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x24[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(IKTargetSettings_t, m_TargetSource) == 0x0);
    static_assert(offsetof(IKTargetSettings_t, m_Bone) == 0x8);
    static_assert(offsetof(IKTargetSettings_t, m_AnimgraphParameterNamePosition) == 0x18);
    static_assert(offsetof(IKTargetSettings_t, m_AnimgraphParameterNameOrientation) == 0x1c);
    static_assert(offsetof(IKTargetSettings_t, m_TargetCoordSystem) == 0x20);
    
    static_assert(sizeof(IKTargetSettings_t) == 0x28);
};
