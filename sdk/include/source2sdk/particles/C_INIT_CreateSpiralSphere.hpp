#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
    // Size: 0x1e8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_CreateSpiralSphere : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1c8        
        // metadata: MPropertyFriendlyName "override CP (X/Y/Z *= radius/density/speed)"
        int32_t m_nOverrideCP; // 0x1cc        
        // metadata: MPropertyFriendlyName "density"
        int32_t m_nDensity; // 0x1d0        
        // metadata: MPropertyFriendlyName "initial radius"
        float m_flInitialRadius; // 0x1d4        
        // metadata: MPropertyFriendlyName "min initial speed"
        float m_flInitialSpeedMin; // 0x1d8        
        // metadata: MPropertyFriendlyName "max initial speed"
        float m_flInitialSpeedMax; // 0x1dc        
        // metadata: MPropertyFriendlyName "use particle count as density scale"
        bool m_bUseParticleCount; // 0x1e0        
        [[maybe_unused]] std::uint8_t pad_0x1e1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_CreateSpiralSphere because it is not a standard-layout class
    static_assert(sizeof(C_INIT_CreateSpiralSphere) == 0x1e8);
};
