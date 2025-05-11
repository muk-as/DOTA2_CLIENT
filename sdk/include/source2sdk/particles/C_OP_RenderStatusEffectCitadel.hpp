#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

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
        // Size: 0x240
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderStatusEffectCitadel : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "color warp texture (3d)"
            // metadata: MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
            // m_pTextureColorWarp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureColorWarp;
            char m_pTextureColorWarp[0x8]; // 0x210            
            // metadata: MPropertyFriendlyName "normal texture"
            // metadata: MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
            // m_pTextureNormal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureNormal;
            char m_pTextureNormal[0x8]; // 0x218            
            // metadata: MPropertyFriendlyName "metalness texture"
            // metadata: MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
            // m_pTextureMetalness has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureMetalness;
            char m_pTextureMetalness[0x8]; // 0x220            
            // metadata: MPropertyFriendlyName "roughness texture"
            // metadata: MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
            // m_pTextureRoughness has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureRoughness;
            char m_pTextureRoughness[0x8]; // 0x228            
            // metadata: MPropertyFriendlyName "self illum texture"
            // metadata: MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
            // m_pTextureSelfIllum has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureSelfIllum;
            char m_pTextureSelfIllum[0x8]; // 0x230            
            // metadata: MPropertyFriendlyName "detail texture"
            // metadata: MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
            // m_pTextureDetail has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureDetail;
            char m_pTextureDetail[0x8]; // 0x238            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderStatusEffectCitadel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderStatusEffectCitadel) == 0x240);
    };
};
