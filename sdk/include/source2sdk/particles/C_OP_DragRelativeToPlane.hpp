#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
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
    // Size: 0xb08
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_DragRelativeToPlane : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "dampening"
        particleslib::CParticleCollectionFloatInput m_flDragAtPlane; // 0x1c0        
        // metadata: MPropertyFriendlyName "falloff"
        particleslib::CParticleCollectionFloatInput m_flFalloff; // 0x320        
        // metadata: MPropertyFriendlyName "dampen on only one side of plane"
        bool m_bDirectional; // 0x480        
        [[maybe_unused]] std::uint8_t pad_0x481[0x7]; // 0x481
        // metadata: MPropertyFriendlyName "plane normal"
        // metadata: MVectorIsCoordinate
        particleslib::CParticleCollectionVecInput m_vecPlaneNormal; // 0x488        
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb04[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_DragRelativeToPlane because it is not a standard-layout class
    static_assert(sizeof(C_OP_DragRelativeToPlane) == 0xb08);
};
