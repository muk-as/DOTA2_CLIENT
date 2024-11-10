#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x9d0
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CTriggerFan : public server::CBaseTrigger
    {
    public:
        Vector m_vFanOrigin; // 0x980        
        Vector m_vFanEnd; // 0x98c        
        Vector m_vNoise; // 0x998        
        float m_flForce; // 0x9a4        
        float m_flRopeForceScale; // 0x9a8        
        float m_flPlayerForce; // 0x9ac        
        float m_flRampTime; // 0x9b0        
        bool m_bFalloff; // 0x9b4        
        bool m_bPushPlayer; // 0x9b5        
        bool m_bRampDown; // 0x9b6        
        bool m_bAddNoise; // 0x9b7        
        server::CountdownTimer m_RampTimer; // 0x9b8        
        
        // Datamap fields:
        // void CTriggerFanPushThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerFan because it is not a standard-layout class
    static_assert(sizeof(CTriggerFan) == 0x9d0);
};
