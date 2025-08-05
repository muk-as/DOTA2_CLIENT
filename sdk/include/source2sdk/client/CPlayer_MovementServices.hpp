#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CInButtonState.hpp"
#include "source2sdk/client/CPlayerPawnComponent.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x240
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "ButtonBitMask_t m_nToggleButtonDownMask"
        // static metadata: MNetworkVarNames "float32 m_flMaxspeed"
        // static metadata: MNetworkVarNames "float32 m_arrForceSubtickMoveWhen"
        #pragma pack(push, 1)
        class CPlayer_MovementServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            std::int32_t m_nImpulse; // 0x40            
            uint8_t _pad0044[0x4]; // 0x44
            source2sdk::client::CInButtonState m_nButtons; // 0x48            
            std::uint64_t m_nQueuedButtonDownMask; // 0x68            
            std::uint64_t m_nQueuedButtonChangeMask; // 0x70            
            std::uint64_t m_nButtonDoublePressed; // 0x78            
            std::uint32_t m_pButtonPressedCmdNumber[64]; // 0x80            
            std::uint32_t m_nLastCommandNumberProcessed; // 0x180            
            uint8_t _pad0184[0x4]; // 0x184
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint64_t m_nToggleButtonDownMask; // 0x188            
            uint8_t _pad0190[0x8]; // 0x190
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "12"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "2048,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flMaxspeed; // 0x198            
            // metadata: MNetworkEnable
            float m_arrForceSubtickMoveWhen[4]; // 0x19c            
            float m_flForwardMove; // 0x1ac            
            float m_flLeftMove; // 0x1b0            
            float m_flUpMove; // 0x1b4            
            Vector m_vecLastMovementImpulses; // 0x1b8            
            uint8_t _pad01c4[0x5c]; // 0x1c4
            QAngle m_vecLastFinishTickViewAngles; // 0x220            
            QAngle m_vecOldViewAngles; // 0x22c            
            uint8_t _pad0238[0x8];
            
            // Datamap fields:
            // void m_pButtonPressedCmdNumber; // 0x80
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayer_MovementServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPlayer_MovementServices) == 0x240);
    };
};
