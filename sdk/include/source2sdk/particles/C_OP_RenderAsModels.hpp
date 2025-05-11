#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ModelReference_t.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"

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
        // Size: 0x248
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderAsModels : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "models"
            // metadata: MParticleRequireDefaultArrayEntry
            // m_ModelList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::ModelReference_t> m_ModelList;
            char m_ModelList[0x18]; // 0x210            
            uint8_t _pad0228[0x4]; // 0x228
            // metadata: MPropertyFriendlyName "scale factor for radius"
            float m_flModelScale; // 0x22c            
            // metadata: MPropertyFriendlyName "scale model to match particle size"
            bool m_bFitToModelSize; // 0x230            
            // metadata: MPropertyFriendlyName "non-uniform scaling"
            bool m_bNonUniformScaling; // 0x231            
            uint8_t _pad0232[0x2]; // 0x232
            // metadata: MPropertyFriendlyName "X axis scaling scalar field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nXAxisScalingAttribute; // 0x234            
            // metadata: MPropertyFriendlyName "Y axis scaling scalar field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nYAxisScalingAttribute; // 0x238            
            // metadata: MPropertyFriendlyName "Z axis scaling scalar field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nZAxisScalingAttribute; // 0x23c            
            // metadata: MPropertyFriendlyName "model size cull bloat"
            // metadata: MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
            std::int32_t m_nSizeCullBloat; // 0x240            
            uint8_t _pad0244[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderAsModels because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderAsModels) == 0x248);
    };
};
