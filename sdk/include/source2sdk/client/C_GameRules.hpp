#pragma once
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
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
    // Size: 0x40
    // Has VTable
    // Is Abstract
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nTotalPausedTicks"
    // static metadata: MNetworkVarNames "int m_nPauseStartTick"
    // static metadata: MNetworkVarNames "bool m_bGamePaused"
    #pragma pack(push, 1)
    class C_GameRules
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkDisable
        // metadata: MNetworkChangeAccessorFieldPathIndex
        entity2::CNetworkVarChainer __m_pChainEntity; // 0x8        
        // metadata: MNetworkEnable
        int32_t m_nTotalPausedTicks; // 0x30        
        // metadata: MNetworkEnable
        int32_t m_nPauseStartTick; // 0x34        
        // metadata: MNetworkEnable
        bool m_bGamePaused; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x39[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(C_GameRules, __m_pChainEntity) == 0x8);
    static_assert(offsetof(C_GameRules, m_nTotalPausedTicks) == 0x30);
    static_assert(offsetof(C_GameRules, m_nPauseStartTick) == 0x34);
    static_assert(offsetof(C_GameRules, m_bGamePaused) == 0x38);
    
    static_assert(sizeof(C_GameRules) == 0x40);
};
