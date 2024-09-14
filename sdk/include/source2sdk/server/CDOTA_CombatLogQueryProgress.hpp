#pragma once
#include "source2sdk/client/PlayerID_t.hpp"
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
    // Size: 0x38
    // MNetworkNoBase
    // 
    // static metadata: MNetworkVarNames "PlayerID_t m_nPlayerID"
    // static metadata: MNetworkVarNames "int m_nQueryID"
    // static metadata: MNetworkVarNames "int m_nQueryRank"
    // static metadata: MNetworkVarNames "int m_nMultiQueryID"
    #pragma pack(push, 1)
    class CDOTA_CombatLogQueryProgress
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x28]; // 0x0
        // metadata: MNetworkEnable
        client::PlayerID_t m_nPlayerID; // 0x28        
        // metadata: MNetworkEnable
        int32_t m_nQueryID; // 0x2c        
        // metadata: MNetworkEnable
        int32_t m_nQueryRank; // 0x30        
        // metadata: MNetworkEnable
        int32_t m_nMultiQueryID; // 0x34        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTA_CombatLogQueryProgress, m_nPlayerID) == 0x28);
    static_assert(offsetof(CDOTA_CombatLogQueryProgress, m_nQueryID) == 0x2c);
    static_assert(offsetof(CDOTA_CombatLogQueryProgress, m_nQueryRank) == 0x30);
    static_assert(offsetof(CDOTA_CombatLogQueryProgress, m_nMultiQueryID) == 0x34);
    
    static_assert(sizeof(CDOTA_CombatLogQueryProgress) == 0x38);
};
