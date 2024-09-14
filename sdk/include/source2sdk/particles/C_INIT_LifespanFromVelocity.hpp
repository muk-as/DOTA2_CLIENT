#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
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
    // Size: 0x280
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_LifespanFromVelocity : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "bias distance"
        // metadata: MVectorIsCoordinate
        Vector m_vecComponentScale; // 0x1c8        
        // metadata: MPropertyFriendlyName "trace offset"
        float m_flTraceOffset; // 0x1d4        
        // metadata: MPropertyFriendlyName "maximum trace length"
        float m_flMaxTraceLength; // 0x1d8        
        // metadata: MPropertyFriendlyName "trace recycle tolerance"
        float m_flTraceTolerance; // 0x1dc        
        // metadata: MPropertyFriendlyName "maximum points to cache"
        int32_t m_nMaxPlanes; // 0x1e0        
        [[maybe_unused]] std::uint8_t pad_0x1e4[0x4]; // 0x1e4
        // metadata: MPropertyFriendlyName "trace collision group"
        char m_CollisionGroupName[128]; // 0x1e8        
        // metadata: MPropertyFriendlyName "Trace Set"
        particles::ParticleTraceSet_t m_nTraceSet; // 0x268        
        [[maybe_unused]] std::uint8_t pad_0x26c[0xc]; // 0x26c
        // metadata: MPropertyFriendlyName "collide with water"
        bool m_bIncludeWater; // 0x278        
        [[maybe_unused]] std::uint8_t pad_0x279[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_LifespanFromVelocity because it is not a standard-layout class
    static_assert(sizeof(C_INIT_LifespanFromVelocity) == 0x280);
};
