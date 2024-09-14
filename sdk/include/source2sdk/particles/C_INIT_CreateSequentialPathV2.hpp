#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/CPathParameters.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x4e0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MParticleMinVersion "8"
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_CreateSequentialPathV2 : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "maximum distance"
        particleslib::CPerParticleFloatInput m_fMaxDistance; // 0x1c8        
        // metadata: MPropertyFriendlyName "particles to map from start to end"
        particleslib::CParticleCollectionFloatInput m_flNumToAssign; // 0x328        
        // metadata: MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
        bool m_bLoop; // 0x488        
        // metadata: MPropertyFriendlyName "use sequential CP pairs between start and end point"
        bool m_bCPPairs; // 0x489        
        // metadata: MPropertyFriendlyName "save offset"
        bool m_bSaveOffset; // 0x48a        
        [[maybe_unused]] std::uint8_t pad_0x48b[0x5]; // 0x48b
        particles::CPathParameters m_PathParams; // 0x490        
        [[maybe_unused]] std::uint8_t pad_0x4d0[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_CreateSequentialPathV2 because it is not a standard-layout class
    static_assert(sizeof(C_INIT_CreateSequentialPathV2) == 0x4e0);
};
