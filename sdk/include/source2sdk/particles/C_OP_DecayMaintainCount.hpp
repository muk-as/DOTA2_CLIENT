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
    // Size: 0x338
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_DecayMaintainCount : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "count to maintain"
        int32_t m_nParticlesToMaintain; // 0x1c0        
        // metadata: MPropertyFriendlyName "decay delay"
        float m_flDecayDelay; // 0x1c4        
        // metadata: MPropertyFriendlyName "snapshot control point for count"
        int32_t m_nSnapshotControlPoint; // 0x1c8        
        // metadata: MPropertyFriendlyName "decay on lifespan"
        bool m_bLifespanDecay; // 0x1cc        
        [[maybe_unused]] std::uint8_t pad_0x1cd[0x3]; // 0x1cd
        // metadata: MPropertyFriendlyName "total count scale"
        particleslib::CParticleCollectionFloatInput m_flScale; // 0x1d0        
        // metadata: MPropertyFriendlyName "kill newest instead of oldest"
        bool m_bKillNewest; // 0x330        
        [[maybe_unused]] std::uint8_t pad_0x331[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_DecayMaintainCount because it is not a standard-layout class
    static_assert(sizeof(C_OP_DecayMaintainCount) == 0x338);
};
