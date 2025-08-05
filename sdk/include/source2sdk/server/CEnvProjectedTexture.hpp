#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CModelPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa58
        // Has VTable
        // Construct allowed
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
        class CEnvProjectedTexture : public source2sdk::server::CModelPointEntity
        {
        public:
            // metadata: MNetworkEnable
            // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEntity;
            char m_hTargetEntity[0x4]; // 0x7f0            
            // metadata: MNetworkEnable
            bool m_bState; // 0x7f4            
            // metadata: MNetworkEnable
            bool m_bAlwaysUpdate; // 0x7f5            
            uint8_t _pad07f6[0x2]; // 0x7f6
            // metadata: MNetworkEnable
            float m_flLightFOV; // 0x7f8            
            // metadata: MNetworkEnable
            bool m_bEnableShadows; // 0x7fc            
            // metadata: MNetworkEnable
            bool m_bSimpleProjection; // 0x7fd            
            // metadata: MNetworkEnable
            bool m_bLightOnlyTarget; // 0x7fe            
            // metadata: MNetworkEnable
            bool m_bLightWorld; // 0x7ff            
            // metadata: MNetworkEnable
            bool m_bCameraSpace; // 0x800            
            uint8_t _pad0801[0x3]; // 0x801
            // metadata: MNetworkEnable
            float m_flBrightnessScale; // 0x804            
            // metadata: MNetworkEnable
            Color m_LightColor; // 0x808            
            // metadata: MNetworkEnable
            float m_flIntensity; // 0x80c            
            // metadata: MNetworkEnable
            float m_flLinearAttenuation; // 0x810            
            // metadata: MNetworkEnable
            float m_flQuadraticAttenuation; // 0x814            
            // metadata: MNetworkEnable
            bool m_bVolumetric; // 0x818            
            uint8_t _pad0819[0x3]; // 0x819
            // metadata: MNetworkEnable
            float m_flNoiseStrength; // 0x81c            
            // metadata: MNetworkEnable
            float m_flFlashlightTime; // 0x820            
            // metadata: MNetworkEnable
            std::uint32_t m_nNumPlanes; // 0x824            
            // metadata: MNetworkEnable
            float m_flPlaneOffset; // 0x828            
            // metadata: MNetworkEnable
            float m_flVolumetricIntensity; // 0x82c            
            // metadata: MNetworkEnable
            float m_flColorTransitionTime; // 0x830            
            // metadata: MNetworkEnable
            float m_flAmbient; // 0x834            
            // metadata: MNetworkEnable
            char m_SpotlightTextureName[512]; // 0x838            
            // metadata: MNetworkEnable
            std::int32_t m_nSpotlightTextureFrame; // 0xa38            
            // metadata: MNetworkEnable
            std::uint32_t m_nShadowQuality; // 0xa3c            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "16"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "500,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flNearZ; // 0xa40            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "18"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1500,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flFarZ; // 0xa44            
            // metadata: MNetworkEnable
            float m_flProjectionSize; // 0xa48            
            // metadata: MNetworkEnable
            float m_flRotation; // 0xa4c            
            // metadata: MNetworkEnable
            bool m_bFlipHorizontal; // 0xa50            
            uint8_t _pad0a51[0x7];
            
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
        
        static_assert(sizeof(source2sdk::server::CEnvProjectedTexture) == 0xa58);
    };
};
