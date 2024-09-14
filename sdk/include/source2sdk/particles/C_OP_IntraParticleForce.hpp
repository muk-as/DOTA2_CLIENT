#pragma once
#include "source2sdk/particles/CParticleFunctionForce.hpp"
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
    // Size: 0x1f0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_IntraParticleForce : public particles::CParticleFunctionForce
    {
    public:
        // metadata: MPropertyFriendlyName "min attraction distance"
        float m_flAttractionMinDistance; // 0x1d0        
        // metadata: MPropertyFriendlyName "max attraction distance"
        float m_flAttractionMaxDistance; // 0x1d4        
        // metadata: MPropertyFriendlyName "max attraction force"
        float m_flAttractionMaxStrength; // 0x1d8        
        // metadata: MPropertyFriendlyName "min repulsion distance"
        float m_flRepulsionMinDistance; // 0x1dc        
        // metadata: MPropertyFriendlyName "max repulsion distance"
        float m_flRepulsionMaxDistance; // 0x1e0        
        // metadata: MPropertyFriendlyName "max repulsion force"
        float m_flRepulsionMaxStrength; // 0x1e4        
        // metadata: MPropertyFriendlyName "use aabbtree"
        bool m_bUseAABB; // 0x1e8        
        // metadata: MPropertyFriendlyName "thread pairwise collision"
        bool m_bThreadIt; // 0x1e9        
        [[maybe_unused]] std::uint8_t pad_0x1ea[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_IntraParticleForce because it is not a standard-layout class
    static_assert(sizeof(C_OP_IntraParticleForce) == 0x1f0);
};
