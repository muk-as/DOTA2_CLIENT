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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x890
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
        // static metadata: MNetworkOverride "m_flSimulationTime CBaseEntity"
        #pragma pack(push, 1)
        class CFuncRotating : public source2sdk::server::CBaseModelEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnStopped; // 0x7a8            
            source2sdk::entity2::CEntityIOOutput m_OnStarted; // 0x7d0            
            source2sdk::entity2::CEntityIOOutput m_OnReachedStart; // 0x7f8            
            RotationVector m_localRotationVector; // 0x820            
            float m_flFanFriction; // 0x82c            
            float m_flAttenuation; // 0x830            
            float m_flVolume; // 0x834            
            float m_flTargetSpeed; // 0x838            
            float m_flMaxSpeed; // 0x83c            
            float m_flBlockDamage; // 0x840            
            uint8_t _pad0844[0x4]; // 0x844
            CUtlSymbolLarge m_NoiseRunning; // 0x848            
            bool m_bReversed; // 0x850            
            bool m_bAccelDecel; // 0x851            
            uint8_t _pad0852[0xa]; // 0x852
            QAngle m_prevLocalAngles; // 0x85c            
            QAngle m_angStart; // 0x868            
            bool m_bStopAtStartPos; // 0x874            
            uint8_t _pad0875[0x3]; // 0x875
            Vector m_vecClientOrigin; // 0x878            
            QAngle m_vecClientAngles; // 0x884            
            
            // Datamap fields:
            // bool movewithoutpushingblockers; // 0x7fffffff
            // void CFuncRotatingSpinUpMove; // 0x0
            // void CFuncRotatingSpinDownMove; // 0x0
            // void CFuncRotatingHurtTouch; // 0x0
            // void CFuncRotatingRotatingUse; // 0x0
            // void CFuncRotatingRotateMove; // 0x0
            // void CFuncRotatingReverseMove; // 0x0
            // float InputSetSpeed; // 0x0
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputToggle; // 0x0
            // void InputReverse; // 0x0
            // void InputStartForward; // 0x0
            // void InputStartBackward; // 0x0
            // void InputStopAtStartPos; // 0x0
            // void InputSnapToStartPos; // 0x0
            // Vector InputSetStartPos; // 0x0
            // void InputEnableAccelDecel; // 0x0
            // void InputDisableAccelDecel; // 0x0
            // void m_nNoiseRunningGuid; // 0x854
            // int32_t fanfriction; // 0x7fffffff
            // int32_t Volume; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncRotating because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncRotating) == 0x890);
    };
};
