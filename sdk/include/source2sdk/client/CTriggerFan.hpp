#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CInfoFan;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x990
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "Vector m_vFanOrigin"
        // static metadata: MNetworkVarNames "Vector m_vFanOriginOffset"
        // static metadata: MNetworkVarNames "Vector m_vFanEnd"
        // static metadata: MNetworkVarNames "Vector m_vNoiseDirectionTarget"
        // static metadata: MNetworkVarNames "Vector m_vDirection"
        // static metadata: MNetworkVarNames "bool m_bPushTowardsEntity"
        // static metadata: MNetworkVarNames "Quaternion m_qNoiseDelta"
        // static metadata: MNetworkVarNames "CHandle< CInfoFan> m_hInfoFan"
        // static metadata: MNetworkVarNames "float m_flForce"
        // static metadata: MNetworkVarNames "bool m_bFalloff"
        // static metadata: MNetworkVarNames "CountdownTimer m_RampTimer"
        #pragma pack(push, 1)
        class CTriggerFan : public source2sdk::client::C_BaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vFanOrigin; // 0x910            
            // metadata: MNetworkEnable
            Vector m_vFanOriginOffset; // 0x91c            
            // metadata: MNetworkEnable
            Vector m_vFanEnd; // 0x928            
            // metadata: MNetworkEnable
            Vector m_vNoiseDirectionTarget; // 0x934            
            // metadata: MNetworkEnable
            Vector m_vDirection; // 0x940            
            // metadata: MNetworkEnable
            bool m_bPushTowardsEntity; // 0x94c            
            uint8_t _pad094d[0x3]; // 0x94d
            // metadata: MNetworkEnable
            Quaternion m_qNoiseDelta; // 0x950            
            // metadata: MNetworkEnable
            // m_hInfoFan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CInfoFan> m_hInfoFan;
            char m_hInfoFan[0x4]; // 0x960            
            // metadata: MNetworkEnable
            float m_flForce; // 0x964            
            // metadata: MNetworkEnable
            bool m_bFalloff; // 0x968            
            uint8_t _pad0969[0x7]; // 0x969
            // metadata: MNetworkEnable
            source2sdk::client::CountdownTimer m_RampTimer; // 0x970            
            uint8_t _pad0988[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerFan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CTriggerFan) == 0x990);
    };
};
