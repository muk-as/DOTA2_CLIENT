#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
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
    // Size: 0x558
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTimerEntity : public server::CLogicalEntity
    {
    public:
        entity2::CEntityIOOutput m_OnTimer; // 0x4b8        
        entity2::CEntityIOOutput m_OnTimerHigh; // 0x4e0        
        entity2::CEntityIOOutput m_OnTimerLow; // 0x508        
        int32_t m_iDisabled; // 0x530        
        float m_flInitialDelay; // 0x534        
        float m_flRefireTime; // 0x538        
        bool m_bUpDownState; // 0x53c        
        [[maybe_unused]] std::uint8_t pad_0x53d[0x3]; // 0x53d
        int32_t m_iUseRandomTime; // 0x540        
        bool m_bPauseAfterFiring; // 0x544        
        [[maybe_unused]] std::uint8_t pad_0x545[0x3]; // 0x545
        float m_flLowerRandomBound; // 0x548        
        float m_flUpperRandomBound; // 0x54c        
        float m_flRemainingTime; // 0x550        
        bool m_bPaused; // 0x554        
        [[maybe_unused]] std::uint8_t pad_0x555[0x3];
        
        // Datamap fields:
        // float InputRefireTime; // 0x0
        // void InputFireTimer; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggle; // 0x0
        // float InputAddToTimer; // 0x0
        // void InputResetTimer; // 0x0
        // float InputSubtractFromTimer; // 0x0
        // void InputPauseTimer; // 0x0
        // void InputUnpauseTimer; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTimerEntity because it is not a standard-layout class
    static_assert(sizeof(CTimerEntity) == 0x558);
};
