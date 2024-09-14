#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
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
    // Size: 0x330
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_StopAfterCPDuration : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "duration at which to stop"
        particleslib::CParticleCollectionFloatInput m_flDuration; // 0x1c8        
        // metadata: MPropertyFriendlyName "destroy all particles immediately"
        bool m_bDestroyImmediately; // 0x328        
        // metadata: MPropertyFriendlyName "play end cap effect"
        bool m_bPlayEndCap; // 0x329        
        [[maybe_unused]] std::uint8_t pad_0x32a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_StopAfterCPDuration because it is not a standard-layout class
    static_assert(sizeof(C_OP_StopAfterCPDuration) == 0x330);
};
