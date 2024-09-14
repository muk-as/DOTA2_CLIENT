#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
    // Size: 0x490
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_ConnectParentParticleToNearest : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "control point to set"
        int32_t m_nFirstControlPoint; // 0x1c0        
        // metadata: MPropertyFriendlyName "Second Control point to set"
        int32_t m_nSecondControlPoint; // 0x1c4        
        // metadata: MPropertyFriendlyName "Take radius into account for distance"
        bool m_bUseRadius; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1c9[0x7]; // 0x1c9
        // metadata: MPropertyFriendlyName "Radius scale for distance calc"
        // metadata: MPropertySuppressExpr "!m_bUseRadius"
        particleslib::CParticleCollectionFloatInput m_flRadiusScale; // 0x1d0        
        // metadata: MPropertyFriendlyName "Parent radius scale for distance calc"
        // metadata: MPropertySuppressExpr "!m_bUseRadius"
        particleslib::CParticleCollectionFloatInput m_flParentRadiusScale; // 0x330        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_ConnectParentParticleToNearest because it is not a standard-layout class
    static_assert(sizeof(C_OP_ConnectParentParticleToNearest) == 0x490);
};
