#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CInfoFan;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xa50
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "Vector m_vFanOrigin"
        // static metadata: MNetworkVarNames "Vector m_vFanOriginOffset"
        // static metadata: MNetworkVarNames "Vector m_vFanEnd"
        // static metadata: MNetworkVarNames "Vector m_vNoiseDirectionTarget"
        // static metadata: MNetworkVarNames "Vector m_vDirection"
        // static metadata: MNetworkVarNames "bool m_bPushTowardsInfoTarget"
        // static metadata: MNetworkVarNames "bool m_bPushAwayFromInfoTarget"
        // static metadata: MNetworkVarNames "Quaternion m_qNoiseDelta"
        // static metadata: MNetworkVarNames "CHandle< CInfoFan> m_hInfoFan"
        // static metadata: MNetworkVarNames "float m_flForce"
        // static metadata: MNetworkVarNames "bool m_bFalloff"
        // static metadata: MNetworkVarNames "CountdownTimer m_RampTimer"
        #pragma pack(push, 1)
        class CTriggerFan : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vFanOrigin; // 0x998            
            // metadata: MNetworkEnable
            Vector m_vFanOriginOffset; // 0x9a4            
            // metadata: MNetworkEnable
            Vector m_vFanEnd; // 0x9b0            
            // metadata: MNetworkEnable
            Vector m_vNoiseDirectionTarget; // 0x9bc            
            // metadata: MNetworkEnable
            Vector m_vDirection; // 0x9c8            
            // metadata: MNetworkEnable
            bool m_bPushTowardsInfoTarget; // 0x9d4            
            // metadata: MNetworkEnable
            bool m_bPushAwayFromInfoTarget; // 0x9d5            
            uint8_t _pad09d6[0xa]; // 0x9d6
            // metadata: MNetworkEnable
            Quaternion m_qNoiseDelta; // 0x9e0            
            // metadata: MNetworkEnable
            // m_hInfoFan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CInfoFan> m_hInfoFan;
            char m_hInfoFan[0x4]; // 0x9f0            
            // metadata: MNetworkEnable
            float m_flForce; // 0x9f4            
            // metadata: MNetworkEnable
            bool m_bFalloff; // 0x9f8            
            uint8_t _pad09f9[0x7]; // 0x9f9
            // metadata: MNetworkEnable
            source2sdk::server::CountdownTimer m_RampTimer; // 0xa00            
            CUtlSymbolLarge m_iszInfoFan; // 0xa18            
            float m_flRopeForceScale; // 0xa20            
            float m_flParticleForceScale; // 0xa24            
            float m_flPlayerForce; // 0xa28            
            bool m_bPlayerWindblock; // 0xa2c            
            uint8_t _pad0a2d[0x3]; // 0xa2d
            float m_flNPCForce; // 0xa30            
            float m_flRampTime; // 0xa34            
            float m_fNoiseDegrees; // 0xa38            
            float m_fNoiseSpeed; // 0xa3c            
            bool m_bPushPlayer; // 0xa40            
            bool m_bRampDown; // 0xa41            
            uint8_t _pad0a42[0x2]; // 0xa42
            std::int32_t m_nManagerFanIdx; // 0xa44            
            uint8_t _pad0a48[0x8];
            
            // Datamap fields:
            // void CTriggerFanPushThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerFan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerFan) == 0xa50);
    };
};
