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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x3090
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
            bool m_bEnableFadingAndClamping; // 0x2c08            
            uint8_t _pad2c09[0x3]; // 0x2c09
            // metadata: MPropertyFriendlyName "minimum visual screen-size"
            // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
            float m_flMinSize; // 0x2c0c            
            // metadata: MPropertyFriendlyName "maximum visual screen-size"
            // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
            float m_flMaxSize; // 0x2c10            
            // metadata: MPropertyFriendlyName "start fade screen-size"
            // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
            float m_flStartFadeSize; // 0x2c14            
            // metadata: MPropertyFriendlyName "end fade and cull screen-size"
            // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
            float m_flEndFadeSize; // 0x2c18            
            // metadata: MPropertyFriendlyName "start fade dot product of normal vs view"
            // metadata: MPropertySortPriority "1000"
            float m_flStartFadeDot; // 0x2c1c            
            // metadata: MPropertyFriendlyName "end fade dot product of normal vs view"
            // metadata: MPropertySortPriority "1000"
            float m_flEndFadeDot; // 0x2c20            
            // metadata: MPropertyStartGroup "Rope Tesselation"
            // metadata: MPropertyFriendlyName "amount to taper the width of the trail end by"
            float m_flRadiusTaper; // 0x2c24            
            // metadata: MPropertyFriendlyName "minium number of quads per render segment"
            // metadata: MPropertySortPriority "850"
            std::int32_t m_nMinTesselation; // 0x2c28            
            // metadata: MPropertyFriendlyName "maximum number of quads per render segment"
            std::int32_t m_nMaxTesselation; // 0x2c2c            
            // metadata: MPropertyFriendlyName "tesselation resolution scale factor"
            float m_flTessScale; // 0x2c30            
            uint8_t _pad2c34[0x4]; // 0x2c34
            // metadata: MPropertyStartGroup "+Rope Global UV Controls"
            // metadata: MPropertyFriendlyName "global texture V World Size"
            // metadata: MPropertySortPriority "800"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flTextureVWorldSize; // 0x2c38            
            // metadata: MPropertyFriendlyName "global texture V Scroll Rate"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flTextureVScrollRate; // 0x2d98            
            // metadata: MPropertyFriendlyName "global texture V Offset"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flTextureVOffset; // 0x2ef8            
            // metadata: MPropertyFriendlyName "global texture V Params CP"
            std::int32_t m_nTextureVParamsCP; // 0x3058            
            // metadata: MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
            bool m_bClampV; // 0x305c            
            uint8_t _pad305d[0x3]; // 0x305d
            // metadata: MPropertyStartGroup "Rope Global UV Controls/CP Scaling"
            // metadata: MPropertyFriendlyName "scale CP start"
            std::int32_t m_nScaleCP1; // 0x3060            
            // metadata: MPropertyFriendlyName "scale CP end"
            std::int32_t m_nScaleCP2; // 0x3064            
            // metadata: MPropertyFriendlyName "scale V world size by CP distance"
            float m_flScaleVSizeByControlPointDistance; // 0x3068            
            // metadata: MPropertyFriendlyName "scale V scroll rate by CP distance"
            float m_flScaleVScrollByControlPointDistance; // 0x306c            
            // metadata: MPropertyFriendlyName "scale V offset by CP distance"
            float m_flScaleVOffsetByControlPointDistance; // 0x3070            
            uint8_t _pad3074[0x1]; // 0x3074
            // metadata: MPropertyStartGroup "Rope Global UV Controls"
            // metadata: MPropertyFriendlyName "Use scalar attribute for texture coordinate"
            bool m_bUseScalarForTextureCoordinate; // 0x3075            
            uint8_t _pad3076[0x2]; // 0x3076
            // metadata: MPropertyFriendlyName "scalar to use for texture coordinate"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            // metadata: MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
            source2sdk::particles::ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x3078            
            // metadata: MPropertyFriendlyName "scale value to map attribute to texture coordinate"
            // metadata: MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
            float m_flScalarAttributeTextureCoordScale; // 0x307c            
            // metadata: MPropertyStartGroup "Rope Order Controls"
            // metadata: MPropertyFriendlyName "reverse point order"
            // metadata: MPropertySortPriority "800"
            bool m_bReverseOrder; // 0x3080            
            // metadata: MPropertyFriendlyName "Closed loop"
            bool m_bClosedLoop; // 0x3081            
            uint8_t _pad3082[0x2]; // 0x3082
            // metadata: MPropertyStartGroup "Orientation"
            // metadata: MPropertyFriendlyName "orientation_type"
            // metadata: MPropertySortPriority "750"
            source2sdk::particles::ParticleOrientationChoiceList_t m_nOrientationType; // 0x3084            
            // metadata: MPropertyFriendlyName "attribute to use for normal"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            // metadata: MPropertySortPriority "750"
            // metadata: MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
            source2sdk::particles::ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x3088            
            // metadata: MPropertyStartGroup "Material"
            // metadata: MPropertyFriendlyName "draw as opaque"
            bool m_bDrawAsOpaque; // 0x308c            
            // metadata: MPropertyStartGroup "Orientation"
            // metadata: MPropertyFriendlyName "generate normals for cylinder"
            bool m_bGenerateNormals; // 0x308d            
            uint8_t _pad308e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderRopes because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderRopes) == 0x3090);
    };
};
