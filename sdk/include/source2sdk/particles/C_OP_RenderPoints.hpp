#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
    // Size: 0x218
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MObsoleteParticleFunction
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderPoints : public particles::CParticleFunctionRenderer
    {
    public:
        // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
        char m_hMaterial[0x8]; // 0x210        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderPoints because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderPoints) == 0x218);
};
