#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x320
    // Has VTable
    // MNetworkNoBase
    #pragma pack(push, 1)
    class CDOTA_ModifierManager
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x28]; // 0x0
        bool m_bCompactBuffListPending; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x29[0x2e5]; // 0x29
        uint16_t m_nHasTruesightForTeam; // 0x30e        
        uint16_t m_nHasTruesightForTeamValid; // 0x310        
        uint16_t m_nProvidesFOWPositionForTeam; // 0x312        
        uint16_t m_nProvidesFOWPositionForTeamValid; // 0x314        
        [[maybe_unused]] std::uint8_t pad_0x316[0x2]; // 0x316
        int32_t m_iBuffIndex; // 0x318        
        int32_t m_iLockRefCount; // 0x31c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTA_ModifierManager, m_bCompactBuffListPending) == 0x28);
    static_assert(offsetof(CDOTA_ModifierManager, m_nHasTruesightForTeam) == 0x30e);
    static_assert(offsetof(CDOTA_ModifierManager, m_nHasTruesightForTeamValid) == 0x310);
    static_assert(offsetof(CDOTA_ModifierManager, m_nProvidesFOWPositionForTeam) == 0x312);
    static_assert(offsetof(CDOTA_ModifierManager, m_nProvidesFOWPositionForTeamValid) == 0x314);
    static_assert(offsetof(CDOTA_ModifierManager, m_iBuffIndex) == 0x318);
    static_assert(offsetof(CDOTA_ModifierManager, m_iLockRefCount) == 0x31c);
    
    static_assert(sizeof(CDOTA_ModifierManager) == 0x320);
};
