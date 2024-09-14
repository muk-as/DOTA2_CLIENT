#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/MaterialVariable_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"
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
    // Size: 0x678
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderBlobs : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyFriendlyName "cube width"
        particleslib::CParticleCollectionRendererFloatInput m_cubeWidth; // 0x210        
        // metadata: MPropertyFriendlyName "cutoff radius"
        particleslib::CParticleCollectionRendererFloatInput m_cutoffRadius; // 0x370        
        // metadata: MPropertyFriendlyName "render radius"
        particleslib::CParticleCollectionRendererFloatInput m_renderRadius; // 0x4d0        
        // metadata: MPropertyFriendlyName "(optional) vertex buffer size (k)"
        // metadata: MPropertyAttributeRange "0 1024"
        uint32_t m_nVertexCountKb; // 0x630        
        // metadata: MPropertyFriendlyName "(optional) index buffer size (k)"
        // metadata: MPropertyAttributeRange "0 1024"
        uint32_t m_nIndexCountKb; // 0x634        
        // metadata: MPropertyFriendlyName "scale CP (cube width/cutoff/render = x/y/z)"
        int32_t m_nScaleCP; // 0x638        
        [[maybe_unused]] std::uint8_t pad_0x63c[0x4]; // 0x63c
        // metadata: MPropertyFriendlyName "material variables"
        // metadata: MPropertyAutoExpandSelf
        // metadata: MPropertySortPriority "600"
        // m_MaterialVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::MaterialVariable_t> m_MaterialVars;
        char m_MaterialVars[0x18]; // 0x640        
        [[maybe_unused]] std::uint8_t pad_0x658[0x18]; // 0x658
        // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
        char m_hMaterial[0x8]; // 0x670        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderBlobs because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderBlobs) == 0x678);
};
