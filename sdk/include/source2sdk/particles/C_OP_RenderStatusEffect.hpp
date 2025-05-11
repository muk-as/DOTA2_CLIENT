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
        // Size: 0x248
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderStatusEffect : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "color warp texture (3d)"
            // metadata: MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
            // m_pTextureColorWarp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureColorWarp;
            char m_pTextureColorWarp[0x8]; // 0x210            
            // metadata: MPropertyFriendlyName "detail 2 texture"
            // metadata: MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
            // m_pTextureDetail2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureDetail2;
            char m_pTextureDetail2[0x8]; // 0x218            
            // metadata: MPropertyFriendlyName "diffuse warp texture (3d)"
            // metadata: MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
            // m_pTextureDiffuseWarp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureDiffuseWarp;
            char m_pTextureDiffuseWarp[0x8]; // 0x220            
            // metadata: MPropertyFriendlyName "fresnel color warp texture (3d)"
            // metadata: MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
            // m_pTextureFresnelColorWarp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureFresnelColorWarp;
            char m_pTextureFresnelColorWarp[0x8]; // 0x228            
            // metadata: MPropertyFriendlyName "fresnel warp texture"
            // metadata: MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
            // m_pTextureFresnelWarp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureFresnelWarp;
            char m_pTextureFresnelWarp[0x8]; // 0x230            
            // metadata: MPropertyFriendlyName "specular warp texture"
            // metadata: MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
            // m_pTextureSpecularWarp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureSpecularWarp;
            char m_pTextureSpecularWarp[0x8]; // 0x238            
            // metadata: MPropertyFriendlyName "environment map texture"
            // metadata: MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
            // m_pTextureEnvMap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureEnvMap;
            char m_pTextureEnvMap[0x8]; // 0x240            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderStatusEffect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderStatusEffect) == 0x248);
    };
};
