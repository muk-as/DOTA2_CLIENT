#pragma once
#include "source2sdk/animationsystem/AnimPoseControl.hpp"
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"
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
    // Standard-layout class: false
    // Size: 0x70
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Ragdoll Tag"
    #pragma pack(push, 1)
    class CRagdollAnimTag : public animgraphlib::CAnimTagBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x50[0x8]; // 0x50
        // metadata: MPropertyFriendlyName "Pose Control"
        animationsystem::AnimPoseControl m_nPoseControl; // 0x58        
        // metadata: MPropertyFriendlyName "Frequency"
        // metadata: MPropertyAttributeRange "0 30"
        float m_flFrequency; // 0x5c        
        // metadata: MPropertyFriendlyName "Damping Ratio"
        // metadata: MPropertyAttributeRange "0 2"
        float m_flDampingRatio; // 0x60        
        // metadata: MPropertyFriendlyName "Decay Duration"
        // metadata: MPropertyAttributeRange "-1 1000"
        float m_flDecayDuration; // 0x64        
        // metadata: MPropertyFriendlyName "Decay Bias"
        // metadata: MPropertyAttributeRange "0 1"
        float m_flDecayBias; // 0x68        
        // metadata: MPropertyFriendlyName "Destroy"
        bool m_bDestroy; // 0x6c        
        [[maybe_unused]] std::uint8_t pad_0x6d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRagdollAnimTag because it is not a standard-layout class
    static_assert(sizeof(CRagdollAnimTag) == 0x70);
};
