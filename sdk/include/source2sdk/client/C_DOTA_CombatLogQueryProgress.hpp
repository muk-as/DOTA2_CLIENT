#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "PlayerID_t m_nPlayerID"
        // static metadata: MNetworkVarNames "int m_nQueryID"
        // static metadata: MNetworkVarNames "int m_nQueryRank"
        // static metadata: MNetworkVarNames "int m_nMultiQueryID"
        #pragma pack(push, 1)
        class C_DOTA_CombatLogQueryProgress
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nQueryID; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nQueryRank; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nMultiQueryID; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_DOTA_CombatLogQueryProgress, m_nPlayerID) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTA_CombatLogQueryProgress, m_nQueryID) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTA_CombatLogQueryProgress, m_nQueryRank) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTA_CombatLogQueryProgress, m_nMultiQueryID) == 0x_);
        
        static_assert(sizeof(source2sdk::client::C_DOTA_CombatLogQueryProgress) == 0x_);
    };
};
