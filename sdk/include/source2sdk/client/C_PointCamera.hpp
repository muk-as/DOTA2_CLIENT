#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x650
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "float m_FOV"
        // static metadata: MNetworkVarNames "float m_Resolution"
        // static metadata: MNetworkVarNames "bool m_bFogEnable"
        // static metadata: MNetworkVarNames "Color m_FogColor"
        // static metadata: MNetworkVarNames "float m_flFogStart"
        // static metadata: MNetworkVarNames "float m_flFogEnd"
        // static metadata: MNetworkVarNames "float m_flFogMaxDensity"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "bool m_bUseScreenAspectRatio"
        // static metadata: MNetworkVarNames "float m_flAspectRatio"
        // static metadata: MNetworkVarNames "bool m_bNoSky"
        // static metadata: MNetworkVarNames "float m_fBrightness"
        // static metadata: MNetworkVarNames "float m_flZFar"
        // static metadata: MNetworkVarNames "float m_flZNear"
        // static metadata: MNetworkVarNames "bool m_bCanHLTVUse"
        // static metadata: MNetworkVarNames "bool m_bAlignWithParent"
        // static metadata: MNetworkVarNames "float m_flOverrideShadowFarZ"
        // static metadata: MNetworkVarNames "bool m_bDofEnabled"
        // static metadata: MNetworkVarNames "float m_flDofNearBlurry"
        // static metadata: MNetworkVarNames "float m_flDofNearCrisp"
        // static metadata: MNetworkVarNames "float m_flDofFarCrisp"
        // static metadata: MNetworkVarNames "float m_flDofFarBlurry"
        // static metadata: MNetworkVarNames "float m_flDofTiltToGround"
        #pragma pack(push, 1)
        class C_PointCamera : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_FOV; // 0x5e8            
            // metadata: MNetworkEnable
            float m_Resolution; // 0x5ec            
            // metadata: MNetworkEnable
            bool m_bFogEnable; // 0x5f0            
            // metadata: MNetworkEnable
            Color m_FogColor; // 0x5f1            
            uint8_t _pad05f5[0x3]; // 0x5f5
            // metadata: MNetworkEnable
            float m_flFogStart; // 0x5f8            
            // metadata: MNetworkEnable
            float m_flFogEnd; // 0x5fc            
            // metadata: MNetworkEnable
            float m_flFogMaxDensity; // 0x600            
            // metadata: MNetworkEnable
            bool m_bActive; // 0x604            
            // metadata: MNetworkEnable
            bool m_bUseScreenAspectRatio; // 0x605            
            uint8_t _pad0606[0x2]; // 0x606
            // metadata: MNetworkEnable
            float m_flAspectRatio; // 0x608            
            // metadata: MNetworkEnable
            bool m_bNoSky; // 0x60c            
            uint8_t _pad060d[0x3]; // 0x60d
            // metadata: MNetworkEnable
            float m_fBrightness; // 0x610            
            // metadata: MNetworkEnable
            float m_flZFar; // 0x614            
            // metadata: MNetworkEnable
            float m_flZNear; // 0x618            
            // metadata: MNetworkEnable
            bool m_bCanHLTVUse; // 0x61c            
            // metadata: MNetworkEnable
            bool m_bAlignWithParent; // 0x61d            
            uint8_t _pad061e[0x2]; // 0x61e
            // metadata: MNetworkEnable
            float m_flOverrideShadowFarZ; // 0x620            
            // metadata: MNetworkEnable
            bool m_bDofEnabled; // 0x624            
            uint8_t _pad0625[0x3]; // 0x625
            // metadata: MNetworkEnable
            float m_flDofNearBlurry; // 0x628            
            // metadata: MNetworkEnable
            float m_flDofNearCrisp; // 0x62c            
            // metadata: MNetworkEnable
            float m_flDofFarCrisp; // 0x630            
            // metadata: MNetworkEnable
            float m_flDofFarBlurry; // 0x634            
            // metadata: MNetworkEnable
            float m_flDofTiltToGround; // 0x638            
            float m_TargetFOV; // 0x63c            
            float m_DegreesPerSecond; // 0x640            
            bool m_bIsOn; // 0x644            
            uint8_t _pad0645[0x3]; // 0x645
            source2sdk::client::C_PointCamera* m_pNext; // 0x648            
            
            // Datamap fields:
            // CUtlSymbolLarge InputChangeFOV; // 0x0
            // void InputSetOnAndTurnOthersOff; // 0x0
            // void InputSetOn; // 0x0
            // void InputSetOff; // 0x0
            // void InputForceActive; // 0x0
            // void InputForceInactive; // 0x0
            // void InputEnableDOF; // 0x0
            // void InputDisableDOF; // 0x0
            // float InputSetDOFNearBlurry; // 0x0
            // float InputSetDOFNearCrisp; // 0x0
            // float InputSetDOFFarCrisp; // 0x0
            // float InputSetDOFFarBlurry; // 0x0
            // float InputSetDOFTiltToGround; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointCamera because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointCamera) == 0x650);
    };
};
