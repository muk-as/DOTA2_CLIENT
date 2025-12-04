#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
        // static metadata: MNetworkOverride "m_flSimulationTime CBaseEntity"
        #pragma pack(push, 1)
        class CFuncRotating : public source2sdk::server::CBaseModelEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnStopped; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnStarted; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnReachedStart; // 0x_            
            RotationVector m_localRotationVector; // 0x_            
            float m_flFanFriction; // 0x_            
            float m_flAttenuation; // 0x_            
            float m_flVolume; // 0x_            
            float m_flTargetSpeed; // 0x_            
            float m_flMaxSpeed; // 0x_            
            float m_flBlockDamage; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_NoiseRunning; // 0x_            
            bool m_bReversed; // 0x_            
            bool m_bAccelDecel; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            QAngle m_prevLocalAngles; // 0x_            
            QAngle m_angStart; // 0x_            
            bool m_bStopAtStartPos; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vecClientOrigin; // 0x_            
            QAngle m_vecClientAngles; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // bool movewithoutpushingblockers; // 0x_
            // void CFuncRotatingSpinUpMove; // 0x_
            // void CFuncRotatingSpinDownMove; // 0x_
            // void CFuncRotatingHurtTouch; // 0x_
            // void CFuncRotatingRotatingUse; // 0x_
            // void CFuncRotatingRotateMove; // 0x_
            // void CFuncRotatingReverseMove; // 0x_
            // float InputSetSpeed; // 0x_
            // void InputStart; // 0x_
            // void InputStop; // 0x_
            // void InputToggle; // 0x_
            // void InputReverse; // 0x_
            // void InputStartForward; // 0x_
            // void InputStartBackward; // 0x_
            // void InputStopAtStartPos; // 0x_
            // void InputSnapToStartPos; // 0x_
            // Vector InputSetStartPos; // 0x_
            // void InputEnableAccelDecel; // 0x_
            // void InputDisableAccelDecel; // 0x_
            // void m_nNoiseRunningGuid; // 0x_
            // int32_t fanfriction; // 0x_
            // int32_t Volume; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncRotating because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncRotating) == 0x_);
    };
};
