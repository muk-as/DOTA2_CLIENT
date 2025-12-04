#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleModelInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

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
        class C_OP_RenderSimpleModelCollection : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyStartGroup "Orientation"
            // metadata: MPropertyFriendlyName "center mesh"
            // metadata: MPropertySortPriority "750"
            bool m_bCenterOffset; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyStartGroup "Model"
            // metadata: MPropertyFriendlyName "model"
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hModel;
            char m_hModel[0x_]; // 0x_            
            // metadata: MPropertyFriendlyName "input model override"
            source2sdk::particleslib::CParticleModelInput m_modelInput; // 0x_            
            // metadata: MPropertyStartGroup "Rendering"
            // metadata: MPropertyFriendlyName "size cull scale"
            source2sdk::particleslib::CParticleCollectionFloatInput m_fSizeCullScale; // 0x_            
            // metadata: MPropertyFriendlyName "disable shadows"
            bool m_bDisableShadows; // 0x_            
            // metadata: MPropertyFriendlyName "disable motion blur"
            bool m_bDisableMotionBlur; // 0x_            
            // metadata: MPropertyFriendlyName "accept decals"
            bool m_bAcceptsDecals; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "render filter"
            source2sdk::particleslib::CPerParticleFloatInput m_fDrawFilter; // 0x_            
            // metadata: MPropertyFriendlyName "angular velocity attribute (improves motion blur)"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nAngularVelocityField; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderSimpleModelCollection because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderSimpleModelCollection) == 0x_);
    };
};
