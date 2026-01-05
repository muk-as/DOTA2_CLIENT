#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CInButtonState.hpp"
#include "source2sdk/client/CPlayerPawnComponent.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "ButtonBitMask_t m_nToggleButtonDownMask"
        // static metadata: MNetworkVarNames "float32 m_flMaxspeed"
        // static metadata: MNetworkVarNames "float32 m_arrForceSubtickMoveWhen"
        #pragma pack(push, 1)
        class CPlayer_MovementServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            std::int32_t m_nImpulse; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            source2sdk::client::CInButtonState m_nButtons; // 0x_            
            std::uint64_t m_nQueuedButtonDownMask; // 0x_            
            std::uint64_t m_nQueuedButtonChangeMask; // 0x_            
            std::uint64_t m_nButtonDoublePressed; // 0x_            
            // metadata: MNotSaved
            std::uint32_t m_pButtonPressedCmdNumber[64]; // 0x_            
            // metadata: MNotSaved
            std::uint32_t m_nLastCommandNumberProcessed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint64_t m_nToggleButtonDownMask; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "12"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "2048,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flMaxspeed; // 0x_            
            // metadata: MNetworkEnable
            float m_arrForceSubtickMoveWhen[4]; // 0x_            
            float m_flForwardMove; // 0x_            
            float m_flLeftMove; // 0x_            
            float m_flUpMove; // 0x_            
            Vector m_vecLastMovementImpulses; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            QAngle m_vecOldViewAngles; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_pButtonPressedCmdNumber; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayer_MovementServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlayer_MovementServices) == 0x_);
    };
};
