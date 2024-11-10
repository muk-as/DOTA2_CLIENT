#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x898
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
    // static metadata: MNetworkOverride "m_flSimulationTime CBaseEntity"
    #pragma pack(push, 1)
    class CFuncRotating : public server::CBaseModelEntity
    {
    public:
        entity2::CEntityIOOutput m_OnStopped; // 0x7b0        
        entity2::CEntityIOOutput m_OnStarted; // 0x7d8        
        entity2::CEntityIOOutput m_OnReachedStart; // 0x800        
        RotationVector m_localRotationVector; // 0x828        
        float m_flFanFriction; // 0x834        
        float m_flAttenuation; // 0x838        
        float m_flVolume; // 0x83c        
        float m_flTargetSpeed; // 0x840        
        float m_flMaxSpeed; // 0x844        
        float m_flBlockDamage; // 0x848        
        [[maybe_unused]] std::uint8_t pad_0x84c[0x4]; // 0x84c
        CUtlSymbolLarge m_NoiseRunning; // 0x850        
        bool m_bReversed; // 0x858        
        bool m_bAccelDecel; // 0x859        
        [[maybe_unused]] std::uint8_t pad_0x85a[0xa]; // 0x85a
        QAngle m_prevLocalAngles; // 0x864        
        QAngle m_angStart; // 0x870        
        bool m_bStopAtStartPos; // 0x87c        
        [[maybe_unused]] std::uint8_t pad_0x87d[0x3]; // 0x87d
        Vector m_vecClientOrigin; // 0x880        
        QAngle m_vecClientAngles; // 0x88c        
        
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
        // void m_nNoiseRunningGuid; // 0x85c
        // int32_t fanfriction; // 0x7fffffff
        // int32_t Volume; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncRotating because it is not a standard-layout class
    static_assert(sizeof(CFuncRotating) == 0x898);
};
