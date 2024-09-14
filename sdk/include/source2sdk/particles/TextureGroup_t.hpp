#pragma once
#include "source2sdk/particles/ParticleTextureLayerBlendType_t.hpp"
#include "source2sdk/particles/SpriteCardTextureChannel_t.hpp"
#include "source2sdk/particles/SpriteCardTextureType_t.hpp"
#include "source2sdk/particles/TextureControls_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
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
    // Size: 0xb58
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct TextureGroup_t
    {
    public:
        // metadata: MPropertyFriendlyName "Enabled"
        bool m_bEnabled; // 0x0        
        // metadata: MPropertyFriendlyName "Author Texture As Gradient"
        // metadata: MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
        bool m_bReplaceTextureWithGradient; // 0x1        
        [[maybe_unused]] std::uint8_t pad_0x02[0x6]; // 0x2
        // metadata: MPropertyFriendlyName "Texture"
        // metadata: MPropertySuppressExpr "m_bReplaceTextureWithGradient"
        // metadata: MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
        // m_hTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hTexture;
        char m_hTexture[0x8]; // 0x8        
        // metadata: MPropertyFriendlyName "Gradient"
        // metadata: MPropertySuppressExpr "!m_bReplaceTextureWithGradient"
        CColorGradient m_Gradient; // 0x10        
        // metadata: MPropertyFriendlyName "Texture Type"
        particles::SpriteCardTextureType_t m_nTextureType; // 0x28        
        // metadata: MPropertyFriendlyName "Channel Mix"
        // metadata: MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
        particles::SpriteCardTextureChannel_t m_nTextureChannels; // 0x2c        
        // metadata: MPropertyFriendlyName "Mix Blend Mode"
        // metadata: MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
        particles::ParticleTextureLayerBlendType_t m_nTextureBlendMode; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x34[0x4]; // 0x34
        // metadata: MPropertyFriendlyName "Blend Amount"
        // metadata: MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
        particleslib::CParticleCollectionRendererFloatInput m_flTextureBlend; // 0x38        
        // metadata: MPropertyFriendlyName "Texture Controls"
        // metadata: MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
        particles::TextureControls_t m_TextureControls; // 0x198        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in TextureGroup_t because it is not a standard-layout class
    static_assert(sizeof(TextureGroup_t) == 0xb58);
};
