#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
        class CPointCamera : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_FOV; // 0x_            
            // metadata: MNetworkEnable
            float m_Resolution; // 0x_            
            // metadata: MNetworkEnable
            bool m_bFogEnable; // 0x_            
            // metadata: MNetworkEnable
            Color m_FogColor; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flFogStart; // 0x_            
            // metadata: MNetworkEnable
            float m_flFogEnd; // 0x_            
            // metadata: MNetworkEnable
            float m_flFogMaxDensity; // 0x_            
            // metadata: MNetworkEnable
            bool m_bActive; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUseScreenAspectRatio; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flAspectRatio; // 0x_            
            // metadata: MNetworkEnable
            bool m_bNoSky; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_fBrightness; // 0x_            
            // metadata: MNetworkEnable
            float m_flZFar; // 0x_            
            // metadata: MNetworkEnable
            float m_flZNear; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCanHLTVUse; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAlignWithParent; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flOverrideShadowFarZ; // 0x_            
            // metadata: MNetworkEnable
            bool m_bDofEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flDofNearBlurry; // 0x_            
            // metadata: MNetworkEnable
            float m_flDofNearCrisp; // 0x_            
            // metadata: MNetworkEnable
            float m_flDofFarCrisp; // 0x_            
            // metadata: MNetworkEnable
            float m_flDofFarBlurry; // 0x_            
            // metadata: MNetworkEnable
            float m_flDofTiltToGround; // 0x_            
            float m_TargetFOV; // 0x_            
            float m_DegreesPerSecond; // 0x_            
            bool m_bIsOn; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CPointCamera* m_pNext; // 0x_            
            
            // Datamap fields:
            // CUtlSymbolLarge InputChangeFOV; // 0x_
            // void InputSetOnAndTurnOthersOff; // 0x_
            // void InputSetOn; // 0x_
            // void InputSetOff; // 0x_
            // void InputForceActive; // 0x_
            // void InputForceInactive; // 0x_
            // void InputEnableDOF; // 0x_
            // void InputDisableDOF; // 0x_
            // float InputSetDOFNearBlurry; // 0x_
            // float InputSetDOFNearCrisp; // 0x_
            // float InputSetDOFFarCrisp; // 0x_
            // float InputSetDOFFarBlurry; // 0x_
            // float InputSetDOFTiltToGround; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointCamera because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointCamera) == 0x_);
    };
};
