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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "Vector m_vFanOriginOffset"
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
            Vector m_vFanOriginOffset; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vDirection; // 0x_            
            // metadata: MNetworkEnable
            bool m_bPushTowardsInfoTarget; // 0x_            
            // metadata: MNetworkEnable
            bool m_bPushAwayFromInfoTarget; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            Quaternion m_qNoiseDelta; // 0x_            
            // metadata: MNetworkEnable
            // m_hInfoFan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CInfoFan> m_hInfoFan;
            char m_hInfoFan[0x_]; // 0x_            
            // metadata: MNetworkEnable
            float m_flForce; // 0x_            
            // metadata: MNetworkEnable
            bool m_bFalloff; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::server::CountdownTimer m_RampTimer; // 0x_            
            VectorWS m_vFanOriginWS; // 0x_            
            Vector m_vFanOriginLS; // 0x_            
            Vector m_vFanEndLS; // 0x_            
            Vector m_vNoiseDirectionTarget; // 0x_            
            CUtlSymbolLarge m_iszInfoFan; // 0x_            
            float m_flRopeForceScale; // 0x_            
            float m_flParticleForceScale; // 0x_            
            float m_flPlayerForce; // 0x_            
            bool m_bPlayerWindblock; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flNPCForce; // 0x_            
            float m_flRampTime; // 0x_            
            float m_fNoiseDegrees; // 0x_            
            float m_fNoiseSpeed; // 0x_            
            bool m_bPushPlayer; // 0x_            
            bool m_bRampDown; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nManagerFanIdx; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CTriggerFanPushThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerFan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerFan) == 0x_);
    };
};
