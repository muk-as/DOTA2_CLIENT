#pragma once
#include "source2sdk/client/CInButtonState.hpp"
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1d8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "ButtonBitMask_t m_nToggleButtonDownMask"
    // static metadata: MNetworkVarNames "float32 m_flMaxspeed"
    // static metadata: MNetworkVarNames "float32 m_arrForceSubtickMoveWhen"
    #pragma pack(push, 1)
    class CPlayer_MovementServices : public client::CPlayerPawnComponent
    {
    public:
        int32_t m_nImpulse; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4]; // 0x44
        client::CInButtonState m_nButtons; // 0x48        
        uint64_t m_nQueuedButtonDownMask; // 0x68        
        uint64_t m_nQueuedButtonChangeMask; // 0x70        
        uint64_t m_nButtonDoublePressed; // 0x78        
        uint32_t m_pButtonPressedCmdNumber[64]; // 0x80        
        uint32_t m_nLastCommandNumberProcessed; // 0x180        
        [[maybe_unused]] std::uint8_t pad_0x184[0x4]; // 0x184
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint64_t m_nToggleButtonDownMask; // 0x188        
        [[maybe_unused]] std::uint8_t pad_0x190[0x8]; // 0x190
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
        QAngle m_vecOldViewAngles; // 0x1c4        
        [[maybe_unused]] std::uint8_t pad_0x1d0[0x8];
        
        // Datamap fields:
        // void m_pButtonPressedCmdNumber; // 0x80
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPlayer_MovementServices because it is not a standard-layout class
    static_assert(sizeof(CPlayer_MovementServices) == 0x1d8);
};
