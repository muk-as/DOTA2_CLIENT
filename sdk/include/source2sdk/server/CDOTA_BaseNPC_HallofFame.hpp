#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Building.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x1950
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_HallofFame : public server::CDOTA_BaseNPC_Building
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1920[0x10]; // 0x1920
        int32_t m_event_dota_player_team_changed; // 0x1930        
        [[maybe_unused]] std::uint8_t pad_0x1934[0x4]; // 0x1934
        server::CountdownTimer m_glowThinkTimer; // 0x1938        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_HallofFame because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_HallofFame) == 0x1950);
};
