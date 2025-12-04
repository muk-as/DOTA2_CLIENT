#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/MaterialProxyType_t.hpp"
#include "source2sdk/particles/MaterialVariable_t.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
        class C_OP_RenderMaterialProxy : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "Control Point for Model"
            std::int32_t m_nMaterialControlPoint; // 0x_            
            // metadata: MPropertyFriendlyName "proxy type"
            source2sdk::particles::MaterialProxyType_t m_nProxyType; // 0x_            
            // metadata: MPropertyFriendlyName "material variables"
            // metadata: MPropertyAutoExpandSelf
            // m_MaterialVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::MaterialVariable_t> m_MaterialVars;
            char m_MaterialVars[0x_]; // 0x_            
            // metadata: MPropertyFriendlyName "material override"
            // m_hOverrideMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hOverrideMaterial;
            char m_hOverrideMaterial[0x_]; // 0x_            
            // metadata: MPropertyFriendlyName "material override enable"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flMaterialOverrideEnabled; // 0x_            
            // metadata: MPropertyFriendlyName "model tint"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x_            
            // metadata: MPropertyFriendlyName "model alpha"
            source2sdk::particleslib::CPerParticleFloatInput m_flAlpha; // 0x_            
            // metadata: MPropertyFriendlyName "model tint blend type"
            source2sdk::particles::ParticleColorBlendType_t m_nColorBlendType; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderMaterialProxy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderMaterialProxy) == 0x_);
    };
};
