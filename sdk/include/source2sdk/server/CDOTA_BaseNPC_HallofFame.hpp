#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Building.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x19d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_HallofFame : public source2sdk::server::CDOTA_BaseNPC_Building
        {
        public:
            uint8_t _pad19a8[0x10]; // 0x19a8
            std::int32_t m_event_dota_player_team_changed; // 0x19b8            
            uint8_t _pad19bc[0x4]; // 0x19bc
            source2sdk::server::CountdownTimer m_glowThinkTimer; // 0x19c0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_HallofFame because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_HallofFame) == 0x19d8);
    };
};
