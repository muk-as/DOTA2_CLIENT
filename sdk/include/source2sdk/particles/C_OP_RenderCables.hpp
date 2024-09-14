#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/FloatInputMaterialVariable_t.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
#include "source2sdk/particles/TextureRepetitionMode_t.hpp"
#include "source2sdk/particles/VecInputMaterialVariable_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
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
    // Size: 0x1488
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderCables : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyStartGroup "Renderer Modifiers"
        // metadata: MPropertyFriendlyName "Radius Scale"
        // metadata: MPropertySortPriority "700"
        particleslib::CParticleCollectionFloatInput m_flRadiusScale; // 0x210        
        // metadata: MPropertyFriendlyName "alpha scale"
        // metadata: MPropertySortPriority "700"
        particleslib::CParticleCollectionFloatInput m_flAlphaScale; // 0x370        
        // metadata: MPropertyFriendlyName "color blend"
        // metadata: MPropertySortPriority "700"
        particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x4d0        
        // metadata: MPropertyFriendlyName "color blend type"
        // metadata: MPropertySortPriority "700"
        particles::ParticleColorBlendType_t m_nColorBlendType; // 0xb48        
        [[maybe_unused]] std::uint8_t pad_0xb4c[0x4]; // 0xb4c
        // metadata: MPropertyStartGroup
        // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
        char m_hMaterial[0x8]; // 0xb50        
        // metadata: MPropertyFriendlyName "texture repetition mode"
        particles::TextureRepetitionMode_t m_nTextureRepetitionMode; // 0xb58        
        [[maybe_unused]] std::uint8_t pad_0xb5c[0x4]; // 0xb5c
        // metadata: MPropertyFriendlyName "texture repetitions"
        particleslib::CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // 0xb60        
        // metadata: MPropertyFriendlyName "texture repetitions around cable"
        particleslib::CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // 0xcc0        
        // metadata: MPropertyFriendlyName "color map offset along path"
        particleslib::CParticleCollectionFloatInput m_flColorMapOffsetV; // 0xe20        
        // metadata: MPropertyFriendlyName "color map offset around cable"
        particleslib::CParticleCollectionFloatInput m_flColorMapOffsetU; // 0xf80        
        // metadata: MPropertyFriendlyName "normal map offset along path"
        particleslib::CParticleCollectionFloatInput m_flNormalMapOffsetV; // 0x10e0        
        // metadata: MPropertyFriendlyName "normal map offset around cable"
        particleslib::CParticleCollectionFloatInput m_flNormalMapOffsetU; // 0x1240        
        // metadata: MPropertyFriendlyName "draw caps at each end of the cable"
        bool m_bDrawCableCaps; // 0x13a0        
        [[maybe_unused]] std::uint8_t pad_0x13a1[0x3]; // 0x13a1
        // metadata: MPropertyFriendlyName "cable end cap shape factor"
        // metadata: MPropertyAttributeRange "0 2"
        float m_flCapRoundness; // 0x13a4        
        // metadata: MPropertyFriendlyName "cable end cap offset amount"
        // metadata: MPropertyAttributeRange "0 2"
        float m_flCapOffsetAmount; // 0x13a8        
        // metadata: MPropertyFriendlyName "tessellation scale factor"
        float m_flTessScale; // 0x13ac        
        // metadata: MPropertyFriendlyName "minimum steps between particles"
        int32_t m_nMinTesselation; // 0x13b0        
        // metadata: MPropertyFriendlyName "maximum steps between particles"
        int32_t m_nMaxTesselation; // 0x13b4        
        // metadata: MPropertyFriendlyName "roundness factor"
        int32_t m_nRoundness; // 0x13b8        
        [[maybe_unused]] std::uint8_t pad_0x13bc[0x4]; // 0x13bc
        // metadata: MPropertyFriendlyName "diffuse lighting origin"
        // metadata: MParticleInputOptional
        particleslib::CParticleTransformInput m_LightingTransform; // 0x13c0        
        // metadata: MPropertyFriendlyName "material float variables"
        // m_MaterialFloatVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::FloatInputMaterialVariable_t> m_MaterialFloatVars;
        char m_MaterialFloatVars[0x18]; // 0x1428        
        [[maybe_unused]] std::uint8_t pad_0x1440[0x18]; // 0x1440
        // metadata: MPropertyFriendlyName "material vector variables"
        // m_MaterialVecVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::VecInputMaterialVariable_t> m_MaterialVecVars;
        char m_MaterialVecVars[0x18]; // 0x1458        
        [[maybe_unused]] std::uint8_t pad_0x1470[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderCables because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderCables) == 0x1488);
};
