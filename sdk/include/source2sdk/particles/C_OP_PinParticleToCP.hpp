#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticlePinDistance_t.hpp"
#include "source2sdk/particles/ParticleSelection_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
    // Size: 0x1098
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_PinParticleToCP : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        // metadata: MPropertyFriendlyName "offset"
        particleslib::CParticleCollectionVecInput m_vecOffset; // 0x1c8        
        // metadata: MPropertyFriendlyName "offset in local space"
        bool m_bOffsetLocal; // 0x840        
        [[maybe_unused]] std::uint8_t pad_0x841[0x3]; // 0x841
        // metadata: MPropertyFriendlyName "particle to use"
        particles::ParticleSelection_t m_nParticleSelection; // 0x844        
        // metadata: MPropertyFriendlyName "particle number/offset"
        particleslib::CParticleCollectionFloatInput m_nParticleNumber; // 0x848        
        // metadata: MPropertyFriendlyName "pin break type"
        particles::ParticlePinDistance_t m_nPinBreakType; // 0x9a8        
        [[maybe_unused]] std::uint8_t pad_0x9ac[0x4]; // 0x9ac
        // metadata: MPropertyFriendlyName "break length %"
        particleslib::CParticleCollectionFloatInput m_flBreakDistance; // 0x9b0        
        // metadata: MPropertyFriendlyName "break speed"
        particleslib::CParticleCollectionFloatInput m_flBreakSpeed; // 0xb10        
        // metadata: MPropertyFriendlyName "break age"
        particleslib::CParticleCollectionFloatInput m_flAge; // 0xc70        
        // metadata: MPropertyFriendlyName "break comparison control point 1"
        int32_t m_nBreakControlPointNumber; // 0xdd0        
        // metadata: MPropertyFriendlyName "break comparison control point 2"
        int32_t m_nBreakControlPointNumber2; // 0xdd4        
        // metadata: MPropertyFriendlyName "break value"
        particleslib::CParticleCollectionFloatInput m_flBreakValue; // 0xdd8        
        // metadata: MPropertyFriendlyName "Interpolation"
        particleslib::CPerParticleFloatInput m_flInterpolation; // 0xf38        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_PinParticleToCP because it is not a standard-layout class
    static_assert(sizeof(C_OP_PinParticleToCP) == 0x1098);
};
