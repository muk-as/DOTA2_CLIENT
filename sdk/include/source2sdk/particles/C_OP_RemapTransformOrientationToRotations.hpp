#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x238
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RemapTransformOrientationToRotations : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "transform input"
        particleslib::CParticleTransformInput m_TransformInput; // 0x1c0        
        // metadata: MPropertyFriendlyName "offset pitch/yaw/roll"
        Vector m_vecRotation; // 0x228        
        // metadata: MPropertyFriendlyName "Use Quaternians Internally"
        bool m_bUseQuat; // 0x234        
        // metadata: MPropertyFriendlyName "Write normal instead of rotation"
        bool m_bWriteNormal; // 0x235        
        [[maybe_unused]] std::uint8_t pad_0x236[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapTransformOrientationToRotations because it is not a standard-layout class
    static_assert(sizeof(C_OP_RemapTransformOrientationToRotations) == 0x238);
};
