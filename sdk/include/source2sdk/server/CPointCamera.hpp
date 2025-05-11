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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x540
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
            float m_FOV; // 0x4d8            
            // metadata: MNetworkEnable
            float m_Resolution; // 0x4dc            
            // metadata: MNetworkEnable
            bool m_bFogEnable; // 0x4e0            
            // metadata: MNetworkEnable
            Color m_FogColor; // 0x4e1            
            uint8_t _pad04e5[0x3]; // 0x4e5
            // metadata: MNetworkEnable
            float m_flFogStart; // 0x4e8            
            // metadata: MNetworkEnable
            float m_flFogEnd; // 0x4ec            
            // metadata: MNetworkEnable
            float m_flFogMaxDensity; // 0x4f0            
            // metadata: MNetworkEnable
            bool m_bActive; // 0x4f4            
            // metadata: MNetworkEnable
            bool m_bUseScreenAspectRatio; // 0x4f5            
            uint8_t _pad04f6[0x2]; // 0x4f6
            // metadata: MNetworkEnable
            float m_flAspectRatio; // 0x4f8            
            // metadata: MNetworkEnable
            bool m_bNoSky; // 0x4fc            
            uint8_t _pad04fd[0x3]; // 0x4fd
            // metadata: MNetworkEnable
            float m_fBrightness; // 0x500            
            // metadata: MNetworkEnable
            float m_flZFar; // 0x504            
            // metadata: MNetworkEnable
            float m_flZNear; // 0x508            
            // metadata: MNetworkEnable
            bool m_bCanHLTVUse; // 0x50c            
            // metadata: MNetworkEnable
            bool m_bAlignWithParent; // 0x50d            
            uint8_t _pad050e[0x2]; // 0x50e
            // metadata: MNetworkEnable
            float m_flOverrideShadowFarZ; // 0x510            
            // metadata: MNetworkEnable
            bool m_bDofEnabled; // 0x514            
            uint8_t _pad0515[0x3]; // 0x515
            // metadata: MNetworkEnable
            float m_flDofNearBlurry; // 0x518            
            // metadata: MNetworkEnable
            float m_flDofNearCrisp; // 0x51c            
            // metadata: MNetworkEnable
            float m_flDofFarCrisp; // 0x520            
            // metadata: MNetworkEnable
            float m_flDofFarBlurry; // 0x524            
            // metadata: MNetworkEnable
            float m_flDofTiltToGround; // 0x528            
            float m_TargetFOV; // 0x52c            
            float m_DegreesPerSecond; // 0x530            
            bool m_bIsOn; // 0x534            
            uint8_t _pad0535[0x3]; // 0x535
            source2sdk::server::CPointCamera* m_pNext; // 0x538            
            
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
        
        // Cannot assert offsets of fields in CPointCamera because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointCamera) == 0x540);
    };
};
