#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x2e0
    // Has VTable
    // MDisableDataDescValidation
    // 
    // static metadata: MNetworkVarNames "CHandle< C_BaseEntity> m_hTargetEntity"
    // static metadata: MNetworkVarNames "bool m_bState"
    // static metadata: MNetworkVarNames "bool m_bAlwaysUpdate"
    // static metadata: MNetworkVarNames "float32 m_flLightFOV"
    // static metadata: MNetworkVarNames "bool m_bEnableShadows"
    // static metadata: MNetworkVarNames "bool m_bSimpleProjection"
    // static metadata: MNetworkVarNames "bool m_bLightOnlyTarget"
    // static metadata: MNetworkVarNames "bool m_bLightWorld"
    // static metadata: MNetworkVarNames "bool m_bCameraSpace"
    // static metadata: MNetworkVarNames "float32 m_flBrightnessScale"
    // static metadata: MNetworkVarNames "Color m_LightColor"
    // static metadata: MNetworkVarNames "float32 m_flIntensity"
    // static metadata: MNetworkVarNames "float32 m_flLinearAttenuation"
    // static metadata: MNetworkVarNames "float32 m_flQuadraticAttenuation"
    // static metadata: MNetworkVarNames "bool m_bVolumetric"
    // static metadata: MNetworkVarNames "float32 m_flVolumetricIntensity"
    // static metadata: MNetworkVarNames "float32 m_flNoiseStrength"
    // static metadata: MNetworkVarNames "float32 m_flFlashlightTime"
    // static metadata: MNetworkVarNames "uint32 m_nNumPlanes"
    // static metadata: MNetworkVarNames "float32 m_flPlaneOffset"
    // static metadata: MNetworkVarNames "float32 m_flColorTransitionTime"
    // static metadata: MNetworkVarNames "float32 m_flAmbient"
    // static metadata: MNetworkVarNames "char m_SpotlightTextureName"
    // static metadata: MNetworkVarNames "int32 m_nSpotlightTextureFrame"
    // static metadata: MNetworkVarNames "uint32 m_nShadowQuality"
    // static metadata: MNetworkVarNames "float32 m_flNearZ"
    // static metadata: MNetworkVarNames "float32 m_flFarZ"
    // static metadata: MNetworkVarNames "float32 m_flProjectionSize"
    // static metadata: MNetworkVarNames "float32 m_flRotation"
    // static metadata: MNetworkVarNames "bool m_bFlipHorizontal"
    #pragma pack(push, 1)
    class CProjectedTextureBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0xc]; // 0x0
        // metadata: MNetworkEnable
        // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTargetEntity;
        char m_hTargetEntity[0x4]; // 0xc        
        // metadata: MNetworkEnable
        bool m_bState; // 0x10        
        // metadata: MNetworkEnable
        bool m_bAlwaysUpdate; // 0x11        
        [[maybe_unused]] std::uint8_t pad_0x12[0x2]; // 0x12
        // metadata: MNetworkEnable
        float m_flLightFOV; // 0x14        
        // metadata: MNetworkEnable
        bool m_bEnableShadows; // 0x18        
        // metadata: MNetworkEnable
        bool m_bSimpleProjection; // 0x19        
        // metadata: MNetworkEnable
        bool m_bLightOnlyTarget; // 0x1a        
        // metadata: MNetworkEnable
        bool m_bLightWorld; // 0x1b        
        // metadata: MNetworkEnable
        bool m_bCameraSpace; // 0x1c        
        [[maybe_unused]] std::uint8_t pad_0x1d[0x3]; // 0x1d
        // metadata: MNetworkEnable
        float m_flBrightnessScale; // 0x20        
        // metadata: MNetworkEnable
        Color m_LightColor; // 0x24        
        // metadata: MNetworkEnable
        float m_flIntensity; // 0x28        
        // metadata: MNetworkEnable
        float m_flLinearAttenuation; // 0x2c        
        // metadata: MNetworkEnable
        float m_flQuadraticAttenuation; // 0x30        
        // metadata: MNetworkEnable
        bool m_bVolumetric; // 0x34        
        [[maybe_unused]] std::uint8_t pad_0x35[0x3]; // 0x35
        // metadata: MNetworkEnable
        float m_flVolumetricIntensity; // 0x38        
        // metadata: MNetworkEnable
        float m_flNoiseStrength; // 0x3c        
        // metadata: MNetworkEnable
        float m_flFlashlightTime; // 0x40        
        // metadata: MNetworkEnable
        uint32_t m_nNumPlanes; // 0x44        
        // metadata: MNetworkEnable
        float m_flPlaneOffset; // 0x48        
        // metadata: MNetworkEnable
        float m_flColorTransitionTime; // 0x4c        
        // metadata: MNetworkEnable
        float m_flAmbient; // 0x50        
        // metadata: MNetworkEnable
        char m_SpotlightTextureName[512]; // 0x54        
        // metadata: MNetworkEnable
        int32_t m_nSpotlightTextureFrame; // 0x254        
        // metadata: MNetworkEnable
        uint32_t m_nShadowQuality; // 0x258        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "16"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "500,000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flNearZ; // 0x25c        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "18"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1500,000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flFarZ; // 0x260        
        // metadata: MNetworkEnable
        float m_flProjectionSize; // 0x264        
        // metadata: MNetworkEnable
        float m_flRotation; // 0x268        
        // metadata: MNetworkEnable
        bool m_bFlipHorizontal; // 0x26c        
        [[maybe_unused]] std::uint8_t pad_0x26d[0x73];
        
        // Static fields:
        static float &Get_m_flVisibleBBoxMinHeight() {return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CProjectedTextureBase")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CProjectedTextureBase, m_hTargetEntity) == 0xc);
    static_assert(offsetof(CProjectedTextureBase, m_bState) == 0x10);
    static_assert(offsetof(CProjectedTextureBase, m_bAlwaysUpdate) == 0x11);
    static_assert(offsetof(CProjectedTextureBase, m_flLightFOV) == 0x14);
    static_assert(offsetof(CProjectedTextureBase, m_bEnableShadows) == 0x18);
    static_assert(offsetof(CProjectedTextureBase, m_bSimpleProjection) == 0x19);
    static_assert(offsetof(CProjectedTextureBase, m_bLightOnlyTarget) == 0x1a);
    static_assert(offsetof(CProjectedTextureBase, m_bLightWorld) == 0x1b);
    static_assert(offsetof(CProjectedTextureBase, m_bCameraSpace) == 0x1c);
    static_assert(offsetof(CProjectedTextureBase, m_flBrightnessScale) == 0x20);
    static_assert(offsetof(CProjectedTextureBase, m_LightColor) == 0x24);
    static_assert(offsetof(CProjectedTextureBase, m_flIntensity) == 0x28);
    static_assert(offsetof(CProjectedTextureBase, m_flLinearAttenuation) == 0x2c);
    static_assert(offsetof(CProjectedTextureBase, m_flQuadraticAttenuation) == 0x30);
    static_assert(offsetof(CProjectedTextureBase, m_bVolumetric) == 0x34);
    static_assert(offsetof(CProjectedTextureBase, m_flVolumetricIntensity) == 0x38);
    static_assert(offsetof(CProjectedTextureBase, m_flNoiseStrength) == 0x3c);
    static_assert(offsetof(CProjectedTextureBase, m_flFlashlightTime) == 0x40);
    static_assert(offsetof(CProjectedTextureBase, m_nNumPlanes) == 0x44);
    static_assert(offsetof(CProjectedTextureBase, m_flPlaneOffset) == 0x48);
    static_assert(offsetof(CProjectedTextureBase, m_flColorTransitionTime) == 0x4c);
    static_assert(offsetof(CProjectedTextureBase, m_flAmbient) == 0x50);
    static_assert(offsetof(CProjectedTextureBase, m_SpotlightTextureName) == 0x54);
    static_assert(offsetof(CProjectedTextureBase, m_nSpotlightTextureFrame) == 0x254);
    static_assert(offsetof(CProjectedTextureBase, m_nShadowQuality) == 0x258);
    static_assert(offsetof(CProjectedTextureBase, m_flNearZ) == 0x25c);
    static_assert(offsetof(CProjectedTextureBase, m_flFarZ) == 0x260);
    static_assert(offsetof(CProjectedTextureBase, m_flProjectionSize) == 0x264);
    static_assert(offsetof(CProjectedTextureBase, m_flRotation) == 0x268);
    static_assert(offsetof(CProjectedTextureBase, m_bFlipHorizontal) == 0x26c);
    
    static_assert(sizeof(CProjectedTextureBase) == 0x2e0);
};
