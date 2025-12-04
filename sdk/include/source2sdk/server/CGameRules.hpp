#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CNetworkVarChainer.hpp"

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
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MNetworkVarNames "int m_nTotalPausedTicks"
        // static metadata: MNetworkVarNames "int m_nPauseStartTick"
        // static metadata: MNetworkVarNames "bool m_bGamePaused"
        #pragma pack(push, 1)
        class CGameRules
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x_            
            char m_szQuestName[128]; // 0x_            
            std::int32_t m_nQuestPhase; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nTotalPausedTicks; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nPauseStartTick; // 0x_            
            // metadata: MNetworkEnable
            bool m_bGamePaused; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CGameRules, __m_pChainEntity) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameRules, m_szQuestName) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameRules, m_nQuestPhase) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameRules, m_nTotalPausedTicks) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameRules, m_nPauseStartTick) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameRules, m_bGamePaused) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CGameRules) == 0x_);
    };
};
