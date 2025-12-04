#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderGpuImplicit : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertySortPriority "-1"
            // metadata: MPropertyDescription "Honors the per-particle radius (multiplied by radius scale) but is more expensive to render.  Some particles with large radii can make things much costlier"
            bool m_bUsePerParticleRadius; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "(optional) vertex buffer size (k)"
            // metadata: MPropertyAttributeRange "0 1024"
            std::uint32_t m_nVertexCountKb; // 0x_            
            // metadata: MPropertyFriendlyName "(optional) index buffer size (k)"
            // metadata: MPropertyAttributeRange "0 2048"
            std::uint32_t m_nIndexCountKb; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_fGridSize; // 0x_            
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_fRadiusScale; // 0x_            
            // metadata: MPropertyAttributeRange ".1 .95"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_fIsosurfaceThreshold; // 0x_            
            // metadata: MPropertyFriendlyName "scale CP (grid size/particle radius/threshold = x/y/z)"
            std::int32_t m_nScaleCP; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
            char m_hMaterial[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderGpuImplicit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderGpuImplicit) == 0x_);
    };
};
