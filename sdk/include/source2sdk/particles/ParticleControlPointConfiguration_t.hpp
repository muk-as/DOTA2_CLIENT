#pragma once
#include "source2sdk/particles/ParticleControlPointDriver_t.hpp"
#include "source2sdk/particles/ParticlePreviewState_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x88
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ParticleControlPointConfiguration_t
    {
    public:
        CUtlString m_name; // 0x0        
        // m_drivers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::ParticleControlPointDriver_t> m_drivers;
        char m_drivers[0x18]; // 0x8        
        particles::ParticlePreviewState_t m_previewState; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ParticleControlPointConfiguration_t, m_name) == 0x0);
    static_assert(offsetof(ParticleControlPointConfiguration_t, m_drivers) == 0x8);
    static_assert(offsetof(ParticleControlPointConfiguration_t, m_previewState) == 0x20);
    
    static_assert(sizeof(ParticleControlPointConfiguration_t) == 0x88);
};
