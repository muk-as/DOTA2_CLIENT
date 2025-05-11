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
        // Size: 0x578
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
            float m_FOV; // 0x510            
            // metadata: MNetworkEnable
            float m_Resolution; // 0x514            
            // metadata: MNetworkEnable
            bool m_bFogEnable; // 0x518            
            // metadata: MNetworkEnable
            Color m_FogColor; // 0x519            
            uint8_t _pad051d[0x3]; // 0x51d
            // metadata: MNetworkEnable
            float m_flFogStart; // 0x520            
            // metadata: MNetworkEnable
            float m_flFogEnd; // 0x524            
            // metadata: MNetworkEnable
            float m_flFogMaxDensity; // 0x528            
            // metadata: MNetworkEnable
            bool m_bActive; // 0x52c            
            // metadata: MNetworkEnable
            bool m_bUseScreenAspectRatio; // 0x52d            
            uint8_t _pad052e[0x2]; // 0x52e
            // metadata: MNetworkEnable
            float m_flAspectRatio; // 0x530            
            // metadata: MNetworkEnable
            bool m_bNoSky; // 0x534            
            uint8_t _pad0535[0x3]; // 0x535
            // metadata: MNetworkEnable
            float m_fBrightness; // 0x538            
            // metadata: MNetworkEnable
            float m_flZFar; // 0x53c            
            // metadata: MNetworkEnable
            float m_flZNear; // 0x540            
            // metadata: MNetworkEnable
            bool m_bCanHLTVUse; // 0x544            
            // metadata: MNetworkEnable
            bool m_bAlignWithParent; // 0x545            
            uint8_t _pad0546[0x2]; // 0x546
            // metadata: MNetworkEnable
            float m_flOverrideShadowFarZ; // 0x548            
            // metadata: MNetworkEnable
            bool m_bDofEnabled; // 0x54c            
            uint8_t _pad054d[0x3]; // 0x54d
            // metadata: MNetworkEnable
            float m_flDofNearBlurry; // 0x550            
            // metadata: MNetworkEnable
            float m_flDofNearCrisp; // 0x554            
            // metadata: MNetworkEnable
            float m_flDofFarCrisp; // 0x558            
            // metadata: MNetworkEnable
            float m_flDofFarBlurry; // 0x55c            
            // metadata: MNetworkEnable
            float m_flDofTiltToGround; // 0x560            
            float m_TargetFOV; // 0x564            
            float m_DegreesPerSecond; // 0x568            
            bool m_bIsOn; // 0x56c            
            uint8_t _pad056d[0x3]; // 0x56d
            source2sdk::client::C_PointCamera* m_pNext; // 0x570            
            
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
        
        static_assert(sizeof(source2sdk::client::C_PointCamera) == 0x578);
    };
};
