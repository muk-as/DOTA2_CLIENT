#pragma once
#include "source2sdk/animgraphlib/IKChannelMode.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct IKDemoCaptureSettings_t
    {
    public:
        // metadata: MPropertyFriendlyName "Target Parent"
        // metadata: MPropertyAttributeChoiceName "Bone"
        CUtlString m_parentBoneName; // 0x0        
        // metadata: MPropertyFriendlyName "Solver Mode"
        // metadata: MPropertyAttrChangeCallback
        animgraphlib::IKChannelMode m_eMode; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // metadata: MPropertyFriendlyName "IK Chain"
        // metadata: MPropertyAttributeChoiceName "IKChain"
        // metadata: MPropertyAttrStateCallback
        CUtlString m_ikChainName; // 0x10        
        // metadata: MPropertyFriendlyName "Start Bone"
        // metadata: MPropertyAttributeChoiceName "Bone"
        // metadata: MPropertyAttrStateCallback
        CUtlString m_oneBoneStart; // 0x18        
        // metadata: MPropertyFriendlyName "End Bone"
        // metadata: MPropertyAttributeChoiceName "Bone"
        // metadata: MPropertyAttrStateCallback
        CUtlString m_oneBoneEnd; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(IKDemoCaptureSettings_t, m_parentBoneName) == 0x0);
    static_assert(offsetof(IKDemoCaptureSettings_t, m_eMode) == 0x8);
    static_assert(offsetof(IKDemoCaptureSettings_t, m_ikChainName) == 0x10);
    static_assert(offsetof(IKDemoCaptureSettings_t, m_oneBoneStart) == 0x18);
    static_assert(offsetof(IKDemoCaptureSettings_t, m_oneBoneEnd) == 0x20);
    
    static_assert(sizeof(IKDemoCaptureSettings_t) == 0x28);
};
