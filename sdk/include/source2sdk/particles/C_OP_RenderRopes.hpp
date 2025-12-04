#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CBaseRendererSource2.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleOrientationChoiceList_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"

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
        class C_OP_RenderRopes : public source2sdk::particles::CBaseRendererSource2
        {
        public:
            // metadata: MPropertyStartGroup "Screenspace Fading and culling"
            // metadata: MPropertyFriendlyName "enable fading and clamping"
            // metadata: MPropertySortPriority "1000"
            bool m_bEnableFadingAndClamping; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "minimum visual screen-size"
            // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
            float m_flMinSize; // 0x_            
            // metadata: MPropertyFriendlyName "maximum visual screen-size"
            // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
            float m_flMaxSize; // 0x_            
            // metadata: MPropertyFriendlyName "start fade screen-size"
            // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
            float m_flStartFadeSize; // 0x_            
            // metadata: MPropertyFriendlyName "end fade and cull screen-size"
            // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
            float m_flEndFadeSize; // 0x_            
            // metadata: MPropertyFriendlyName "start fade dot product of normal vs view"
            // metadata: MPropertySortPriority "1000"
            float m_flStartFadeDot; // 0x_            
            // metadata: MPropertyFriendlyName "end fade dot product of normal vs view"
            // metadata: MPropertySortPriority "1000"
            float m_flEndFadeDot; // 0x_            
            // metadata: MPropertyStartGroup "Rope Tesselation"
            // metadata: MPropertyFriendlyName "amount to taper the width of the trail end by"
            float m_flRadiusTaper; // 0x_            
            // metadata: MPropertyFriendlyName "minium number of quads per render segment"
            // metadata: MPropertySortPriority "850"
            std::int32_t m_nMinTesselation; // 0x_            
            // metadata: MPropertyFriendlyName "maximum number of quads per render segment"
            std::int32_t m_nMaxTesselation; // 0x_            
            // metadata: MPropertyFriendlyName "tesselation resolution scale factor"
            float m_flTessScale; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyStartGroup "+Rope Global UV Controls"
            // metadata: MPropertyFriendlyName "global texture V World Size"
            // metadata: MPropertySortPriority "800"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flTextureVWorldSize; // 0x_            
            // metadata: MPropertyFriendlyName "global texture V Scroll Rate"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flTextureVScrollRate; // 0x_            
            // metadata: MPropertyFriendlyName "global texture V Offset"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flTextureVOffset; // 0x_            
            // metadata: MPropertyFriendlyName "global texture V Params CP"
            std::int32_t m_nTextureVParamsCP; // 0x_            
            // metadata: MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
            bool m_bClampV; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyStartGroup "Rope Global UV Controls/CP Scaling"
            // metadata: MPropertyFriendlyName "scale CP start"
            std::int32_t m_nScaleCP1; // 0x_            
            // metadata: MPropertyFriendlyName "scale CP end"
            std::int32_t m_nScaleCP2; // 0x_            
            // metadata: MPropertyFriendlyName "scale V world size by CP distance"
            float m_flScaleVSizeByControlPointDistance; // 0x_            
            // metadata: MPropertyFriendlyName "scale V scroll rate by CP distance"
            float m_flScaleVScrollByControlPointDistance; // 0x_            
            // metadata: MPropertyFriendlyName "scale V offset by CP distance"
            float m_flScaleVOffsetByControlPointDistance; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyStartGroup "Rope Global UV Controls"
            // metadata: MPropertyFriendlyName "Use scalar attribute for texture coordinate"
            bool m_bUseScalarForTextureCoordinate; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "scalar to use for texture coordinate"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
            source2sdk::particles::ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x_            
            // metadata: MPropertyFriendlyName "scale value to map attribute to texture coordinate"
            // metadata: MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
            float m_flScalarAttributeTextureCoordScale; // 0x_            
            // metadata: MPropertyStartGroup "Rope Order Controls"
            // metadata: MPropertyFriendlyName "reverse point order"
            // metadata: MPropertySortPriority "800"
            bool m_bReverseOrder; // 0x_            
            // metadata: MPropertyFriendlyName "Closed loop"
            bool m_bClosedLoop; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyStartGroup "Orientation"
            // metadata: MPropertyFriendlyName "orientation_type"
            // metadata: MPropertySortPriority "750"
            source2sdk::particles::ParticleOrientationChoiceList_t m_nOrientationType; // 0x_            
            // metadata: MPropertyFriendlyName "attribute to use for normal"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            // metadata: MPropertySortPriority "750"
            // metadata: MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
            source2sdk::particles::ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x_            
            // metadata: MPropertyStartGroup "Material"
            // metadata: MPropertyFriendlyName "draw as opaque"
            bool m_bDrawAsOpaque; // 0x_            
            // metadata: MPropertyStartGroup "Orientation"
            // metadata: MPropertyFriendlyName "generate normals for cylinder"
            bool m_bGenerateNormals; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderRopes because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderRopes) == 0x_);
    };
};
