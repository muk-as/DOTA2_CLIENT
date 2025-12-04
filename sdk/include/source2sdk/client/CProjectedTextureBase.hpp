#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTargetEntity;
            char m_hTargetEntity[0x_]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bState; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAlwaysUpdate; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flLightFOV; // 0x_            
            // metadata: MNetworkEnable
            bool m_bEnableShadows; // 0x_            
            // metadata: MNetworkEnable
            bool m_bSimpleProjection; // 0x_            
            // metadata: MNetworkEnable
            bool m_bLightOnlyTarget; // 0x_            
            // metadata: MNetworkEnable
            bool m_bLightWorld; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCameraSpace; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flBrightnessScale; // 0x_            
            // metadata: MNetworkEnable
            Color m_LightColor; // 0x_            
            // metadata: MNetworkEnable
            float m_flIntensity; // 0x_            
            // metadata: MNetworkEnable
            float m_flLinearAttenuation; // 0x_            
            // metadata: MNetworkEnable
            float m_flQuadraticAttenuation; // 0x_            
            // metadata: MNetworkEnable
            bool m_bVolumetric; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flVolumetricIntensity; // 0x_            
            // metadata: MNetworkEnable
            float m_flNoiseStrength; // 0x_            
            // metadata: MNetworkEnable
            float m_flFlashlightTime; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_nNumPlanes; // 0x_            
            // metadata: MNetworkEnable
            float m_flPlaneOffset; // 0x_            
            // metadata: MNetworkEnable
            float m_flColorTransitionTime; // 0x_            
            // metadata: MNetworkEnable
            float m_flAmbient; // 0x_            
            // metadata: MNetworkEnable
            char m_SpotlightTextureName[512]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nSpotlightTextureFrame; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_nShadowQuality; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "16"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "500,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flNearZ; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1500,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flFarZ; // 0x_            
            // metadata: MNetworkEnable
            float m_flProjectionSize; // 0x_            
            // metadata: MNetworkEnable
            float m_flRotation; // 0x_            
            // metadata: MNetworkEnable
            bool m_bFlipHorizontal; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_hTargetEntity) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_bState) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_bAlwaysUpdate) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_flLightFOV) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_bEnableShadows) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_bSimpleProjection) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_bLightOnlyTarget) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_bLightWorld) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_bCameraSpace) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_flBrightnessScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_LightColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_flIntensity) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_flLinearAttenuation) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_flQuadraticAttenuation) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_bVolumetric) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_flVolumetricIntensity) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_flNoiseStrength) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_flFlashlightTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_nNumPlanes) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_flPlaneOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_flColorTransitionTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_flAmbient) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_SpotlightTextureName) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_nSpotlightTextureFrame) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_nShadowQuality) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_flNearZ) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_flFarZ) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_flProjectionSize) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_flRotation) == 0x_);
        static_assert(offsetof(source2sdk::client::CProjectedTextureBase, m_bFlipHorizontal) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CProjectedTextureBase) == 0x_);
    };
};
