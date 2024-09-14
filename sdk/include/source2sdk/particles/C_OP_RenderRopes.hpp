#pragma once
#include "source2sdk/particles/CBaseRendererSource2.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleOrientationChoiceList_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"
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
    // Size: 0x2c70
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderRopes : public particles::CBaseRendererSource2
    {
    public:
        // metadata: MPropertyStartGroup "Screenspace Fading and culling"
        // metadata: MPropertyFriendlyName "enable fading and clamping"
        // metadata: MPropertySortPriority "1000"
        bool m_bEnableFadingAndClamping; // 0x27e8        
        [[maybe_unused]] std::uint8_t pad_0x27e9[0x3]; // 0x27e9
        // metadata: MPropertyFriendlyName "minimum visual screen-size"
        // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
        float m_flMinSize; // 0x27ec        
        // metadata: MPropertyFriendlyName "maximum visual screen-size"
        // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
        float m_flMaxSize; // 0x27f0        
        // metadata: MPropertyFriendlyName "start fade screen-size"
        // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
        float m_flStartFadeSize; // 0x27f4        
        // metadata: MPropertyFriendlyName "end fade and cull screen-size"
        // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
        float m_flEndFadeSize; // 0x27f8        
        // metadata: MPropertyFriendlyName "start fade dot product of normal vs view"
        // metadata: MPropertySortPriority "1000"
        float m_flStartFadeDot; // 0x27fc        
        // metadata: MPropertyFriendlyName "end fade dot product of normal vs view"
        // metadata: MPropertySortPriority "1000"
        float m_flEndFadeDot; // 0x2800        
        // metadata: MPropertyStartGroup "Rope Tesselation"
        // metadata: MPropertyFriendlyName "amount to taper the width of the trail end by"
        float m_flRadiusTaper; // 0x2804        
        // metadata: MPropertyFriendlyName "minium number of quads per render segment"
        // metadata: MPropertySortPriority "850"
        int32_t m_nMinTesselation; // 0x2808        
        // metadata: MPropertyFriendlyName "maximum number of quads per render segment"
        int32_t m_nMaxTesselation; // 0x280c        
        // metadata: MPropertyFriendlyName "tesselation resolution scale factor"
        float m_flTessScale; // 0x2810        
        [[maybe_unused]] std::uint8_t pad_0x2814[0x4]; // 0x2814
        // metadata: MPropertyStartGroup "+Rope Global UV Controls"
        // metadata: MPropertyFriendlyName "global texture V World Size"
        // metadata: MPropertySortPriority "800"
        particleslib::CParticleCollectionRendererFloatInput m_flTextureVWorldSize; // 0x2818        
        // metadata: MPropertyFriendlyName "global texture V Scroll Rate"
        particleslib::CParticleCollectionRendererFloatInput m_flTextureVScrollRate; // 0x2978        
        // metadata: MPropertyFriendlyName "global texture V Offset"
        particleslib::CParticleCollectionRendererFloatInput m_flTextureVOffset; // 0x2ad8        
        // metadata: MPropertyFriendlyName "global texture V Params CP"
        int32_t m_nTextureVParamsCP; // 0x2c38        
        // metadata: MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
        bool m_bClampV; // 0x2c3c        
        [[maybe_unused]] std::uint8_t pad_0x2c3d[0x3]; // 0x2c3d
        // metadata: MPropertyStartGroup "Rope Global UV Controls/CP Scaling"
        // metadata: MPropertyFriendlyName "scale CP start"
        int32_t m_nScaleCP1; // 0x2c40        
        // metadata: MPropertyFriendlyName "scale CP end"
        int32_t m_nScaleCP2; // 0x2c44        
        // metadata: MPropertyFriendlyName "scale V world size by CP distance"
        float m_flScaleVSizeByControlPointDistance; // 0x2c48        
        // metadata: MPropertyFriendlyName "scale V scroll rate by CP distance"
        float m_flScaleVScrollByControlPointDistance; // 0x2c4c        
        // metadata: MPropertyFriendlyName "scale V offset by CP distance"
        float m_flScaleVOffsetByControlPointDistance; // 0x2c50        
        [[maybe_unused]] std::uint8_t pad_0x2c54[0x1]; // 0x2c54
        // metadata: MPropertyStartGroup "Rope Global UV Controls"
        // metadata: MPropertyFriendlyName "Use scalar attribute for texture coordinate"
        bool m_bUseScalarForTextureCoordinate; // 0x2c55        
        [[maybe_unused]] std::uint8_t pad_0x2c56[0x2]; // 0x2c56
        // metadata: MPropertyFriendlyName "scalar to use for texture coordinate"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        // metadata: MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
        particles::ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x2c58        
        // metadata: MPropertyFriendlyName "scale value to map attribute to texture coordinate"
        // metadata: MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
        float m_flScalarAttributeTextureCoordScale; // 0x2c5c        
        // metadata: MPropertyStartGroup "Rope Order Controls"
        // metadata: MPropertyFriendlyName "reverse point order"
        // metadata: MPropertySortPriority "800"
        bool m_bReverseOrder; // 0x2c60        
        // metadata: MPropertyFriendlyName "Closed loop"
        bool m_bClosedLoop; // 0x2c61        
        [[maybe_unused]] std::uint8_t pad_0x2c62[0x2]; // 0x2c62
        // metadata: MPropertyStartGroup "Orientation"
        // metadata: MPropertyFriendlyName "orientation_type"
        // metadata: MPropertySortPriority "750"
        particles::ParticleOrientationChoiceList_t m_nOrientationType; // 0x2c64        
        // metadata: MPropertyFriendlyName "attribute to use for normal"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        // metadata: MPropertySortPriority "750"
        // metadata: MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
        particles::ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x2c68        
        // metadata: MPropertyStartGroup "Material"
        // metadata: MPropertyFriendlyName "draw as opaque"
        bool m_bDrawAsOpaque; // 0x2c6c        
        // metadata: MPropertyStartGroup "Orientation"
        // metadata: MPropertyFriendlyName "generate normals for cylinder"
        bool m_bGenerateNormals; // 0x2c6d        
        [[maybe_unused]] std::uint8_t pad_0x2c6e[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderRopes because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderRopes) == 0x2c70);
};
