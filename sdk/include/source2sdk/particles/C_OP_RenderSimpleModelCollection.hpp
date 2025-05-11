#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleModelInput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x3f8
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
            bool m_bCenterOffset; // 0x210            
            uint8_t _pad0211[0x7]; // 0x211
            // metadata: MPropertyStartGroup "Model"
            // metadata: MPropertyFriendlyName "model"
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hModel;
            char m_hModel[0x8]; // 0x218            
            // metadata: MPropertyFriendlyName "input model override"
            source2sdk::particleslib::CParticleModelInput m_modelInput; // 0x220            
            // metadata: MPropertyStartGroup "Rendering"
            // metadata: MPropertyFriendlyName "size cull scale"
            source2sdk::particleslib::CParticleCollectionFloatInput m_fSizeCullScale; // 0x280            
            // metadata: MPropertyFriendlyName "disable shadows"
            bool m_bDisableShadows; // 0x3e0            
            // metadata: MPropertyFriendlyName "disable motion blur"
            bool m_bDisableMotionBlur; // 0x3e1            
            // metadata: MPropertyFriendlyName "accept decals"
            bool m_bAcceptsDecals; // 0x3e2            
            uint8_t _pad03e3[0x1]; // 0x3e3
            // metadata: MPropertyFriendlyName "angular velocity attribute (improves motion blur)"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nAngularVelocityField; // 0x3e4            
            uint8_t _pad03e8[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderSimpleModelCollection because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderSimpleModelCollection) == 0x3f8);
    };
};
