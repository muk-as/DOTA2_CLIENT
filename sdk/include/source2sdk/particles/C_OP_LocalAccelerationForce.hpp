#pragma once
#include "source2sdk/particles/CParticleFunctionForce.hpp"
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
    // Size: 0x850
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_LocalAccelerationForce : public particles::CParticleFunctionForce
    {
    public:
        // metadata: MPropertyFriendlyName "local space control point"
        int32_t m_nCP; // 0x1d0        
        // metadata: MPropertyFriendlyName "scale control point"
        int32_t m_nScaleCP; // 0x1d4        
        // metadata: MPropertyFriendlyName "local space acceleration"
        particleslib::CParticleCollectionVecInput m_vecAccel; // 0x1d8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_LocalAccelerationForce because it is not a standard-layout class
    static_assert(sizeof(C_OP_LocalAccelerationForce) == 0x850);
};
