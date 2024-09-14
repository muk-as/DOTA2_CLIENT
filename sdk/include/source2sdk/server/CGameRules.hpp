#pragma once
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0xc0
    // Has VTable
    // Is Abstract
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nTotalPausedTicks"
    // static metadata: MNetworkVarNames "int m_nPauseStartTick"
    // static metadata: MNetworkVarNames "bool m_bGamePaused"
    #pragma pack(push, 1)
    class CGameRules
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkDisable
        // metadata: MNetworkChangeAccessorFieldPathIndex
        entity2::CNetworkVarChainer __m_pChainEntity; // 0x8        
        char m_szQuestName[128]; // 0x30        
        int32_t m_nQuestPhase; // 0xb0        
        // metadata: MNetworkEnable
        int32_t m_nTotalPausedTicks; // 0xb4        
        // metadata: MNetworkEnable
        int32_t m_nPauseStartTick; // 0xb8        
        // metadata: MNetworkEnable
        bool m_bGamePaused; // 0xbc        
        [[maybe_unused]] std::uint8_t pad_0xbd[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CGameRules, __m_pChainEntity) == 0x8);
    static_assert(offsetof(CGameRules, m_szQuestName) == 0x30);
    static_assert(offsetof(CGameRules, m_nQuestPhase) == 0xb0);
    static_assert(offsetof(CGameRules, m_nTotalPausedTicks) == 0xb4);
    static_assert(offsetof(CGameRules, m_nPauseStartTick) == 0xb8);
    static_assert(offsetof(CGameRules, m_bGamePaused) == 0xbc);
    
    static_assert(sizeof(CGameRules) == 0xc0);
};
