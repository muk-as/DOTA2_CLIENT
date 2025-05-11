#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CNetworkVarChainer.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x40
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MNetworkVarNames "int m_nTotalPausedTicks"
        // static metadata: MNetworkVarNames "int m_nPauseStartTick"
        // static metadata: MNetworkVarNames "bool m_bGamePaused"
        #pragma pack(push, 1)
        class C_GameRules
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x8            
            // metadata: MNetworkEnable
            std::int32_t m_nTotalPausedTicks; // 0x30            
            // metadata: MNetworkEnable
            std::int32_t m_nPauseStartTick; // 0x34            
            // metadata: MNetworkEnable
            bool m_bGamePaused; // 0x38            
            uint8_t _pad0039[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_GameRules, __m_pChainEntity) == 0x8);
        static_assert(offsetof(source2sdk::client::C_GameRules, m_nTotalPausedTicks) == 0x30);
        static_assert(offsetof(source2sdk::client::C_GameRules, m_nPauseStartTick) == 0x34);
        static_assert(offsetof(source2sdk::client::C_GameRules, m_bGamePaused) == 0x38);
        
        static_assert(sizeof(source2sdk::client::C_GameRules) == 0x40);
    };
};
