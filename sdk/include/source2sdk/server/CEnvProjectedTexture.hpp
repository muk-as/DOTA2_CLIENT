#pragma once
#include "source2sdk/server/CModelPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9f0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hTargetEntity"
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
    // static metadata: MNetworkVarNames "float32 m_flNoiseStrength"
    // static metadata: MNetworkVarNames "float32 m_flFlashlightTime"
    // static metadata: MNetworkVarNames "uint32 m_nNumPlanes"
    // static metadata: MNetworkVarNames "float32 m_flPlaneOffset"
    // static metadata: MNetworkVarNames "float32 m_flVolumetricIntensity"
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
    class CEnvProjectedTexture : public server::CModelPointEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEntity;
        char m_hTargetEntity[0x4]; // 0x788        
        // metadata: MNetworkEnable
        bool m_bState; // 0x78c        
        // metadata: MNetworkEnable
        bool m_bAlwaysUpdate; // 0x78d        
        [[maybe_unused]] std::uint8_t pad_0x78e[0x2]; // 0x78e
        // metadata: MNetworkEnable
        float m_flLightFOV; // 0x790        
        // metadata: MNetworkEnable
        bool m_bEnableShadows; // 0x794        
        // metadata: MNetworkEnable
        bool m_bSimpleProjection; // 0x795        
        // metadata: MNetworkEnable
        bool m_bLightOnlyTarget; // 0x796        
        // metadata: MNetworkEnable
        bool m_bLightWorld; // 0x797        
        // metadata: MNetworkEnable
        bool m_bCameraSpace; // 0x798        
        [[maybe_unused]] std::uint8_t pad_0x799[0x3]; // 0x799
        // metadata: MNetworkEnable
        float m_flBrightnessScale; // 0x79c        
        // metadata: MNetworkEnable
        Color m_LightColor; // 0x7a0        
        // metadata: MNetworkEnable
        float m_flIntensity; // 0x7a4        
        // metadata: MNetworkEnable
        float m_flLinearAttenuation; // 0x7a8        
        // metadata: MNetworkEnable
        float m_flQuadraticAttenuation; // 0x7ac        
        // metadata: MNetworkEnable
        bool m_bVolumetric; // 0x7b0        
        [[maybe_unused]] std::uint8_t pad_0x7b1[0x3]; // 0x7b1
        // metadata: MNetworkEnable
        float m_flNoiseStrength; // 0x7b4        
        // metadata: MNetworkEnable
        float m_flFlashlightTime; // 0x7b8        
        // metadata: MNetworkEnable
        uint32_t m_nNumPlanes; // 0x7bc        
        // metadata: MNetworkEnable
        float m_flPlaneOffset; // 0x7c0        
        // metadata: MNetworkEnable
        float m_flVolumetricIntensity; // 0x7c4        
        // metadata: MNetworkEnable
        float m_flColorTransitionTime; // 0x7c8        
        // metadata: MNetworkEnable
        float m_flAmbient; // 0x7cc        
        // metadata: MNetworkEnable
        char m_SpotlightTextureName[512]; // 0x7d0        
        // metadata: MNetworkEnable
        int32_t m_nSpotlightTextureFrame; // 0x9d0        
        // metadata: MNetworkEnable
        uint32_t m_nShadowQuality; // 0x9d4        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "16"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "500,000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flNearZ; // 0x9d8        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "18"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1500,000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flFarZ; // 0x9dc        
        // metadata: MNetworkEnable
        float m_flProjectionSize; // 0x9e0        
        // metadata: MNetworkEnable
        float m_flRotation; // 0x9e4        
        // metadata: MNetworkEnable
        bool m_bFlipHorizontal; // 0x9e8        
        [[maybe_unused]] std::uint8_t pad_0x9e9[0x7];
        
        // Datamap fields:
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputAlwaysUpdateOn; // 0x0
        // void InputAlwaysUpdateOff; // 0x0
        // float InputSetFOV; // 0x0
        // CHandle< CBaseEntity > InputSetTarget; // 0x0
        // bool InputSetCameraSpace; // 0x0
        // bool InputSetLightOnlyTarget; // 0x0
        // bool InputSetLightWorld; // 0x0
        // bool InputSetEnableShadows; // 0x0
        // Color InputSetLightColor; // 0x0
        // float InputSetLightIntensity; // 0x0
        // float InputSetAmbient; // 0x0
        // CUtlSymbolLarge InputSetSpotlightTexture; // 0x0
        // void CEnvProjectedTextureInitialThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvProjectedTexture because it is not a standard-layout class
    static_assert(sizeof(CEnvProjectedTexture) == 0x9f0);
};
