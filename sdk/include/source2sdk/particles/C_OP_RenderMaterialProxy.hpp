#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/MaterialProxyType_t.hpp"
#include "source2sdk/particles/MaterialVariable_t.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
    // Size: 0xb90
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderMaterialProxy : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyFriendlyName "Control Point for Model"
        int32_t m_nMaterialControlPoint; // 0x210        
        // metadata: MPropertyFriendlyName "proxy type"
        particles::MaterialProxyType_t m_nProxyType; // 0x214        
        // metadata: MPropertyFriendlyName "material variables"
        // metadata: MPropertyAutoExpandSelf
        // m_MaterialVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::MaterialVariable_t> m_MaterialVars;
        char m_MaterialVars[0x18]; // 0x218        
        // metadata: MPropertyFriendlyName "material override"
        // m_hOverrideMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hOverrideMaterial;
        char m_hOverrideMaterial[0x8]; // 0x230        
        // metadata: MPropertyFriendlyName "material override enable"
        particleslib::CParticleCollectionFloatInput m_flMaterialOverrideEnabled; // 0x238        
        // metadata: MPropertyFriendlyName "model tint"
        particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x398        
        // metadata: MPropertyFriendlyName "model alpha"
        particleslib::CPerParticleFloatInput m_flAlpha; // 0xa10        
        // metadata: MPropertyFriendlyName "model tint blend type"
        particles::ParticleColorBlendType_t m_nColorBlendType; // 0xb70        
        [[maybe_unused]] std::uint8_t pad_0xb74[0x1c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderMaterialProxy because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderMaterialProxy) == 0xb90);
};
